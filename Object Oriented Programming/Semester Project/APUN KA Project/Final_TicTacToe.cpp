#include <iostream>
#include <fstream>
using namespace std;



class GameEntity {
public:
    virtual void saveInfo(ofstream& outFile) = 0; 
    virtual void displayInfo() = 0;
};




class Player : public GameEntity {
protected:
    char symbol;  // 'X' or 'O'

public:
    Player(char symbol) {
        this->symbol = symbol;
    }

    char getSymbol() {
        return symbol;
    }

    void saveInfo(ofstream& outFile) override {
        outFile << "Player symbol: " << symbol << endl;
    }
        
	void displayInfo() override {
        cout << "Player symbol: " << symbol << endl;
    }
};





class Board : public GameEntity {
private:
    char board[3][3];

public:
    Board() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
    }

    bool mark(int row, int col, char symbol) {
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = symbol;
            return true;
        }
        return false;
    }


    bool isFull() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }    
    
    bool checkWin(char symbol) {
        // Check rows 
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) {
                return true;
            }
        }
        
        // Check columns
        for (int j = 0; j < 3; j++) {
            if (board[0][j] == symbol && board[1][j] == symbol && board[2][j] == symbol) {
                return true;
            }
        }
        
        // Check diagonals
        if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
            return true;
        }
        
        if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
            return true;
        }
        
        return false;
    }
    
    
    void display(ofstream& outFile) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                outFile << board[i][j] << " ";
            }
            outFile << endl;
        }
    }
    
    
    void display2() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    
    void saveInfo(ofstream& outFile) override {
        outFile << "Board status:" << endl;
        display(outFile); 
    }
    
    
    void displayInfo() override {
        cout << "Board status:" << endl;
        display2();
    }

};




class Game {
private:
    Board board;
    Player* player1;
    Player* player2;
    int currentPlayerIndex;
    ofstream gameFile;
public:
    Game(Player* player1, Player* player2) {
        this->player1 = player1;
        this->player2 = player2;
        currentPlayerIndex = 0;
        gameFile.open("game_log.txt"); 
    }
    ~Game() {
        gameFile.close(); 
    }

    void start() {
        while (!board.isFull()) {
        	board.displayInfo();
            board.saveInfo(gameFile);
            int row, col;

            do {
                cout << "Player " << currentPlayerIndex + 1 << "'s turn. Enter row and column (0-2): ";
                cin >> row >> col;
                if (!(row >= 0 && row < 3 && col >= 0 && col < 3)) {
                    cout << "Invalid input. Please enter row and column between 0 and 2." << endl;
                }
            } while (!(row >= 0 && row < 3 && col >= 0 && col < 3));
            
            
            if (!board.mark(row, col, currentPlayerIndex == 0? player1->getSymbol() : player2->getSymbol())) {
                cout << "Invalid move. Try again." << endl;
            } else {
                if (board.checkWin(currentPlayerIndex == 0? player1->getSymbol() : player2->getSymbol())) {
                    cout << "Player " << currentPlayerIndex + 1 << " wins!" << endl;
                    break;
                }
            }
            currentPlayerIndex = 1 - currentPlayerIndex;
        }

         board.displayInfo();
         board.saveInfo(gameFile);
        	
    }
};






int main() {
    Player* playerX = new Player('X');
    Player* playerO = new Player('O');
    
    Game game(playerX, playerO);
    
    game.start();
    delete playerX;
    delete playerO;
    return 0;
}






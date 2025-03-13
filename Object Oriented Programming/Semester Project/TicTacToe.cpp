#include<iostream>
using namespace std;


class Player {
protected:
    char symbol;  // 'X' or 'O'

public:
    // Constructor
    Player(char symbol) {
	this->symbol = symbol;
	}

    char getSymbol() {
        return symbol;
    }
};



class Board {
private:
    char board[3][3]; 

public:
    // Constructor
    Board() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
    }


    // Method to mark a position on the board
    bool mark(int row, int col, char symbol) {
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = symbol;
            return true;
        }
        return false;
    }


    // Method to check if the board is full
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


    // Method to check if a player has won
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


    // Method to display the board
    void display() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
};





class Game {
private:
    Board board;
    Player* player1;
    Player* player2;
    int currentPlayerIndex;

public:
    // Constructor
      Game(Player* player1, Player* player2) {
        this->player1 = player1;
        this->player2 = player2;
        currentPlayerIndex = 0;
    }


    // Method to start a new game
    void start() {
        while (!board.isFull()) {
            displayBoard();
            int row, col;
            do {
                cout << "Player " << currentPlayerIndex + 1 << "'s turn. Enter row and column (0-2): ";
                cin >> row >> col;
                // Validate input
                if (row < 0 || row > 2 || col < 0 || col > 2) {
                    cout << "Invalid input. Please enter row and column between 0 and 2." << endl;
                }
            } while (row < 0 || row > 2 || col < 0 || col > 2);
            if (!board.mark(row, col, currentPlayerIndex == 0? player1->getSymbol() : player2->getSymbol())) {
                std::cout << "Invalid move. Try again." << std::endl;
            } else if (board.checkWin(currentPlayerIndex == 0? player1->getSymbol() : player2->getSymbol())) {
                std::cout << "Player " << currentPlayerIndex + 1 << " wins!" << std::endl;
                break;
            }
            currentPlayerIndex = 1 - currentPlayerIndex;
        }
        displayBoard();
    }

    // Method to display the board
    void displayBoard() {
        board.display();
    }
};





int main() {
    // Create players
    Player* playerX = new Player('X');
    Player* playerO = new Player('O');

    // Create a game
    Game game(playerX, playerO);

    // Start the game
    game.start();

    delete playerX;
    delete playerO;

    return 0;
}




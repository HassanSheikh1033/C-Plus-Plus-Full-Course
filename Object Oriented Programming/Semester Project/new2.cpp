#include<iostream>
#include <fstream>
#include <sstream>
using namespace std;



// Base class for game entities
class GameEntity {
public:
    virtual ~GameEntity() {} // Virtual destructor for proper cleanup
    virtual void displayInfo() = 0; // Pure virtual function
};



class Player : public GameEntity {
protected:
    char symbol;  // 'X' or 'O'

public:
    Player(char symbol)  {
	 this->symbol = symbol;
	}

    char getSymbol() {
        return symbol;
    }

    // Override the pure virtual function from GameEntity
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
    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }


    // Override the pure virtual function from GameEntity
    void displayInfo() override {
        cout << "Board status:" << endl;
        display(); // Display the current state of the board
    }


    
    std::string boardToString() const {
        std::ostringstream oss;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                oss << board[i][j];
            }
            oss << "\n";
        }
        return oss.str();
    }

   bool setBoardFromString(const std::string& boardState) {
    std::istringstream iss(boardState);
    std::string line;
    int rowIndex = 0;
    while (getline(iss, line)) {
        for (size_t i = 0; i < line.size(); ++i) {
            char c = line[i];
            if (c!= ' ') { // Ignore empty spaces
                board[rowIndex][i] = c; // Convert character to appropriate symbol
            }
        }
        rowIndex++;
     }
    return true; // Assume success unless proven otherwise
   }

};





class Game {
private:
    Board board;
    Player* player1;
    Player* player2;
    int currentPlayerIndex;


public:
    void save(); // Declaration for save method
    void read(); // Declaration for read method


    Game(Player* player1, Player* player2) {
	   this->player1 = player1;
	   this->player2 = player2;
	   currentPlayerIndex = 0;
    }


    void start() {
        while (!board.isFull()) {
            board.displayInfo();
            int row, col;
            do {
                cout << "Player " << currentPlayerIndex + 1 << "'s turn. Enter row and column (0-2): ";
                cin >> row >> col;
                if (!(row >= 0 && row < 3 && col >= 0 && col < 3)) {
                    cout << "Invalid input. Please enter row and column between 0 and 2." << endl;
                }
            } while (!(row >= 0 && row < 3 && col >= 0 && col < 3));
            if (!board.mark(row, col, currentPlayerIndex == 0? player1->getSymbol() : player2->getSymbol())) {
                std::cout << "Invalid move. Try again." << std::endl;
            } else if (board.checkWin(currentPlayerIndex == 0? player1->getSymbol() : player2->getSymbol())) {
                std::cout << "Player " << currentPlayerIndex + 1 << " wins!" << std::endl;
                break;
            }
            currentPlayerIndex = 1 - currentPlayerIndex;
        }
        board.displayInfo();
    }
};









void Game::save() {
    std::ofstream outfile("game_state.txt");
    if (!outfile) {
        std::cerr << "Failed to open file for writing: game_state.txt" << std::endl;
        return;
    }

    outfile << board.boardToString() << std::endl;
    outfile << currentPlayerIndex << std::endl;

    outfile.close();
    std::cout << "File saved successfully." << std::endl; // Debugging output
}





void Game::read() {
    std::ifstream infile("game_state.txt");
    if (!infile) {
        std::cerr << "Failed to open file for reading: game_state.txt" << std::endl;
        return;
    }

    std::string boardState;
    int currentPlayerIndex;
    if (!(infile >> boardState >> currentPlayerIndex)) {
        std::cerr << "Failed to read game state from file: game_state.txt" << std::endl;
        return;
    }

    // Attempt to set the board state from the string
    if (!board.setBoardFromString(boardState)) {
        std::cerr << "Failed to restore board state from file: game_state.txt" << std::endl;
        return;
    }

    // Set the current player index
    this->currentPlayerIndex = currentPlayerIndex;
    std::cout << "File read successfully." << std::endl; // Debugging output

    infile.close();
}





int main() {
    // Create players
    Player* playerX = new Player('X');
    Player* playerO = new Player('O');

    // Create a game
    Game game(playerX, playerO);

	 

    // Start the game
    game.start();

    // Save the game state after the game ends
    game.save();

    // Read the game state from the file
    game.read();
    

    delete playerX;
    delete playerO;

    return 0;
}



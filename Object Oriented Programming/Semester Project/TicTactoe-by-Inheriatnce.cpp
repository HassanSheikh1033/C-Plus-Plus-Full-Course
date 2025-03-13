#include <iostream>
using namespace std;



class GameBoard {
private:
    enum SquareState { Blank = ' ', X = 'X', O = 'O' };
    char board[3][3];

public:


    GameBoard() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = Blank;
            }
        }
    }



    void draw() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }


    bool isTaken(int row, int col) const {
        return board[row][col]!= Blank;
    }


    bool setX(int row, int col) {
        if (!isTaken(row, col)) {
            board[row][col] = X;
            return true;
        }
        return false;
    }


    bool setO(int row, int col) {
        if (!isTaken(row, col)) {
            board[row][col] = O;
            return true;
        }
        return false;
    }


    bool isLine() const {
        // Check rows, columns, and diagonals for a win
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == X && board[i][1] == X && board[i][2] == X) return true;
            if (board[0][i] == X && board[1][i] == X && board[2][i] == X) return true;
        }
        if (board[0][0] == X && board[1][1] == X && board[2][2] == X) return true;
        if (board[0][2] == X && board[1][1] == X && board[2][0] == X) return true;

        for (int i = 0; i < 3; i++) {
            if (board[i][0] == O && board[i][1] == O && board[i][2] == O) return true;
            if (board[0][i] == O && board[1][i] == O && board[2][i] == O) return true;
        }
        if (board[0][0] == O && board[1][1] == O && board[2][2] == O) return true;
        if (board[0][2] == O && board[1][1] == O && board[2][0] == O) return true;

        return false;
    }
};




class Game : public  GameBoard {
public:
    GameBoard board;

    void play() {
        int row, col;
        while (!board.isLine()) {
            board.draw();
            cout << "Player X, enter row and column: ";
            cin >> row >> col;
            if (board.setX(row, col)) {
                if (board.isLine()) {
                    cout << "Player X wins!" << endl;
                    return;
                }
            } else {
                cout << "Invalid move!" << endl;
            }

            cout << "Player O, enter row and column: ";
            cin >> row >> col;
            if (board.setO(row, col)) {
                if (board.isLine()) {
                    cout << "Player O wins!" << endl;
                    return;
                }
            } else {
                cout << "Invalid move!" << endl;
            }
        }
    }
};



int main() {
    Game game;
    game.play();
    return 0;
}











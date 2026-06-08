#include <iostream>
#include <vector>
using namespace std;

class SudokuSolver {
private:
    const int N = 9;

    // Check if placing num is valid
    bool isValid(vector<vector<int>>& board, int row, int col, int num) {
        // Check row and column
        for (int i = 0; i < N; i++) {
            if (board[row][i] == num || board[i][col] == num)
                return false;
        }

        // Check 3x3 subgrid
        int startRow = row - row % 3;
        int startCol = col - col % 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] == num)
                    return false;
            }
        }

        return true;
    }

    // Backtracking function
    bool solve(vector<vector<int>>& board) {
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {

                // Find empty cell
                if (board[row][col] == 0) {

                    // Try numbers 1 to 9
                    for (int num = 1; num <= 9; num++) {
                        if (isValid(board, row, col, num)) {

                            board[row][col] = num;

                            // Recur
                            if (solve(board))
                                return true;

                            // Backtrack
                            board[row][col] = 0;
                        }
                    }

                    // If no number works
                    return false;
                }
            }
        }

        return true; // Solved
    }

public:
    void solveSudoku(vector<vector<int>>& board) {
        solve(board);
    }

    void printBoard(const vector<vector<int>>& board) {
        cout << "Solved Sudoku Puzzle:\n";

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    vector<vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    SudokuSolver obj;
    obj.solveSudoku(board);
    obj.printBoard(board);

    return 0;
}

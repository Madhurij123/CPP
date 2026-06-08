#include <iostream>
#include <vector>
using namespace std;

class WordSearch {
private:
    int rows, cols;

    bool backtrack(vector<vector<char>>& board, string& word, int i, int j, int index) {
        // Base case: all characters matched
        if (index == word.length())
            return true;

        // Boundary + mismatch check
        if (i < 0 || j < 0 || i >= rows || j >= cols || board[i][j] != word[index])
            return false;

        // Mark current cell as visited
        char temp = board[i][j];
        board[i][j] = '#';

        // Explore 4 directions
        bool found =
            backtrack(board, word, i + 1, j, index + 1) || // down
            backtrack(board, word, i - 1, j, index + 1) || // up
            backtrack(board, word, i, j + 1, index + 1) || // right
            backtrack(board, word, i, j - 1, index + 1);   // left

        // Restore cell (backtrack)
        board[i][j] = temp;

        return found;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        cols = board[0].size();

        // Try starting from each cell
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (backtrack(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    string word = "ABCCED";

    WordSearch obj;

    if (obj.exist(board, word))
        cout << "The word '" << word << "' exists in the grid." << endl;
    else
        cout << "The word '" << word << "' does NOT exist in the grid." << endl;

    return 0;
}



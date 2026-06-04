class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col) {
        for (int i = 0; i < 9; i++) {
            if ((board[row][col] == board[row][i] && col != i) ||
                (board[row][col] == board[i][col] && row != i))
                return false;
        }

        int n = row / 3;
        int m = col / 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int r = n * 3 + i;
                int c = m * 3 + j;
                if (board[row][col] == board[r][c] && !(r == row && c == col))
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                if (!isSafe(board, i, j)) {
                    return false;
                }
            }
        }

        return true;
    }
};
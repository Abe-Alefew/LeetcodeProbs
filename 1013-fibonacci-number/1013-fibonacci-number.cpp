class Solution {
public:
    vector<vector<int>> mult(vector<vector<int>> mat1, vector<vector<int>> mat2) {
        return {
            {
                mat1[0][0]*mat2[0][0] + mat1[0][1]*mat2[1][0],
                mat1[0][0]*mat2[0][1] + mat1[0][1]*mat2[1][1]
            },
            {
                mat1[1][0]*mat2[0][0] + mat1[1][1]*mat2[1][0],
                mat1[1][0]*mat2[0][1] + mat1[1][1]*mat2[1][1]
            }
        };
    }

    vector<vector<int>> mat_pow(vector<vector<int>> mat, int power) {
        vector<vector<int>> res = {{1, 0}, {0, 1}}; // Identity matrix
        while (power) {
            if (power % 2 == 1) {
                res = mult(res, mat);
            }
            mat = mult(mat, mat);
            power /= 2;
        }
        return res;
    }

    int fib(int n) {
        if (n == 0) return 0;
        vector<vector<int>> base = {{1, 1}, {1, 0}};
        vector<vector<int>> res = mat_pow(base, n - 1);
        return res[0][0];
    }
};

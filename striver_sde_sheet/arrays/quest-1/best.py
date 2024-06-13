from typing import List

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        col_flag = 1
        rows, cols = len(matrix), len(matrix[0])        
        for i in range(rows):
            for j in range(cols):
                if matrix[i][j] == 0:
                    matrix[i][0] = 0
                    if j == 0:
                        col_flag = 0
                    else:
                        matrix[0][j] = 0
        
        for i in range(1, rows):
            for j in range(1, cols):
                if matrix[i][0] == 0 or matrix[0][j] == 0:
                    matrix[i][j] = 0
        
        if matrix[0][0] == 0:
            for j in range(cols):
                matrix[0][j] = 0
        
        if col_flag == 0:
            for i in range(rows):
                matrix[i][0] = 0

a = Solution()
a.setZeroes([[0, 1]])

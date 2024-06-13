from typing import List

class Solution:
    # Time Complexity => O((m X n)*(m+n))
    # Space Complexity => O(m X n)
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        row_cols = []
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==0:
                    row_cols.append([i,j])
        while row_cols:
            element = row_cols.pop(0)
            row = element[0]
            col = element[1]
            print(row, col)
            for i in range(len(matrix[0])):
                matrix[row][i] = 0
            for i in range(len(matrix)):
                matrix[i][col] = 0
        print(matrix)

a = Solution()
a.setZeroes([[0,1,2,0],[3,4,5,2],[1,3,1,5]])
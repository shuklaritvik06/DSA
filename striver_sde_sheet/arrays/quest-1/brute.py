from typing import List

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        row = []
        col = []
        # Time Complexity => O(nm+nm) => O(2nm)
        # Space Complexity => O(m + n)
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    row.append(i)
                    col.append(j)
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if i in row or j in col:
                    matrix[i][j] = 0
        print(matrix)
        
a = Solution()
a.setZeroes([[0,1,2,0],[3,4,5,2],[1,3,1,5]])


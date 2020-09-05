class Solution(object):
    def diagonalSum(self, mat):
        m = len(mat)
        i = 0
        sumw = 0;
        for j in mat:
            sumw += j[i]
            sumw += j[m-i-1]
            i+=1
        if(m%2 != 0):
            sumw-=mat[m//2][m//2]
        return sumw
        
        
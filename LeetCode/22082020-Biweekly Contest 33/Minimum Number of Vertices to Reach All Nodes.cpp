class Solution(object):
    def findSmallestSetOfVertices(self, n, edges):
        #gr = [[] for _ in xrange(n)]
        deg = [0] * n
        for u,v in edges:
            #gr[u].append(v)
            deg[v] += 1
        return [u for u in xrange(n) if deg[u] == 0]
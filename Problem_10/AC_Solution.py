from collections import deque


class BipGraph:
    NIL = 0
    INF = float('inf')

    def __init__(self, m, n):
        self.m = m
        self.n = n
        self.adj = [[] for _ in range(m + 1)]

    def add_edge(self, u, v):
        self.adj[u].append(v)

    def hopcroft_karp(self):
        self.pairU = [self.NIL] * (self.m + 1)
        self.pairV = [self.NIL] * (self.n + 1)
        self.dist = [0] * (self.m + 1)

        result = 0
        while self.bfs():
            for u in range(1, self.m + 1):
                if self.pairU[u] == self.NIL and self.dfs(u):
                    result += 1
        return result

    def bfs(self):
        Q = deque()

        for u in range(1, self.m + 1):
            if self.pairU[u] == self.NIL:
                self.dist[u] = 0
                Q.append(u)
            else:
                self.dist[u] = self.INF

        self.dist[self.NIL] = self.INF

        while Q:
            u = Q.popleft()

            if self.dist[u] < self.dist[self.NIL]:
                for v in self.adj[u]:
                    if self.dist[self.pairV[v]] == self.INF:
                        self.dist[self.pairV[v]] = self.dist[u] + 1
                        Q.append(self.pairV[v])

        return self.dist[self.NIL] != self.INF

    def dfs(self, u):
        if u != self.NIL:
            for v in self.adj[u]:
                if self.dist[self.pairV[v]] == self.dist[u] + 1:
                    if self.dfs(self.pairV[v]):
                        self.pairV[v] = u
                        self.pairU[u] = v
                        return True
            self.dist[u] = self.INF
            return False
        return True


if __name__ == "__main__":
    n, m = map(int, input().split())

    inj = [[] for _ in range(26)]
    don = [[] for _ in range(26)]

    x = input().split()
    for i in range(len(x)):
        inj[ord(x[i]) - ord('A')].append(i + 1)

    x = input().split()
    for i in range(len(x)):
        don[ord(x[i]) - ord('A')].append(i + 1)

    g = BipGraph(n, n)

    for i in range(m):
        x, y = input().split()
        ia = ord(y) - ord('A')
        ib = ord(x) - ord('A')

        for a in inj[ia]:
            for b in don[ib]:
                g.add_edge(a, b)

    for i in range(26):
        for a in inj[i]:
            for b in don[i]:
                g.add_edge(a, b)

    if g.hopcroft_karp() == n:
        print("YES")
    else:
        print("NO")

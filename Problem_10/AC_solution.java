import java.util.*;

class BipGraph {
    private static final int NIL = 0;
    private static final int INF = Integer.MAX_VALUE;

    private int m, n;
    private List<Integer>[] adj;
    private int[] pairU, pairV, dist;

    public BipGraph(int m, int n) {
        this.m = m;
        this.n = n;
        adj = new ArrayList[m + 1];
        for (int i = 0; i <= m; ++i) {
            adj[i] = new ArrayList<>();
        }
    }

    public void addEdge(int u, int v) {
        adj[u].add(v);
    }

    public int hopcroftKarp() {
        pairU = new int[m + 1];
        pairV = new int[n + 1];
        dist = new int[m + 1];

        Arrays.fill(pairU, NIL);
        Arrays.fill(pairV, NIL);

        int result = 0;
        while (bfs()) {
            for (int u = 1; u <= m; u++) {
                if (pairU[u] == NIL && dfs(u)) {
                    result++;
                }
            }
        }
        return result;
    }

    private boolean bfs() {
        Queue<Integer> Q = new LinkedList<>();

        for (int u = 1; u <= m; u++) {
            if (pairU[u] == NIL) {
                dist[u] = 0;
                Q.add(u);
            } else {
                dist[u] = INF;
            }
        }

        dist[NIL] = INF;

        while (!Q.isEmpty()) {
            int u = Q.poll();

            if (dist[u] < dist[NIL]) {
                for (int v : adj[u]) {
                    if (dist[pairV[v]] == INF) {
                        dist[pairV[v]] = dist[u] + 1;
                        Q.add(pairV[v]);
                    }
                }
            }
        }

        return dist[NIL] != INF;
    }

    private boolean dfs(int u) {
        if (u != NIL) {
            for (int v : adj[u]) {
                if (dist[pairV[v]] == dist[u] + 1) {
                    if (dfs(pairV[v])) {
                        pairV[v] = u;
                        pairU[u] = v;
                        return true;
                    }
                }
            }
            dist[u] = INF;
            return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int m = scanner.nextInt();

        List<List<Integer>> inj = new ArrayList<>(26);
        List<List<Integer>> don = new ArrayList<>(26);

        for (int i = 0; i < 26; i++) {
            inj.add(new ArrayList<>());
            don.add(new ArrayList<>());
        }

        for (int i = 1; i <= n; i++) {
            char x = scanner.next().charAt(0);
            inj.get(x - 'A').add(i);
        }

        for (int i = 1; i <= n; i++) {
            char x = scanner.next().charAt(0);
            don.get(x - 'A').add(i);
        }

        BipGraph g = new BipGraph(n, n);

        for (int i = 0; i < m; i++) {
            char x = scanner.next().charAt(0);
            char y = scanner.next().charAt(0);
            int ia = y - 'A';
            int ib = x - 'A';

            for (int a : inj.get(ia)) {
                for (int b : don.get(ib)) {
                    g.addEdge(a, b);
                }
            }
        }

        for (int i = 0; i < 26; i++) {
            for (int a : inj.get(i)) {
                for (int b : don.get(i)) {
                    g.addEdge(a, b);
                }
            }
        }

        if (g.hopcroftKarp() == n) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}

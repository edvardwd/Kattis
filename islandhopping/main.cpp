#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using vii = array<double, 2>;
using viii = array<double, 3>;


struct UF {
	vi e;
	UF(int n) : e(n, -1) {}
	bool sameSet(int a, int b) { return find(a) == find(b); }
	int size(int x) { return -e[find(x)]; }
	int find(int x) { return e[x] < 0 ? x : e[x] = find(e[x]); }
	bool join(int a, int b) {
		a = find(a), b = find(b);
		if (a == b) return false;
		if (e[a] > e[b]) swap(a, b);
		e[a] += e[b]; e[b] = a;
		return true;
	}
};

struct p{
    double x;
    double y;
    p(double x, double y) :x{x}, y{y}{};
};

double dist(p p1, p p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


int main(){
    cin.tie(0)->sync_with_stdio(false);
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> m;

        vector<p> points;
        for (int j = 0; j < m; j++){
            double a, b;
            cin >> a >> b;
            points.push_back({a, b});
        }

        vector<viii> edges;
        for (int a = 0; a < m; a++){
            for (int b = a + 1; b < m; b++){
                edges.push_back({(double) a, (double) b, dist(points.at(a), points.at(b))});
            }
        }
        sort(edges.begin(), edges.end(), [](viii a, viii b){
            return a.at(2) < b.at(2);
        });

        UF uf = UF(m);
        double total_length = 0;
        int joined = 0;

        for (auto [u, v, w] : edges){
            if (uf.join((int) u, (int) v)){
                total_length += w;
                joined++;

                if (joined == m - 1) break;
            }

        }
        cout << fixed << setprecision(9) << total_length << endl;
    }
}
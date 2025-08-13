#include <bits/stdc++.h>

using namespace std;

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<pii> vpii;

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fr(i, n) for (int i = 0; i < n; i++)

#define debug(x) cerr << #x << " = " << (x) << endl;
#define vin(a)                           \
    for (int i = 0; i < (a).size(); ++i) \
        cin >> a[i];
#define vout(a)                          \
    for (int i = 0; i < (a).size(); ++i) \
        cout << a[i] << ' ';             \
    cout << endl;
#define yes cout << 'Y' << 'E' << 'S' << endl;
#define no cout << 'N' << 'O' << endl;
#define en cout << endl;

ll gcd(ll temp_a, ll temp_b) { return temp_b == 0 ? temp_a : gcd(temp_b, temp_a % temp_b); }
ll lcm(ll temp_a, ll temp_b) { return (temp_a / gcd(temp_a, temp_b)) * temp_b; }
// -------------------------------------------------------------------------------------------------
void sol()
{
    ll n;
    cin >> n;
    vi indegree(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        indegre
    }
}

int main()
{
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
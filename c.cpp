// mdhafizurrahmansiyam283
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define nl endl
#define M 1000000007
#define N 1000000
#define printF(x)             \
    for (auto value : x)      \
        cout << value << ' '; \
    cout << nl;
#define input(x)          \
    for (auto &value : x) \
        cin >> value;
using namespace std;
class something
{
    int x;

public:
    void set(int xx)
    {
        x = xx;
    }
    friend bool add(something a, something b);
    friend class A;
};
class A
{
public:
    void printff(something x)
    {
        cout << x.x << endl;
    }
};
bool add(something a, something b)
{
    return a.x == b.x;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifdef EPSILON
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    something a, b;
    a.set(5);
    b.set(5);
    cout << add(a, b) << endl;
    A aa;
    aa.printff(a);
}
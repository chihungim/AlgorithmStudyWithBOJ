#include <iostream>

using namespace std;

struct _node        
{
    int parent;
    int left;
    int right;
};

_node tree[27];
int n;

enum class Order
{
    PRE = 0,
    IN = 1,
    POST = 2
};

void traversal(int key, Order order = Order::PRE )                 
{
    if (key < 0) return;                     
    if (order == Order::PRE) cout << char(key + 65);   
    traversal(tree[key].left, order);           
    if (order == Order::IN) cout << char(key + 65);
    traversal(tree[key].right, order);
    if (order == Order::POST) cout << char(key + 65);
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char p, l, r; cin >> p >> l >> r;
        tree[p - 65].left = l - 65;           
        tree[p - 65].right = r - 65;
        tree[l - 65].parent = tree[r - 65].parent=p - 65;
    }
    traversal(0);                              
    cout << '\n';
    traversal(0, Order::IN);                             
    cout << '\n';
    traversal(0, Order::POST);                             
    cout << '\n';
}
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int MAXN = 5e5 + 5;
const int INF = 0x3f3f3f3f;
string name,newName,op;
int ind = 1;

struct Node {
    string name;
    bool flag;
}node[MAXN];

// 按名字找文件，找到返回下标便于后续操作，找不到返回 0
int check(string &name) {
    for (int i = 1; i < ind; i++) {
        if (node[i].name == name) {
            return i;
        }
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == "touch") {
            cin >> name;
            int index = check(name);
            /*
             如果文件不存在就创建，
             因为这里本身就是按创建时间添加进 node 数组的，
             所以无需排序，也就无需记录创建时间
            */
            if (!index) {
              node[ind].name = name;
              // 标记文件未被删除
              node[ind++].flag = true;
            }
        } else if (op == "rm") {
            cin >> name;
            int index = check(name);
            // 如果文件存在
            if (index) {
                // 标记文件被删除
                node[index].flag = false;
            }
        } else if (op == "ls") {
            // 按顺序遍历，如果文件未被删除就输出
            for (int i = 1; i < ind; i++) {
                if (node[i].flag) {
                    cout << node[i].name << "\n";
                }
            }
        } else {
            cin >> name >> newName;
            int index1 = check(name),index2 = check(newName);
            // 如果原名字存在且新名字不存在
            if (index1 && !index2) {
                node[index1].name = newName;
            }
        }
    }

}

int main() {
    IOS
    solve();
    return 0;
}

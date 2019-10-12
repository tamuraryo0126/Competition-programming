#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main(){
    int R[MAX], n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> R[n];
    int maxv=-200000000000;
    int minv = R[0]
    
    for(int i=1; i<n; i++){
        maxv = max(maxv, R[i]-minv);
        minv = min(min,R[i]);
    }
    cout << maxv << endl;
    return 0;
}

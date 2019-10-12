#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main(){
    int s[MAX], n, v, j;
    cin >> n;
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<n; i++) cout << s[i];
    cout << endl;
    for(int i=1; i<n; i++){
        v=s[i];
        j=i-1;
        while(j>=0&&s[j]>v){
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=v;
        for(int i=0; i<n; i++) cout << s[i];
        cout << endl;
    }
    return 0;
}
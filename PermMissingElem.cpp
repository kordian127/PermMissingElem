#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A[]={1,4,2,5,7,8,10};
    int *it;
    int n=sizeof(A)/sizeof(A[0]);
    sort(A, A + n);
    for(int i=1;i<A[n-1];i++){
        it = find(A, A+n, i);
        if (it!=A+n){
        }
        else{
            cout<<i<<endl;
        }

    }
}

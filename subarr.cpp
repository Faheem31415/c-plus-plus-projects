#include <iostream>
using namespace std;

int main() {
    int nums[]={1,2,3,4,5};
    int s=sizeof(nums)/sizeof(nums[0]);
    for(int st=0;st<s;st++){
        for(int en=st;en<s;en++){
            for(int i=st;i<=en;i++){
                cout<<nums[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
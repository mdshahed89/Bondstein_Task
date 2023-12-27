#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll target;
    cout<<"Enter the target-> "; cin>>target;
    ll s;
    cout<<"Enter the size of list-> "; cin>>s;
    ll sh[s];
    for(ll i=0;i<s;i++){
        cin>>sh[i];
    }

    //using binary search;
    ll left=0,right=s-1;
    ll flag=0;
    while(left<right)
    {
        ll value=sh[left]+sh[right];
        if(value==target)
        {
            flag=1;
            break;
        }
        else if(value<target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    if(flag==1)
    {
        cout<<"two indices is -> "<<left<<" "<<right<<endl;
    }
    else{
        cout<<"indices not found"<<endl;
    }

    return 0;
}

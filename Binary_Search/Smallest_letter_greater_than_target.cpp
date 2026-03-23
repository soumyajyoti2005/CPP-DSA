#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> letters={'c','f','g','k','l','n','q','s','v','z'};
    char target='r';

    int lo=0;
    int hi=letters.size()-1;
    int mid;
    char ans='\0';

    while(lo<=hi){
        mid=(lo+hi)/2;

        if(letters[mid] > target){
            ans=letters[mid];
            hi=mid-1;
        }
        else lo=mid+1;
    }

    if(ans == '\0') cout<<letters[0];
    else cout<<ans;

}
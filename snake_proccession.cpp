#include <iostream>
using namespace std;

int main() {
    
    int r;
    int s;
    bool d,in;
    char ch;
    cin>>r;
    while(r--){
        cin>>s;
        d = false;
        in  = false;
        for(int i = 0;i < s;++i){
            cin>>ch;
            if(ch == 'T' and d == true){
                d = false;
            }
            else if(ch == 'H' and d == false){
                d = true;
            }
            else if(ch != '.'){
                in = true;
            }
        }
        if(in == true or d == true)cout<<"Invalid"<<endl;
        else cout<<"Valid"<<endl;
    }
    return 0;
}

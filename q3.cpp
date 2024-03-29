#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:: ";
    cin>>n;
    cout<<endl;
    for (int i=1;i<=(2*n)-1;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(i==1 || i==(2*n)-1 || j==1 || j==(2*n)-1){
                cout<<n<<" ";
            }
            else if(i==2 || i==(2*n)-2 ||j==2 || j==(2*n)-2 ){
                cout<<n-1<<" ";
            }
            else if(i==3 || i==(2*n)-3 ||j==3 || j==(2*n)-3 ){
                cout<<n-2<<" ";
                }
             else if(i==4 || i==(2*n)-4 ||j==4 || j==(2*n)-4 ){
                cout<<n-3<<" ";
                }
             else if(i==5 || i==(2*n)-5 ||j==5 || j==(2*n)-5 ){
                cout<<n-4<<" ";
                }
             else if(i==6 || i==(2*n)-6 ||j==6 || j==(2*n)-6 ){
                cout<<n-5<<" ";
                }
            else if(i==7 || i==(2*n)-7 ||j==7 || j==(2*n)-7 ){
                cout<<n-6<<" ";
                }
            else if(i==8 || i==(2*n)-8 ||j==8 || j==(2*n)-8 ){
                cout<<n-7<<" ";}
            else if(i==9 || i==(2*n)-9 ||j==9 || j==(2*n)-9 ){
                cout<<n-8<<" ";}
            else
                cout<<"1";
        }
        cout<<endl;
    }
}

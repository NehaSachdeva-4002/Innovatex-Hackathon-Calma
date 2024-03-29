#include <iostream>
using namespace std;
int main()
{
    int row=3;
    int num=1;
    int col=3;
    int ch;
    cout<<"enter a number between 3 and 9"<<endl;
    cin>>ch;
    switch(ch){
case 2:{
    for (int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<num+1;
            }
            else
                cout<<"1";
        }
        cout<<endl;
    }
}
break;

case 3:{
    row=row+1;
    col=col+1;
    for (int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<num+2;
            }
            else if(i==2 || i==row+1 || j==2 || j==col+1)
                cout<<num+1;
            else
                cout<<1;
        }
        cout<<endl;
    }
}
    }

//    for (int i=1;i<=row;i++){
//        for(int j=1;j<=col;j++){
//            if(i==1 || i==row || j==1 || j==col){
//                cout<<num+1;
//            }
//            else
//                cout<<"1";
//        }
//        cout<<endl;
//    }
    return 0;
}

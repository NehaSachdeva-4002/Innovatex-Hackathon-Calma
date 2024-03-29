#include <iostream>
using namespace std;
int main()
         {
          int n,j;
    cout<<"Enter the no. of rows:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>=j)
                cout<<"*";
            else
    {


                cout<<"00";

    }
        }

                cout<<endl;


        }




    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if(j<=i)
                cout<<"*";
            else
    {


                cout<<"00";

    }
        }

                cout<<endl;


        }

        return 0;
    }




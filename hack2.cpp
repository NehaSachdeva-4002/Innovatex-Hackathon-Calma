#include <iostream>
using namespace std;
int main()
         {
          int n,j;
    cout<<"Enter the no. of rows:";
    cin>>n;
// for upper triangle
    for(int i=1; i<=n; i++)
    {
        //for upper left triangle
        for(int j=1; j<=n; j++)
        {
            if(i>=j)
                cout<<"*";
            else
           {
                cout<<" ";

           }


        }

// for upper right triangle
         for(int j=1; j<=n; j++)
        {
            if(j<=n-i)
                cout<<" ";
            else
           {
                cout<<"*";

           }


        }
                cout<<endl;

        }


// for lower triangle

    for(int i=n; i>0; i--)
    {
        // for upper left triangle
        for(int j=1; j<=n; j++)
        {
            if(j<=i)
                cout<<"*";
            else
    {


                cout<<" ";

    }
        }
        // for lower right triangle
        for(int j=1; j<=n; j++)
        {
            if(j<=n-i)
                cout<<" ";
            else
           {
                cout<<"*";

           }


        }

                cout<<endl;


        }

        return 0;
    }




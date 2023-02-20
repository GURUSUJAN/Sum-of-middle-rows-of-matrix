#include"iostream"
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"Size: ";
    cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        cout<<"For Row"<<" "<<i<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    m=n/2;
    cout<<"Sum of  Row: "<<endl;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(i==m)
            {
                sum+=ar[i][j];
            }
        }
    }
    cout<<sum<<endl;
    sum=0;
    cout<<"Sum of  Coloumn: "<<endl;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(j==m)
            {
                sum+=ar[i][j];
            }
        }
    }
    cout<<sum;
}

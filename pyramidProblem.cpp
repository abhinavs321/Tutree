#include <iostream>
using namespace std;

int main()
{
    int value = 7;
    // for upper half pyramid
    for(int i=1; i<=value; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout << " ";
        }
        for(int k=i; k<=value; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

    // for bottom half pyramid
    for(int i=value-1; i>=1; i--)
    {
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int k=i; k<=value; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
	return 0;
}

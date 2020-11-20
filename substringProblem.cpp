#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void findSubString(string str1, string str2)
{
    int len1 = str1.length();
    int len2 = str2.length();

    if(len2 > len1)
        return;

    for(int i=0; i <= len1-len2; i++)
    {
        if (is_permutation(str1.begin() + i, str1.begin() + i + len2, str2.begin()))
		{
			cout<<"substring '"<<str1.substr(i, len2)<<"' present at index "<<i<<endl;
		}
    }
}

int main()
{
    string str1 = "XYYZXZYZXXYZ";
    string str2 = "XYZ";
    findSubString(str1, str2);
	return 0;
}


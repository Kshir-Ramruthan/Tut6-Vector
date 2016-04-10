//Kshir Ramruthan(214502398)
//Tut 6 - Vector

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
	vector<int> vect;

	for (int i = 0; i < 20; i++)
	{
		vect.push_back(i+1);
	}//End for

	std::sort(vect.begin(), vect.end(),std::greater<int>());

	for (int i = 0; i < 20; i++)
	{
		cout<< vect[i]<<endl;
	}//End for

}//End main
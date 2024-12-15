#include<bits/stdc++.h>
using namespace std;

void subsequence (int ind, vector<int> &vec, int arr[], int n)
{
	if(ind == n)
	{
		for(int i=0;i<vec.size();i++)
		{
			cout<< vec[i] <<" ";
		}
		cout << endl;
		return;	
	}
	//take or pick particular inedx from subsequence.
	vec.push_back(arr[ind]);
	subsequence(ind+1, vec, arr, n);
	vec.pop_back();
	
	subsequence(ind+1, vec, arr, n);
}
int main()
{
	int arr[] = {3,1,2};
	int n=3;
	vector<int> vec;
	subsequence(0, vec, arr, n);
	
	return 0;
}

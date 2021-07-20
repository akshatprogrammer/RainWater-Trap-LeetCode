#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int count=0;
	int first[n],last[n];
	first[0]=arr[0];
	for(int i=1;i<n;i++)
		first[i]=max(first[i-1],arr[i]);
	
	last[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
		last[i]=max(last[i+1],arr[i]);
		
	for(int i=0;i<n;i++){
		count += (min(first[i],last	[i]) - arr[i]);
	}
	
	cout << count;
}

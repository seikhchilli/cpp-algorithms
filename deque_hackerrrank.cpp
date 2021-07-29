#include <iostream>
#include <deque> 
#include<algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> int_que;
    for(int i = 0; i < n; i++){
        int_que.push_back(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout<<int_que[i]<<" ";
    }
    cout<<"over";
    cout<<endl;
    cout<<"start";
    int arr_coll[n-k+1][k];
    int i = 0;
    int max_sub[n-k-1];
    while(i < n - k + 1){
        for(int j = 0; j < k; j++){
            arr_coll[i][j] = int_que[j];
            cout<<arr_coll[i][j]<<" ";
            
        }
        cout<<endl;
        cout<<"sorted";
        sort(arr_coll[i], arr_coll[i]+k);
        max_sub[i] = arr_coll[i][k-1];
        int_que.pop_front();
        i++;
    }
    for(int i = 0; i < n - k + 1; i++){
        cout<<max_sub[i]<<" ";
    }
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
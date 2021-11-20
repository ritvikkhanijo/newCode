#include<bits/stdc++.h>
using namespace std;
//global for keeping the previously read index
int prev = 0;

void receive(int chunk,vector<char> bytes,vector<char> &res){
    int start = chunk;
    //in case we get the initial chunk as 5, we will have to move to that
    //index in an empty vector
    while(chunk>res.size()){
        res.push_back(-1);
        start++;
    }
    
    //reaching the desired index we start putting values
    for(int i=0;i<bytes.size();i++){
        res.push_back(bytes[i]);
        
    }
}

int read(vector<char> &emp,vector<char> &res){
    int ans = 0;
    //get the previously read index
    int i=::prev;
    
    //copy rfom result to emp array and put res[i] = -1
    //indicating that there is no longer data available in that index
    while(i<res.size() && res[i]!=-1){
        emp.push_back(res[i]);
        ans++;
        res[i] = -1;
        i++;
    }
    //update the previously read index
    ::prev = i;
    return ans;
}


int main()
{
	// For different values each time we run the code
    vector<char> res;
    vector<char> emp;
    vector<char> ip1 = {'I',' ','A', 'M'};
    vector<char> ip2 = {' ', 'R','I'};
    receive(0,ip1,res);
    int readb = read(emp,res);
    receive(3,ip2,res);
    int readc = read(emp,res);
    for(int i=0;i<emp.size();i++) cout<<emp[i]<<endl;
	return(0);
}

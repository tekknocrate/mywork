# include<iostream>
#include <vector>
#include<map>
using namespace std;

/*vector<int> twoSum(vector<int>& nums, int target) {
        int i ,j =0 ;
        for (int i =0 ; i <= nums.size()-2 ; i++ ){
            for ( int j=i+1 ; j< nums.size() ;j++)
            if( nums[i] + nums[j] == target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl ;
            }
        }
}
*/
vector<int> twoSum(vector<int>& nums, int target) {
vector <int>v; map <int,int> m;
for ( int i=0;i < nums.size(); i++){
    if(m.find(target-nums[i]) != m.end()){
        v.push_back(i);
        v.push_back(m[target -nums[i]]) ;
        return v;
    }
    m[nums[i]] = i;
}



}

        int main(){

        vector <int> a = {3,2,4};
        int tar=6;

         vector<int> v = twoSum(a ,tar);

        return 0;

        }

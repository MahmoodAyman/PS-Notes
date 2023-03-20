// this code based on LIS Problem in leetcode
// O(n) memory  O(n^2) Time
 
int mem[2502];
vector<int>v;

int lis(int idx){
    if(idx>=v.size())return 0;
    int &ret = mem[idx];
    if(~ret)return ret;
    ret = 0;
    for(int i = idx+1;i<v.size();i++){
        if(v[idx]<v[i]){
            ret = max(ret , lis(i));
        }
    }
    ret +=1;
    return ret;
}

int lengthOfLis(vector<int>&nums){
    memset(mem,-1,sizeof(mem));
    v=nums;
    int ret = 0;
    v.insert(v.begin(),INT_MIN);
    return lis(0)-1;
}

int main(){
    int n; cin>>n;
    vector<int>x(n);
    for(auto &it:x)cin>>it;
    cout<<lengthOfLis(x)<<endl;
}                                           
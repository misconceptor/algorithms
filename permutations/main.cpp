#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> nums){
    if(nums.size()==1) return {nums};
    vector<vector<int>> ans;
    for(int i=0; i<nums.size(); ++i){
        vector<int> v(nums.begin(),nums.end()); 
        v.erase(v.begin()+i);                  //выбрасываем первое число из скопированного вектора
        vector<vector<int>> res = permute(v);  //делаем пересановки обрезанного вектора
        for(int j=0; j<res.size(); ++j){       
            vector<int> _v = res[j];
            _v.insert(_v.begin(),nums[i]);    //добавляем к перестановкам то число
            ans.push_back(_v);                //добавляем получившийся вектор к вектору ответов
        }
    }
    return ans;
}

int main(){
    vector<int> a;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int t;
        cin >> t;
        a.push_back(t);
    }
    vector<vector<int>> c = permute(a);
    for(int i=0; i<c.size(); ++i){
        for(int j=0; j<c[i].size(); ++j){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    } 
    return 0;
}


void bubblesort(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

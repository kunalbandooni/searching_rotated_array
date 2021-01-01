int Search(vector<int> v, int K) {
    int n=v.size();
    int l=0,mid,r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(v[mid]==K)
            return mid;
        else if(v[mid]<=v[r]){
            if(v[mid]<=K&&v[r]>=K)
                l=mid+1;
            else
                r=mid-1;
        }
        else{
            if(K>=v[l]&&K<=v[mid])
                r=mid-1;
            else
                l=mid+1;
        }
    }
    return -1;
}

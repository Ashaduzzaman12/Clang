//Max Sum Subarray of size K
public:
    int maximumSumSubarray(vector<int>& arr, int k) {
       int n=arr.size(),l=0,r=0;
    long long cnt=0,sum=0;
    while (r<n)
    {
        sum+=arr[r];
        if(r-l+1==k){
            cnt=max(cnt,sum);
            sum-=arr[l];
            l++;
        }
        r++;
    }
    return cnt;
    }

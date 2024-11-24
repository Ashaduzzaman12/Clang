int n=a.size(),l=0,r=0;
    ll cnt=0,sum=0;
    while (r<n)
    {
        sum+=a[r];
        if(r-l+1==k){
            cnt=max(cnt,sum);
            sum-=a[l];
            l++;
        }
        r++;
    }
    return cnt;

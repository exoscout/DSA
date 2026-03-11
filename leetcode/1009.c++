class Solution {
public:
    pair <int, int> power(int x){
        pair<int, int> p;
        int n=1, i=0;
        while((n<<1)<=x){
            n<<=1;
            i++;   
        }
        p.first=n;
        p.second=i;
        return p;
    }
    int bitwiseComplement(int n) {
        pair<int,int> p = power(n);
        int x=p.second+1;
        vector<int> bin(x,1);

        while(n>0){
            pair<int,int> p = power(n);
            n-=p.first;
            bin[p.second]=0;
        }
        int ans = 0;
        for(int i = x-1; i >= 0; i--){
            ans = (ans << 1) | bin[i];
        }

        return ans;
    }
};
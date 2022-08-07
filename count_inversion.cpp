long long int inversionCount(long long arr[], long long N)
    {
        long long int count=0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(arr[i]>arr[j])
                    count++;
        }
        }
        return count;
    }

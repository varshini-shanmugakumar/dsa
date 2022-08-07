void merge(int a[], int l, int m, int r)
    {
         int i=l;
         int j=m+1;
         int k=l;
         
         int b[r];
         while(i<=m && j<=r){
             if(a[i]<a[j]){
                 b[k]=a[i];
                 i++;
             }
             else{
                 b[k]=a[j];
                 j++;
             }
             k++;
         }
         
         while(i<=m){
             b[k]=a[i];
             i++;
             k++;
         }
         
         while(j<=r){
             b[k]=a[j];
             j++;
             k++;
         }
         
         for(int k=l;k<=r;k++){
             a[k]=b[k];
         }
    }

    void mergeSort(int a[], int l, int r)
    {
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(a,l,mid);
            mergeSort(a,mid+1,r);
            merge(a,l,mid,r);
        }
    }

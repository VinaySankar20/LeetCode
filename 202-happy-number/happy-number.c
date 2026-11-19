bool isHappy(int n) {
    int arr[100],size=0;
    while(n>0){
        int num=n,sum=0;
        while(num>0){
            int digit=num%10;
            num=num/10;
            sum+=digit*digit;
        }
        if(sum==1){
            return true;
        }
        arr[size]=sum;
        for(int i=0;i<size;i++)
        {
            if(arr[size]==arr[i]){
                return false;
                n=0;
            }
        }
        size++;
        n=sum;   
        
    }
    return 0;

    
}
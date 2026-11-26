int reverse(int x){
    int rev=0;
    if (x == INT_MIN) return 0;
    if(x>0){
        for(int i=0; x>0;i++){
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && x%10 > 7))  return 0;
            rev = rev*10 + x%10;
            x=x/10;
        
        }
        
        return rev;
    }
    else{
        x=x*-1;
        for(int i=0; x>0;i++){
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && x%10 > 7)) return 0;
            rev = rev*10 + x%10;
            x=x/10;
        
        }
        return -1*rev;
    }
    return 0;

}
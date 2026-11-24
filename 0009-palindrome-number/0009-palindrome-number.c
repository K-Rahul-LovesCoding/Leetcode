bool isPalindrome(int x) {
    int unit=0,ans=0,num=x;
    if(x<0){
        return false;
    }
    while(x!=0){
        unit=x%10;
        if(ans>INT_MAX/10){
            return false;
        }
        ans=ans*10+unit;
        x=x/10;
    }
    if(ans==num){
        return true;
    }
    else{
        return false;
    }
}
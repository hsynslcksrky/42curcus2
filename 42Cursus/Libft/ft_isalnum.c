int ft_isalnum(int str){

    if((str >= '0' && str <= '9') || (str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')){
      return(1);
    }
    else{
        return(0);
    }
}
int main(){
    ft_isalnum('2');
}

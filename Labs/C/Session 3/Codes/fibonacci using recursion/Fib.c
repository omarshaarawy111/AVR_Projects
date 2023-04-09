int fib (int num)
{
    int return_val;
    if(num==0||num==1)
        {
            return_val= num ;
        }
        else
        {
            return_val= fib(num-1)+fib(num -2 ) ;
        }
        return return_val;

}


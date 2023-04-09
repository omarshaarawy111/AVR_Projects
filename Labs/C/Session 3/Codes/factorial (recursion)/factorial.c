unsigned long long fact( int number)
{
   unsigned long long return_val;
    if(number<=1)
    {
        return_val= 1;
    }
    else
    {
    return_val= (number*fact(number-1));
    }
    return return_val;
}

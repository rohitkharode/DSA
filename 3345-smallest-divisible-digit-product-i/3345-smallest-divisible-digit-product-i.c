int smallestNumber(int n, int t) {
    while(1)
    {
        int temp = n;
        int mul = 1;
        while(temp > 0)
        {
            mul = mul*(temp%10);
            temp = temp/10;
        }
        if(mul%t == 0)
        {
            return n;
        }
        n++;
    }
}
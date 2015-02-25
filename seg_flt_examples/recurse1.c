#include <stdlib.h>
int factorial(int n)
{
    if(n <= 0)
    {
        return 1;
    }
    // Ooops, we forgot to subtract 1 from n
    return factorial(n) * n;
}

void main()
{
	int k=100;
        int j=0;
        j=factorial(k);
    

}

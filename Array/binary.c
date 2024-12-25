#include <stdio.h>
#include <math.h>
int q = 0, m = 0, sq = 0, sr = 0, c = 0, i;
int acc[5] = {0, 0, 0, 0, 0}, qbin[5] = {0}, mbin[5] = {0}, mcomp[5] = {0};
void binary()
{
    q = fabs(q);
    m = fabs(m);
    int r, r2;
    // Converting Q and M  to binary arrays
    for (i = 0; i < 5; i++)
    {
        r = q % 2;
        q = q / 2;
        r2 = m % 2;
        m = m / 2;
        qbin[i] = r;
        mbin[i] = r2;
    }
}
int main()
{
	q=12;
	m=7;
	binary();
	for(i=4;i>=0;i--)
	{
		printf("%d",qbin[i]);
	}
	printf("\n");
	for(i=4;i>=0;i--)
	{
		printf("%d",mbin[i]);
	}
	return 0;
}

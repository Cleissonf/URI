#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define MIN(a, b)	((a) < (b) ?  (a) : (b))
#define MAX(a, b)	((a) > (b) ?  (a) : (b))
#define ABS(a)		((a) <  0  ? -(a) : (a))
#define IMPAR(a)	((a)&1)
#define CTOI(a)		((a) - '0')
#define ITOC(a)		((a) + '0')

#define TRUE	1
#define FALSE	0

int main()
{
	int i, k, l, t;
	double M[12][12], P;
	char O;
	
	#ifdef DEBUG
		double tI_ = clock();
	#endif
	
	scanf("%c", &O);

	P = t = l = 0;
	
	for(i = 0; i < 12; i++)
		for(k = 0; k < 12; k++)
			scanf("%lf", &M[i][k]);
	
	for(i = 1; i < 11; i++)
	{
		if(i == 5 || i == 6)
			l = 5;
		else if(i < 5)
			l++;
		else
			l--;
			
		for(k = 0; k < l; k++)
		{
			P += M[i][k];
			t++;
		}
	}
	
	if(O == 'M')
		P = P / t;
	
	printf("%.1f\n", P);
	
	#ifdef DEBUG
		printf("Tempo: %.1lf %.1lf\n", clock() - tI_, (clock() - tI_) / CLK_TCK);
	#endif
	
	return 0;
}
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
	float A, B, C, MEDIA;
	
	#ifdef DEBUG
		double tI_ = clock();
	#endif
	
	while(scanf("%f", &A) != EOF)
	{
		scanf("%f", &B);
		scanf("%f", &C);
		
		MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
		
		printf("MEDIA = %.1f\n", MEDIA);
	}
	
	#ifdef DEBUG
		printf("Tempo: %.1lf %.1lf\n", clock() - tI_, (clock() - tI_) / CLK_TCK);
	#endif
	
	return 0;
}
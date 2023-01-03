#include<stdio.h> 
#include<stdlib.h> 
 
struct Triangle 
{ 
	int a, b, c; 
}; 

float area(int a, int b, int c) 
{ 
	float s = (a + b + c) / 2.0; 
	return sqrt(s * (s - a) * (s - b) * (s - c)); 
} 

int compare(const void* t1, const void* t2) 
{ 
	struct Triangle *tr1 = (struct Triangle *)t1; 
	struct Triangle *tr2 = (struct Triangle *)t2; 

	float A1 = area(tr1->a, tr1->b, tr1->c); 
	float A2 = area(tr2->a, tr2->b, tr2->);
  }
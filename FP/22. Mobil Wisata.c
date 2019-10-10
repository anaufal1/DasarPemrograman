#include <stdio.h>

int main() {
	int x, A, B, C, D, mobil;
	A = 0;
	B = 0;
	C = 0;
	D = 0;
	
	scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
		scanf("%d", &x);
	if(x==1) {
		A = A+1;
	}
	else if(x==2) {
		B = B+1;
	}
	else if(x==3) {
		C = C+1;
	}
	else if(x==4) {
		D = D+1;
	}
	
	mobil = D;
	
	if(C == A){
		mobil = mobil + C;
		A= 0;
		C = 0;
	}else if (C<A){
		mobil = mobil + C;
		A = A-C;
		C = 0;
	}else if (A<C){
		mobil = mobil + A;
		C = C - A;
		A = 0;
	}
	
	mobil = mobil + (B/2);
	B = B % 2;
	
	if(B>0){
		if(A>2){
			mobil = mobil + 1;
			B = 0;
			A = A - 2;
		}else{
			mobil = mobil + 1;
			B = 0;
			A = 0;
		}
	}
	
	mobil = mobil + (A/4);
	A = A % 4;
	
	if(A>0){
		mobil = mobil + 1;
		A = 0;
	}
	
	mobil = mobil + A + B + C;
	
	printf("%d\n", mobil);
	
	return 0;
	
}

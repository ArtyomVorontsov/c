#include <stdio.h>

struct fraction {
	int numerator, denominator;
};

struct fractions {
	struct fraction f1, f2;
};

struct fraction reduce(struct fraction f);
int GCD(int n1, int n2);
struct fraction add_fractions(struct fraction f1, struct fraction f2);
struct fraction substract_fractions(struct fraction f1, struct fraction f2);
struct fractions to_common_denominator(struct fraction f1, struct fraction f2);
struct fraction multiply_fractions(struct fraction f1, struct fraction f2);
struct fraction divide_fractions(struct fraction f1, struct fraction f2);

int main(void){
	struct fraction fr, f1 = { 5, 10 }, f2 = { 6, 8 };

	fr = reduce(f1);
	printf("reduced: %d/%d\n", fr.numerator, fr.denominator);

	fr = add_fractions(f1, f2);
	printf("added: %d/%d\n", fr.numerator, fr.denominator);

	fr = substract_fractions(f2, f1);
	printf("substracted: %d/%d\n", fr.numerator, fr.denominator);

	fr = multiply_fractions(f2, f1);
	printf("multiplied: %d/%d\n", fr.numerator, fr.denominator);

	fr = divide_fractions(f2, f1);
	printf("divided: %d/%d\n", fr.numerator, fr.denominator);

	return 0;
}

struct fraction reduce(struct fraction f){
	int gcd = GCD(f.numerator, f.denominator);
	struct fraction fr = {
		f.numerator / gcd,
		f.denominator / gcd
	};

	return fr;
}

int GCD(int n1, int n2){
	int i = 1;
	if(n1 > n2) {
		i = n2;
	} else {
		i = n1;
	}

	while((n1 % i == 0) && (n2 % i == 0)) i--;

	return i;
}

struct fraction add_fractions(struct fraction f1, struct fraction f2){
	struct fraction f3;

	struct fractions fs = to_common_denominator(f1, f2);

	f3.numerator = fs.f1.numerator + fs.f2.numerator;
	f3.denominator = fs.f1.denominator;

	return f3;	
}


struct fraction substract_fractions(struct fraction f1, struct fraction f2){
	struct fraction f3;

	struct fractions fs = to_common_denominator(f1, f2);

	f3.numerator = fs.f1.numerator - fs.f2.numerator;
	f3.denominator = fs.f1.denominator;

	return f3;	
}

struct fraction multiply_fractions(struct fraction f1, struct fraction f2){
	struct fraction f3;

	f3.numerator = f1.numerator * f2.numerator;
	f3.denominator = f1.denominator * f2.denominator;

	return f3;
}


struct fraction divide_fractions(struct fraction f1, struct fraction f2){
	struct fraction f3;

	f3.numerator = f1.numerator * f2.denominator;
	f3.denominator = f1.denominator * f2.numerator;

	return f3;
}

struct fractions to_common_denominator(struct fraction f1, struct fraction f2){
	struct fraction fr1 = {
		f1.numerator * f2.denominator,
		f1.denominator * f2.denominator
	};
	struct fraction fr2 = {
		f2.numerator * f1.denominator,
		f2.denominator * f1.denominator
	};
	struct fractions fs = { fr1, fr2 };

	return fs;
}



typedef struct { double real, imaginary; } Complex;

int main(void){
	Complex c1, c2, c3;
}

Complex make_complex(double real, double imaginary) {
	return (Complex) { real, imaginary };
}


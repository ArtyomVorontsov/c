
typedef struct { double real, imaginary; } Complex;

int main(void){
	 Complex c1, c2, c3;
}

Complex add_complex(Complex c1, Complex c2) {
	
	return (Complex) { c1.real + c2.real, c1.imaginary + c2.imaginary};
}


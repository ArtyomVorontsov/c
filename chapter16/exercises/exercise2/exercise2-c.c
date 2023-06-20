
int main(void){
	struct Numbers { double real, imaginary; };
	
	struct Numbers c1 = { .imaginary = 1.0 };
	struct Numbers c2 = { 1.0 };

	c1 = c2;

	return 0;
}


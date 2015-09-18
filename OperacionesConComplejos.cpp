#include <stdio.h>

int main()
{
	int A[5], B[5], C[3], opcion, divisor;
	float D[3];

	printf("Ingrese el primer numero complejo\nIngrese la parte real: ");
	scanf ("%d", &A[1]);
	printf("Ingrese la parte imaginaria: ");
	scanf ("%d", &A[2]);

	printf("Ingrese el segundo numero complejo\nIngrese la parte real: ");
	scanf ("%d", &B[1]);
	printf("Ingrese la parte imaginaria: ");
	scanf ("%d", &B[2]);

	printf("Cual operacion desea realizar??\n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\nIngrese la opcion deseada: ");
	scanf ("%d", &opcion);

	switch (opcion)
	{
	case 1:
		C[1] = A[1] + B[1];
		C[2] = A[2] + B[2];
		printf("La suma de los numeros complejos es: ( %d ; %d )\n",C[1], C[2] );
		break;

	case 2:
		C[1] = A[1] - B[1];
		C[2] = A[2] - B[2];
		printf("La resta de los numeros complejos es: ( %d ; %d )\n",C[1], C[2] );
		break;

	case 3:
		C[1] = A[1] * B[1] - A[2] * B[2];
		C[2] = A[1] * B[2] + B[1] * A[2];
		printf("La multiplicacion de los numeros complejos es: ( %d ; %d )\n",C[1], C[2] );
		break;

	case 4:
		if (B[1] == 0 && B[2] == 0)
		{
			printf("No se puede realizar la operacion con divisor igual a cero\n");
			break;
		}
		divisor = B[1] * B[1] + B[2] * B[2];
		D[1] = (float) (A[1] * B[1] + A[2] * B[2]) / divisor;
		D[2] = (float) (A[2] * B[1] - A[1] * B[2]) / divisor;
		printf("La division de los numeros complejos es: ( %.2f ; %.2f )\n",D[1], D[2] );
		break;
	}
}

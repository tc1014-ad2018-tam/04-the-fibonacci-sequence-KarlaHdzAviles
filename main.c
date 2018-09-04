/* Este prorama nos ayuda a encontrar el numero que es dependiendo a la secuencia fibonacci
 *
 *
 * Autor: Karla Alexandra Hernandez Aviles
 * Fecha:03/09/2018
 * Correo: A01411843@itesm.mx*/

  #include <stdio.h>

int main() {
    //Introducción de variables
    int n;
    int t1 = 0;
    int t2 = 1;
    int next;
    int k;

    printf("Welcome, i will help you with fibonacci sequence, enter the number of terms:\n");
    scanf("%d", &n);

    printf("First %d terms of fibonacci sequence are:\n", n);

    for (k = 0; k < n; k++)
    {
        if (k <= 1)
            next = k;
        else
        {
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        printf("%d\n", next);
    }

    return 0;
}
// Implementação O(n) usando a Regra de Horner
double horner(double coef[], int n, double x) {
    double resultado = coef[n-1];
    for (int i = n - 2; i >= 0; i--) {
        resultado = resultado * x + coef[i];
    }
    return resultado;
}
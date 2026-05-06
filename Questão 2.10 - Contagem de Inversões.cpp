long long mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left, j = mid, k = left;
    long long count = 0;
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            count += (mid - i); // Todos os elementos restantes na esquerda formam inversão
        }
    }
    while (i <= mid - 1) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (i = left; i <= right; i++) arr[i] = temp[i];
    return count;
}
#include  <iostream>
using namespace std;
int shellSort(int arr[], int n)
{
    for (int bosluk = n/2; bosluk > 0; bosluk /= 2)
    {
        for (int i = bosluk; i < n; i += 1)
        {
            int temp = arr[i];
 
            int j;           
            for (j = i; j >= bosluk && arr[j - bosluk] > temp; j -= bosluk) // dizinin eleman say�s�n�n yar�s� ile olu�turulan bo�luklarla elemanlar kar��la�t�r�l�r.
                arr[j] = arr[j - bosluk];
             
            arr[j] = temp; //yer de�i�tirilir
        }
    }
    return 0;
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
 
int main()
{
    int arr[] = {8, 25, 16, 35, 9}, i;
    int n = sizeof(arr)/sizeof(arr[0]); // eleman say�s� hesaplan�r
 
    cout << "Siralama oncesi dizi \n";
    printArray(arr, n);
 
    shellSort(arr, n); // fonksiyon �a�r�l�r
 
    cout << "\n Siralama sonrasi dizi  \n";
    printArray(arr, n);
 
    return 0;
}


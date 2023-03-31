#include "../Header/Linker_List.h"
#include <stdio.h>


int main(int argc, char const *argv[])
{
    list arr;
    khoitao(&arr); //khoi tao danh sach lien ket don
    int n;
    printf("nhap so luong node can them: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int x;
        printf("\nnhap gia tri can them: ");
        scanf("%d", &x);
        node *p = createNODE(x);
        AddTail(&arr, p);         ///them vao dau danh sach
    }
    printf("DANH SACH LIEN KET DON:\n");
    Export_list(arr);     // xuat danh sach

    assign(&arr, 2, 36);  //thay the vi tri so 2 co data bang 36
    printf("DANH SACH LIEN KET DON SAU KHI DA THAY DOI:\n");
    Export_list(arr);     // xuat danh sach
    
    pop_back(&arr);
    printf("DANH SACH LIEN KET DON SAU KHI DA xoa cuoi:\n");
    Export_list(arr);     // xuat danh sach

    erase(&arr, 3);
    printf("DANH SACH LIEN KET DON SAU KHI DA xoa la:\n");
    Export_list(arr);     // xuat danh sach

    //getData(arr, 2);
    return 0;

}

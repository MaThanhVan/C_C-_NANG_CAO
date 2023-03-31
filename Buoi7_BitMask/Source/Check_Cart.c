/*
* File: Check_Cart(Bitmask).
* Author: MA THANH VAN
* Date: 31/03/2023
* Description: Use bitmask solve the cart problem 
*/
#include <stdio.h>
#include <stdint.h>
#include "../Header/Check_Cart.h"


/**
 * @brief Function to add the clothes in to cart
 *
 * @param gio_hang Pointer used to add widgets in to cart
 * @param loai_do_dung widgets add
 */
void Them_vao_gio_hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN loai_do_dung)
{
    *gio_hang |= loai_do_dung;      // phep or bit a |= b tuong duong a = a|b
}


/**
 * @brief Function to clear the clothes in to cart
 *
 * @param gio_hang Pointer management cart
 * @param loai_do_dung widgets  you want clear
 */
void Xoa_khoi_gio_hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN loai_do_dung)
{
    *gio_hang &= ~loai_do_dung;     // phep and bit
}

/**
 * @brief Function to check the clothes in to cart
 *
 * @param gio_hang Pointer used to add widgets 
 * @param loai_do_dung widgets you want check
 */
void Kiem_tra_hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN do_dung)
{
    DO_DUNG_CA_NHAN temp = do_dung;
    Kiem_tra_san_pham(AO);
    Kiem_tra_san_pham(QUAN);
    Kiem_tra_san_pham(VAY);
    Kiem_tra_san_pham(DAM);
    Kiem_tra_san_pham(NHAN);
    Kiem_tra_san_pham(VONG_TAY);
    Kiem_tra_san_pham(GIAY);
    Kiem_tra_san_pham(TUI);
}

/**
 * @brief Function to display the clothes in to cart
 *
 * @param gio_hang Pointer used to add widgets 
 */
void Hien_thi_gio_hang(uint8_t *gio_hang)
{
    int i=0;
    printf("STT TEN <gio hang gom co>\n");
    KIEM_TRA_GIO_HANG(AO);
    KIEM_TRA_GIO_HANG(QUAN);
    KIEM_TRA_GIO_HANG(VAY);
    KIEM_TRA_GIO_HANG(DAM)
    KIEM_TRA_GIO_HANG(NHAN);
    KIEM_TRA_GIO_HANG(VONG_TAY);
    KIEM_TRA_GIO_HANG(GIAY);
    KIEM_TRA_GIO_HANG(TUI);
}

int main(int argc, char const *argv[])
{
    Them_vao_gio_hang(&gio_hang, NHAN|AO|GIAY|QUAN);
    Hien_thi_gio_hang(&gio_hang);
    Kiem_tra_hang(&gio_hang, NHAN|AO|GIAY|QUAN|VAY|DAM|VONG_TAY|TUI);
}

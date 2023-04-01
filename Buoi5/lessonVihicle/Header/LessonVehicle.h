
#ifndef __LESSONVEHICLE_H
#define __LESSONVEHICLE_H
#include <stdio.h>

/**
 * @brief Structure containing the properties of a vehicle
 */
typedef enum
{
    MAY_BAY_THUONG_MAI,
    MAY_BAY_TRUC_THANG,
    XE_KHACH,
    XE_MAY,
    XE_DAP,
    TAU_THUY,
    CA_NO
}phuong_tien;

/**
 * @brief Structure containing the properties of a air transport
 */
typedef union 
{
    phuong_tien may_bay_thuong_mai;
    phuong_tien may_bay_truc_thang;
}hang_khong;

/**
 * @brief Structure containing the properties of road vehicle
 */
typedef union 
{
    phuong_tien xe_khach;
    phuong_tien xe_may;
    phuong_tien xe_dap;
}bo;

/**
 * @brief Structure containing the properties of water transport
 */
typedef union 
{
    phuong_tien tau_thuy;
    phuong_tien ca_no;/* data */
}thuy;

typedef union 
{
    hang_khong duong_hang_khong;/* data */
    bo duong_bo;
    thuy duong_hang_thuy;
    phuong_tien loai_phong_tien;
}phuong_tien_giao_thong;
#endif 

#include "../Header/Check_Cart.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    Them_vao_gio_hang(&gio_hang, NHAN|AO|GIAY|QUAN);
    Hien_thi_gio_hang(&gio_hang);
    Kiem_tra_hang(&gio_hang, NHAN|AO|GIAY|QUAN|VAY|DAM|VONG_TAY|TUI);
}

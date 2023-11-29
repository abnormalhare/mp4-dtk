#include "REL/w10Dll.h"

s32 lbl_1_data_78[2] = {
    0x007B0010,
    -1
};

Vec3f lbl_1_data_80[2] = {
    {70.0f, 355.0f, 200.f},
    {70.0f, 175.0f, 200.f},
};

void fn_1_AEC(void) {
    lbl_1_bss_1C = 0;
    lbl_1_bss_1E = fn_8006D9A4(0x7B000F, &lbl_1_data_78, 0);
    fn_8006E2B8(lbl_1_bss_1E, 1, 0x40000001);
    fn_800B42BC(lbl_1_bss_1E);
    fn_8006F61C(lbl_1_bss_1E, 6);
    lbl_1_bss_18 = HuPrcCreate(fn_1_C20, 0x1FFF, 0x1800, 0);
}

void fn_1_BA0(s32 arg0) {
    s32 var_r31;

    switch (lbl_1_bss_1C) {
    case 0:
        var_r31 = 5;
        break;
    case 1:
        var_r31 = 6;
        break;
    }
    BoardMessCreate(var_r31, arg0, -1);
    BoardMessWait();
    BoardMessKill();
}

void fn_1_C10(s16 arg0) {
    lbl_1_bss_1C = arg0;
}

void fn_1_C20(void) {
    Mtx sp20;
    Vec3f sp14;
    Vec3f sp8;
    
    while (1) {
        if (fn_8005B6A8() != 0) {
            fn_8006DB90(lbl_1_bss_1E);
            fn_800B42BC(-1);
            HuPrcEnd();
        }
        Hu3D2Dto3D(&lbl_1_data_80[lbl_1_bss_1C], 1, &sp14);
        fn_8006F158(lbl_1_bss_1E, &sp14);
        fn_8005D5C0(&sp8);
        PSMTXRotRad(sp20, 'y', 0.2617994f);
        fn_8006EFBC(lbl_1_bss_1E, sp20);
        fn_8006F270(lbl_1_bss_1E, sp8.x, 0.0f, 0.0f);
        fn_8006F338(lbl_1_bss_1E, 0.2f, 0.2f, 0.2f);
        HuPrcVSleep();        
    }
}
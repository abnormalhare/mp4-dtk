#include "dolphin/types.h"
#include "game/hsfman.h"

#include "game/object.h"
extern s32 rand8(void);

////// TYPES //////
typedef void (*m440Func5)(ModelData*, struct _unkStruct5*, Mtx);
typedef void (*m440Func6)(struct _unkStruct6*);
typedef void (*m440Func14)(struct _unkStruct14*);

typedef struct _unkStruct {
    f32 zoom;
    Vec center;
    Vec rot;
} unkStruct;

typedef struct _unkStruct2 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s32 unkC;
    char unk10[0xC];
    s16 unk1C;
    char unk20[0x4];
    f32 unk24;
    char unk28[0x4];
    s16 unk2C;
    s16 unk2E;
    f32 unk30;
} unkStruct2;

typedef struct _unkStruct3 {
    char unk0[0x34];
    f32 unk34;
    char unk38[0x8];
    f32 unk40;
} unkStruct3;

typedef struct _unkStruct4 {
    Vec unk0;
    char unkC[0xC];
    f32 unk18;
    f32 unk1C;
    char unk20[0x4];
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    s16 unk34;
    s16 unk36;
    char unk38[0x4];
    s32 unk3C;
    s16 unk40;
    s16 unk42;
    f32 unk44;
    Vec unk48;
    Vec unk54;
    s16 unk60;
    s8 unk62;
} unkStruct4; // sizeof 0x64

typedef struct _unkStruct5 {
    s16 unk0;
    s16 unk2;
    u32 unk4;
    u8 unk8;
    m440Func5 unkC;
    AnimData* unk10;
    s16 unk14;
    unkStruct4* unk18;
    Vec* unk1C;
    HsfVector2f* unk20;
    GXColor* unk24;
    void* unk28;
    Vec unk2C;
    Vec unk38;
    Vec unk44;
    Vec unk50;
    HsfVector2f* unk5C;
    f32 unk60;
    f32 unk64;
} unkStruct5;

typedef struct _unkStruct6 {
    s16 unk0;
    u16 unk2;
    s16 unk4;
    s16 unk6;
    u32 unk8;
    Vec* unkC;
    Vec* unk10;
    Vec* unk14;
    Vec* unk18;
    HsfVector2f* unk1C;
    s32 unk20;
    struct _unkStruct8* unk24;
    HsfMaterial* unk28;
    HsfAttribute* unk2C;
    void* unk30;
    u32 unk34;
    m440Func6 unk38;
    s16 unk3C;
    s16 unk3E;
} unkStruct6; // sizeof 0x40

typedef struct _unkStruct7 {
    GXColor unk0;
    Vec unk4;
} unkStruct7; // sizeof 0x10

typedef struct _unkStruct11 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} unkStruct11;

typedef struct _unkStruct8 {
    unkStruct11 unk0[3];
    s16 unk18[3];
    s16 unk1E;
    unkStruct11 unk20[3];
    char unk38[0x30];
    f32 unk68[5];
    Vec unk7C;
    Vec unk88;
    Vec unk94;
    Vec unkA0;
    Vec unkAC;
    Vec unkB8;
    Vec unkC4;
} unkStruct8; // sizeof 0xD0

typedef struct _unkStruct10 {
    s16 unk0;
    s16 unk2;
    unkStruct11 unk4[3];
    u32 unk1C;
    unkStruct11* unk20;
    char unk24[0xC];
} unkStruct10; // sizeof 0x30

typedef struct _unkStruct12 {
    char unk0[0xA];
    u8 unkA;
    u8 unkB[3];
    u8 unkE[3];
    char unk12[0x2];
    f32 unk14;
    char unk18[0x4];
    f32 unk1C;
    char unk20[0x10];
    u32 unk30;
    u32 unk34;
    s32* unk38;
} unkStruct12;

typedef struct _unkStruct13 {
    char unk0[0xA];
    u8 unkA;
    char unkB[0x15];
    f32 unk20;
    char unk24[0x40];
    u32 unk64;
    u32 unk68;
    char unk6C[0x14];
    struct _unkStruct15* unk80;
} unkStruct13; // sizeof 0x84

typedef struct _unkStruct14 {
    s16 unk0;
    s16 unk2;
    char unk4[0x8];
    void* unkC;
    char unk10[0x4];
    void* unk14;
    unkStruct4* unk18;
    void* unk1C;
    char unk20[0x4];
    GXColor* unk24;
    unkStruct12* unk28;
    unkStruct13* unk2C;
    void* unk30;
    u32 unk34;
    m440Func14 unk38;
    s16 unk3C;
} unkStruct14;

typedef struct _unkStruct15 {
    char unk0[0x8];
    u8 unk8;
    u8 unk9;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    char unk10[0x4];
    void* unk14;
    char unk18[0x4];
    void* unk1C;
} unkStruct15;

// object.c
typedef struct _unkObjStruct {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    Vec unk18;
    Vec unk24;
    Vec unk30;
    Vec unk3C;
    u8 unk48;
    s16 unk4A;
    f32 unk4C;
    s16 unk50;
    s16 unk52;
    s16 unk54;
    s16 unk56;
    s16 unk58;
    s16 unk5A;
    f32 unk5C;
    s16 unk60;
    s16 unk62;
    char unk64[0x4];
    f32 unk68;
    f32 unk6C;
    f32 unk70;
} unkObjStruct;


////// BSS //////
// object.c
extern omObjData* lbl_1_bss_C0[4];
extern s16 lbl_1_bss_B8[4];
extern Vec lbl_1_bss_88[4];
extern f32 lbl_1_bss_84;
extern Vec lbl_1_bss_78;
extern s16 lbl_1_bss_74;
extern u8 lbl_1_bss_72;
extern s16 lbl_1_bss_70;
// main.c
extern omObjData* lbl_1_bss_6C;
extern omObjData* lbl_1_bss_68;
extern unkStruct6* lbl_1_bss_64;
extern s16 lbl_1_bss_60;
extern Mtx lbl_1_bss_30;
extern s16 lbl_1_bss_2C;
extern void* lbl_1_bss_28;
extern u32 lbl_1_bss_24;
extern s16 lbl_1_bss_10[10];
extern s16 lbl_1_bss_E;
extern u8 lbl_1_bss_C;
extern u8 lbl_1_bss_B;
extern u8 lbl_1_bss_A;
extern s16 lbl_1_bss_8;
extern s16 lbl_1_bss_6;
extern s16 lbl_1_bss_4;
extern s8 lbl_1_bss_2;
extern s8 lbl_1_bss_1;
extern s8 lbl_1_bss_0;

////// DATA //////
// main.c
extern f32 lbl_1_data_0[5];
extern s16 lbl_1_data_14[6];
extern Vec lbl_1_data_20;
extern Vec lbl_1_data_2C;
extern Vec lbl_1_data_38;
extern unkStruct7 lbl_1_data_44;
extern Vec lbl_1_data_54;
extern Vec lbl_1_data_60;
extern Vec lbl_1_data_6C;
extern unkStruct lbl_1_data_78[3];
extern s16 lbl_1_data_E4[2];
extern s16 lbl_1_data_E8[2];
extern s16 lbl_1_data_EC[2];
extern s16 lbl_1_data_F0[2];
extern s32 lbl_1_data_F4[4];
extern s16 lbl_1_data_104[2];
extern s16 lbl_1_data_108[2];
// object.c
extern s16 lbl_1_data_1D8;
extern s16 lbl_1_data_1DA;
extern u32 lbl_1_data_1DC[8][2];
extern f32 lbl_1_data_21C[4];
extern f32 lbl_1_data_250;

////// FUNCTIONS //////
// main.c
extern void ObjectSetup(void);
extern void fn_1_3C4(omObjData* object);
extern void fn_1_434(omObjData* object);
extern s32 fn_1_4A4(void);
extern s32 fn_1_6C8(void);
extern void fn_1_8F0(omObjData* object);
extern void fn_1_AE0(omObjData* object);
extern u8 fn_1_E14(omObjData* object);
extern u8 fn_1_1138(omObjData* object);
extern void fn_1_16D8(void);
extern void fn_1_1708(void);
extern void fn_1_1768(void);
extern s16 fn_1_17CC(void);
extern s16 fn_1_17F4(void);
extern void fn_1_181C(void);
extern u8 fn_1_1890(void);
extern void fn_1_18E0(void);
extern u8 fn_1_1954(void);
extern void fn_1_19B0(void);
extern void fn_1_1CAC(void);
extern void fn_1_2240(ModelData* data, unkStruct5*, Mtx);
extern u16 fn_1_23E4(u16);
extern void fn_1_2428(u16, u16);
extern void fn_1_2470(omObjData* object);
extern void fn_1_2A74(omObjData* object);
extern void fn_1_2AB4(omObjData* object);
extern void fn_1_2B04(omObjData* object);
extern void fn_1_2CA8(omObjData* object);
extern void fn_1_2D28(omObjData* object);
extern void fn_1_33D4(omObjData* object);
extern void fn_1_3DD8(omObjData* object);
extern void fn_1_4558(omObjData* object);
extern void fn_1_45BC(omObjData* object);
extern void fn_1_4660(omObjData* object);
extern void fn_1_46E0(omObjData* object);
extern void fn_1_4A20(omObjData* object);
extern void fn_1_4B44(omObjData* object);
extern void fn_1_4E00(s16, f32);
extern s16 fn_1_4E2C(void);
extern s16 fn_1_4E54(s16);
extern u16 fn_1_4EA8(u16);
extern void fn_1_4EEC(u16, u16);
extern void fn_1_4F34(unkStruct6*);
extern void fn_1_5010(unkStruct6*, Vec*, f32);
extern void fn_1_57B4(unkStruct6*);
extern void fn_1_5C2C(s16, HsfObject*, unkStruct6*, u16);
extern void fn_1_6554(unkStruct6*, HsfObject*);
extern void fn_1_6B58(unkStruct6*, HsfObject*);
extern void fn_1_71FC(unkStruct6*, Vec*, s16, Vec);
extern void fn_1_7934(unkStruct6*, unkStruct8*, Vec*);
extern void fn_1_7D60(unkStruct15*, unkStruct13*, s16);
extern void fn_1_806C(ModelData*, Mtx);
extern void fn_1_8470(unkStruct12*, unkStruct13*);
extern void fn_1_8AC4(Mtx);
extern void fn_1_8D1C(void);
extern void fn_1_91A4(Vec*, Vec*, Vec*, f32[5]);
extern f32 fn_1_927C(f32, f32, f32);
extern void fn_1_9344(Mtx, Mtx);
extern f32 fn_1_93C0(f32, f32, f32);
extern f32 fn_1_93D0(f32, f32, f32, f32);
extern unkStruct4* fn_1_942C(s16, Vec*, Vec*, f32, GXColor*);
extern s16 fn_1_956C(AnimData*, s16, f32, s16, s16);
extern void fn_1_9AB0(s16);
extern unkStruct5* fn_1_9B10(s16);
extern unkStruct4* fn_1_9B3C(s16, s16);
extern void fn_1_9B94(s16, m440Func5);
extern void fn_1_9BCC(s16, u8);
extern void fn_1_9C04(ModelData*, Mtx);
extern void fn_1_A1B8(HsfVector2f*, s16, s16, f32, f32);
extern void fn_1_A284(HsfVector2f*, HsfVector2f*, s16, f32, f32);
extern void fn_1_A328(Vec*, Vec*, Vec*, s16);
void fn_1_A390(ModelData*, Mtx);
extern void fn_1_AA94(void);
// object.c
extern void fn_1_AE08(Process*);
extern void fn_1_AEE4(omObjData*);
extern void fn_1_B17C(omObjData*);
extern void fn_1_B180(omObjData*);
extern void fn_1_B3A4(omObjData*);
extern void fn_1_B884(omObjData*, unkObjStruct*);
extern void fn_1_C1D4(omObjData*, unkObjStruct*);
extern void fn_1_C944(omObjData*, unkObjStruct*);
extern s16 fn_1_CFAC(unkObjStruct*, u8);
extern void fn_1_D24C(unkObjStruct*, f32, f32);
extern void fn_1_D34C(omObjData*, unkObjStruct*);
extern void fn_1_D7F8(omObjData*, unkObjStruct*);
extern void fn_1_E034(omObjData*, unkObjStruct*);
extern u8 fn_1_E8AC(omObjData*, unkObjStruct*);
extern s32 fn_1_ED88(omObjData*, s16, u32);
extern void fn_1_EE78(void);
extern void fn_1_EF50(void);
extern s16 fn_1_F0FC(void);
extern void fn_1_F168(void);
extern void fn_1_F228(void);
extern u16 fn_1_F4C0(unkObjStruct*, u16);
extern void fn_1_F4D4(unkObjStruct*, u16, u16);
extern s32 fn_1_F4FC(s32);

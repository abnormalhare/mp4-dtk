#ifndef _GAME_WINDOW_H
#define _GAME_WINDOW_H

#include "game/sprite.h"
#include "dolphin.h"


typedef struct {
    /* 0x00 */ u8 color;
    /* 0x01 */ u8 fade;
    /* 0x02 */ s16 x;
    /* 0x04 */ s16 y;
    /* 0x06 */ s16 character;
} WinChar; // Size 8

typedef struct {
    /* 0x00 */ u8 stat;
    /* 0x02 */ s16 x;
    /* 0x04 */ s16 y;
} WinChoice; // Size 6

typedef struct {
    /* 0x000 */ u8 stat;
    /* 0x001 */ u8 active_pad;
    /* 0x002 */ u8 player_disable;
    /* 0x003 */ u8 color_key;
    /* 0x004 */ s16 group;
    /* 0x006 */ s16 sprite_id[30];
    /* 0x042 */ s16 speed;
    /* 0x044 */ s16 mess_time;
    /* 0x046 */ s16 advance_sprite;
    /* 0x048 */ s16 prio;
    /* 0x04C */ u32 attr;
    /* 0x050 */ AnimData *frame;
    /* 0x054 */ s16 mess_rect_x;
    /* 0x056 */ s16 mess_rect_w;
    /* 0x058 */ s16 mess_rect_y;
    /* 0x05A */ s16 mess_rect_h;
    /* 0x05C */ s16 mess_x;
    /* 0x05E */ s16 mess_y;
    /* 0x060 */ s16 mess_color;
    /* 0x062 */ s16 mess_shadow_color;
    /* 0x064 */ s16 spacing_x;
    /* 0x066 */ s16 spacing_y;
    /* 0x068 */ s16 w;
    /* 0x06A */ s16 h;
    /* 0x06C */ f32 pos_x;
    /* 0x070 */ f32 pos_y;
    /* 0x074 */ f32 scale_x;
    /* 0x078 */ f32 scale_y;
    /* 0x07C */ f32 rot;
    /* 0x080 */ s16 num_chars;
    /* 0x082 */ s16 max_chars;
    /* 0x084 */ WinChar *char_data;
    /* 0x088 */ s16 mess_stackptr;
    /* 0x08C */ s32 unk8C;
    /* 0x090 */ u8 *mess;
    /* 0x094 */ u8 *mess_stack[8];
    /* 0x0B4 */ u8 *insert_mess[8];
    /* 0x0D4 */ s16 num_choices;
    /* 0x0D6 */ s16 choice;
    /* 0x0D8 */ s16 cursor_sprite;
    /* 0x0DA */ u8 choice_disable[16];
    /* 0x0EA */ WinChoice choice_data[16];
    /* 0x14A */ s16 scissor_x;
    /* 0x14C */ s16 scissor_y;
    /* 0x14E */ s16 scissor_w;
    /* 0x150 */ s16 scissor_h;
    /* 0x152 */ s16 char_w;
    /* 0x154 */ s16 push_key;
    /* 0x156 */ s16 key_down;
    /* 0x158 */ s16 key_auto;
    /* 0x160 */ u8 ATTRIBUTE_ALIGN(32) mess_pal[10][3];
} SomeWindowStruct; // Size 0x180

void HuWindowInit(void);
void HuWinInit(s32 arg0);
s16 HuWinCreate(f32 x, f32 y, s16 w, s16 h, s16 frame);
void HuWinKill(s16 arg0);
void HuWinAllKill(void);
void HuWinHomeClear(s16 arg0);
void HuWinKeyWaitEntry(s16 arg0);
u32 HuWinActivePadGet(SomeWindowStruct* arg0);
u32 HuWinActiveKeyGetX(SomeWindowStruct* arg0);
void HuWinPosSet(s16 arg0, f32 arg1, f32 arg2);
void HuWinScaleSet(s16 arg0, f32 arg1, f32 arg2);
void HuWinZRotSet(s16 arg0, f32 arg1);
void HuWinCenterPosSet(s16 arg0, f32 arg1, f32 arg2);
void HuWinDrawNoSet(s16 arg0, s16 arg1);
void HuWinScissorSet(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
void HuWinPriSet(s16 arg0, s16 arg1);
void HuWinAttrSet(s16 arg0, s32 arg1);
void HuWinAttrReset(s16 arg0, u32 arg1);
u8 HuWinStatGet(s16 arg0);
void HuWinMesColSet(s16 arg0, u8 arg1);
void HuWinMesPalSet(s16 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4);
void HuWinBGTPLvlSet(s16 arg0, f32 arg1);
void HuWinBGColSet(s16 arg0, GXColor *arg1);
void HuWinMesSpeedSet(s16 arg0, s16 arg1);
void HuWinMesRead(s32 arg0);
void HuWinMesSet(s16 arg0, u32 arg1);
void HuWinInsertMesSet(s16 arg0, u32 arg1, s16 arg2);
s16 HuWinChoiceGet(s16 arg0, s16 arg1);
s16 HuWinChoiceNumGet(s16 arg0);
void HuWinChoiceDisable(s16 arg0, s16 arg1);
s16 HuWinChoiceNowGet(s16 arg0);
void HuWinMesWait(s16 arg0);
void HuWinAnimSet(s16 arg0, AnimData* arg1, s16 arg2, f32 arg3, f32 arg4);
s16 HuWinSprSet(s16 arg0, s16 arg1, f32 arg2, f32 arg3);
void HuWinSprPosSet(s16 arg0, s16 arg1, f32 arg2, f32 arg3);
void HuWinSprPriSet(s16 arg0, s16 arg1, s16 arg2);
s16 HuWinSprIDGet(s16 arg0, s16 arg1);
void HuWinSprKill(s16 arg0, s16 arg1);
void HuWinDispOff(s16 arg0);
void HuWinDispOn(s16 arg0);
void HuWinComKeyWait(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4);
void HuWinComKeySet(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void _HuWinComKeySet(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4);
void HuWinComKeyGet(s16 arg0, u32* arg1);
void HuWinComKeyReset(void);
void HuWinInsertMesSizeGet(s32 arg0, s16 arg1);
void HuWinMesSizeCancelCRSet(s32 arg0);
void HuWinMesMaxSizeBetGet(f32* arg0, u32 arg1, u32 arg2);
s32 HuWinKeyWaitNumGet(u32 arg0);
void HuWinPushKeySet(s16 arg0, s16 arg1);
void HuWinDisablePlayerSet(s16 arg0, u8 arg1);
void HuWinDisablePlayerReset(s16 arg0, s32 arg1);
void HuWinExCreate(f32 arg0, f32 arg1, s16 arg2, s16 arg3, s16 arg4);
s16 HuWinExCreateStyled(f32 arg0, f32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5);
void HuWinExAnimIn(s16 arg0);
void HuWinExAnimOut(s16 arg0);
void HuWinExCleanup(s16 arg0);
void HuWinExAnimPopIn(s16 arg0, s16 arg1);

#endif

/*
 * FUN_180033f88 at 180033f88
 * undefined __cdecl FUN_180033f88(longlong param_1, longlong param_2, undefined8 param_3, ulonglong param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 180033f88-180034403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180033f88(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,byte param_9)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong extraout_x1;
  undefined8 uVar10;
  int extraout_w8;
  int extraout_w9;
  longlong lVar11;
  ulonglong extraout_x10;
  ulonglong extraout_x11;
  longlong lVar12;
  int extraout_w13;
  longlong extraout_x14;
  ushort extraout_w15;
  longlong lVar13;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70 [3];
  float fStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  
  lVar13 = *(longlong *)(param_1 + 0x140);
  lVar11 = param_2;
  uVar8 = param_4;
  if (*(char *)(lVar13 + 0x2beb) != '\0') {
    plVar7 = *(longlong **)(*(longlong *)(lVar13 + 0x31c0) + 8);
    (**(code **)(*plVar7 + 0xe0))
              (plVar7,*(undefined8 *)
                       (lVar13 + ((ulonglong)*(uint *)(lVar13 + 0x2a58) + 0x322) * 0x10));
    plVar7 = *(longlong **)(*(longlong *)(lVar13 + 0x31c0) + 8);
    (**(code **)(*plVar7 + 0xe0))
              (plVar7,*(undefined8 *)
                       (lVar13 + (ulonglong)*(uint *)(lVar13 + 0x2a58) * 0x10 + 0x3228));
    *(int *)(lVar13 + 0x2a58) = *(int *)(lVar13 + 0x2a58) + 1;
    lVar11 = extraout_x1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c98) = *(undefined4 *)(param_2 + 0x6c);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf0) = (float)*(uint *)(param_2 + 0x20);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf4) = (float)*(uint *)(param_2 + 0x24);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x3170) = 1;
  uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  if (*(char *)(param_2 + 0x95) == '\0') {
    DAT_18006b614 = 0xf;
    DAT_18006b5f4 = 8;
    if (*(char *)(param_2 + 0x48) == '\0') {
      DAT_18006b5f4 = DAT_18006b614;
    }
    if (*(char *)(param_2 + 0x48) == '\0') {
      DAT_18006b614 = 0;
    }
    if ((*(char *)(param_2 + 0x48) != '\0') &&
       ((*(int *)(param_2 + 0x10) == 5 ||
        ((*(uint *)(*(longlong *)(param_1 + 0x140) + 0x2984) >> 7 & 1) != 0)))) {
      DAT_18006b5f4 = 0;
    }
    FUN_18004fb70(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),
                  (int *)&DAT_18006b5d0,uVar8,-1);
    _DAT_18006b560 = 0x100000001;
    lVar11 = *(longlong *)(param_1 + 0x140);
    piVar1 = &DAT_18006b560;
    if (*(char *)(param_2 + 0x48) == '\0') {
      piVar1 = (int *)&DAT_18006b598;
    }
    FUN_18004fe20(*(longlong *)(lVar11 + 0x31b0),(ulonglong)*(uint *)(lVar11 + 0x31b8),piVar1,
                  *(int *)(lVar11 + 0x2a98));
    FUN_1800500f8(*(ulonglong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),
                  (uint *)&DAT_18006b538);
    DAT_18006b5a4 = 0;
  }
  else {
    FUN_18001c030(*(longlong *)(param_1 + 0x140),lVar11,param_3,uVar8);
  }
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  local_60 = 0;
  fStack_64 = (float)*(uint *)(param_2 + 0x2c);
  local_70[2] = (float)*(uint *)(param_2 + 0x28);
  local_5c = 0x3f800000;
  uVar8 = FUN_1800505d0(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                        (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),local_70);
  if ((*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x20)) ||
     (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x24))) {
    bVar6 = FUN_180021628(uVar8,*(int *)(*(longlong *)(param_1 + 0x140) + 0x2c98),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c94));
    uVar8 = (ulonglong)bVar6;
  }
  uVar9 = FUN_180022ca0(uVar8,*(uint *)(*(longlong *)(param_1 + 0x140) + 0x2984) & 0x7f);
  uVar9 = FUN_180022ca0(uVar9,*(int *)(extraout_x14 + 0x2988));
  lVar11 = param_1 + (longlong)extraout_w13 * 0x180 + 0x148;
  if (extraout_w13 == -1) {
    lVar11 = 0;
  }
  if (extraout_w8 == 0) {
    lVar11 = param_2;
  }
  lVar13 = param_1 + (longlong)(int)uVar9 * 0x180 + 0x148;
  if ((int)uVar9 == -1) {
    lVar13 = 0;
  }
  lVar2 = param_2;
  if (extraout_w8 == 0) {
    lVar2 = lVar13;
  }
  bVar6 = (param_4 & 0xff) != 0;
  lVar13 = 0x120;
  if (bVar6) {
    lVar13 = 0x150;
  }
  lVar3 = 0x128;
  if (bVar6) {
    lVar3 = 0x158;
  }
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + 0xe0);
  }
  if (lVar2 == 0) {
    lVar12 = 0;
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar2 + 0x168);
    uVar10 = *(undefined8 *)(lVar2 + 0xe0);
  }
  if (((lVar11 != 0) && (lVar2 != 0)) &&
     ((*(int *)(lVar11 + 0x28) != *(int *)(lVar2 + 0x28) ||
      (*(int *)(lVar11 + 0x2c) != *(int *)(lVar2 + 0x2c))))) {
    if (extraout_w8 == 0) {
      uVar10 = 0;
      lVar12 = 0;
    }
    else {
      uVar9 = 0;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x24);
  if (extraout_w9 == 0) {
    local_88 = 0.005;
    fStack_84 = 0.005;
  }
  else {
    local_88 = -(0.49 / ((float)(extraout_x10 & 0xffffffff) / (float)(extraout_x11 & 0xffffffff)));
    fStack_84 = -(0.49 / ((float)*(uint *)(param_2 + 0x2c) / (float)uVar5));
  }
  local_80 = (float)param_5;
  fStack_7c = (float)param_6;
  local_78 = (float)param_7;
  bVar6 = *(int *)(param_2 + 0x70) == 1;
  if (bVar6) {
    param_6 = uVar5 - param_6;
  }
  fStack_74 = (float)param_8;
  local_90 = local_80 + local_88;
  if (bVar6) {
    param_8 = uVar5 - param_8;
  }
  fStack_8c = (float)param_6 + fStack_84;
  local_88 = local_78 + local_88;
  fStack_84 = (float)param_8 + fStack_84;
  FUN_180033de8(param_1,&local_80,&local_90,
                *(longlong *)(param_1 + (ulonglong)extraout_w15 * 8 + 0x5c8),
                *(undefined8 *)(param_2 + lVar13),*(undefined8 *)(param_2 + lVar3),uVar9,uVar10,
                lVar12,param_9);
  FUN_18001c420(*(longlong *)(param_1 + 0x140));
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = uVar4;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be1) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be0) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be3) = 1;
  return;
}


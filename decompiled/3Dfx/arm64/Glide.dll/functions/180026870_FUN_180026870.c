/*
 * FUN_180026870 at 180026870
 * undefined __cdecl FUN_180026870(longlong param_1, longlong param_2, undefined8 param_3, char param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 180026870-180026d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026870(longlong param_1,longlong param_2,undefined8 param_3,char param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,byte param_9)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ushort extraout_w8;
  int extraout_w9;
  int extraout_w10;
  ulonglong extraout_x11;
  ulonglong extraout_x12;
  undefined4 uVar17;
  longlong extraout_x13;
  undefined4 uVar18;
  int extraout_w15;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  longlong lVar22;
  float local_120 [3];
  float fStack_114;
  uint local_110;
  uint uStack_10c;
  uint local_108;
  uint local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d0 [16];
  int local_90 [16];
  
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0);
  local_110 = param_5;
  uStack_10c = param_6;
  local_108 = param_7;
  local_104 = param_8;
  bVar10 = FUN_18001a440(*(longlong *)(param_1 + 0x140));
  *(bool *)(*(longlong *)(param_1 + 0x140) + 0x32d8) = bVar10;
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c98) = *(undefined4 *)(param_2 + 0x6c);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf0) = (float)*(uint *)(param_2 + 0x20);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf4) = (float)*(uint *)(param_2 + 0x24);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x3170) = 1;
  uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4);
  uVar20 = 1;
  if (*(char *)(param_2 + 0x95) == '\0') {
    uVar12 = FUN_18001c3d8((longlong *)(lVar22 + 0x1978),(int *)&DAT_180062c10);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3260) = uVar12;
    local_d0[2] = 8;
    local_d0[3] = 0;
    local_d0[6] = 3;
    local_d0[7] = 3;
    local_d0[4] = 0xffff;
    local_d0[5] = 3;
    local_d0[10] = 3;
    local_d0[0xb] = 3;
    local_d0[8] = 8;
    local_d0[9] = 3;
    local_d0[0xc] = 8;
    local_90[2] = 8;
    local_90[3] = 0;
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[6] = 3;
    local_90[7] = 3;
    local_90[4] = 0xffff;
    local_90[5] = 3;
    local_90[0xc] = 8;
    local_d0[0] = 1;
    local_d0[1] = 1;
    local_90[10] = 3;
    local_90[0xb] = 3;
    local_90[8] = 8;
    local_90[9] = 3;
    piVar4 = local_d0;
    if (*(char *)(param_2 + 0x48) == '\0') {
      piVar4 = local_90;
    }
    uVar12 = FUN_18001c660((longlong *)(lVar22 + 0x1960),piVar4);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3278) = uVar12;
    uVar12 = FUN_18001c1a0((longlong *)(lVar22 + 0x19a8),(uint *)&DAT_180062ba8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3270) = uVar12;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x32da) = 1;
    local_120[2] = *(float *)(param_2 + 0x28);
    fStack_114 = *(float *)(param_2 + 0x2c);
    local_120[0] = 0.0;
    local_120[1] = 0.0;
    FUN_18004cdf0(*(longlong *)(lVar22 + 0x1508),1,(longlong)local_120);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
    FUN_18001ab78(*(longlong *)(param_1 + 0x140),*(byte *)(*(longlong *)(param_1 + 0x140) + 0x32d8))
    ;
    FUN_18001ae28(*(longlong *)(param_1 + 0x140),
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x140) + 0x32d8));
  }
  local_f0 = 0;
  local_e0 = 0;
  fStack_e4 = (float)*(uint *)(param_2 + 0x2c);
  local_e8 = (float)*(uint *)(param_2 + 0x28);
  local_dc = 0x3f800000;
  uVar11 = FUN_18004cec0(*(longlong *)(lVar22 + 0x1508),1,(longlong)&local_f0);
  if ((*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x20)) ||
     (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x24))) {
    bVar10 = FUN_180022478(uVar11,*(int *)(*(longlong *)(param_1 + 0x140) + 0x2c98),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c94));
    uVar11 = (ulonglong)bVar10;
  }
  uVar12 = FUN_180023af0(uVar11,*(uint *)(*(longlong *)(param_1 + 0x140) + 0x2984) & 0x7f);
  uVar12 = FUN_180023af0(uVar12,*(int *)(extraout_x13 + 0x2988));
  lVar22 = param_1 + (longlong)extraout_w15 * 0x170 + 0x148;
  if (extraout_w15 == -1) {
    lVar22 = 0;
  }
  if (extraout_w9 == 0) {
    lVar22 = param_2;
  }
  lVar1 = param_1 + (longlong)(int)uVar12 * 0x170 + 0x148;
  if ((int)uVar12 == -1) {
    lVar1 = 0;
  }
  lVar5 = param_2;
  if (extraout_w9 == 0) {
    lVar5 = lVar1;
  }
  bVar10 = param_4 == '\0';
  lVar1 = 0x140;
  if (bVar10) {
    lVar1 = 0x110;
  }
  lVar6 = 0x148;
  if (bVar10) {
    lVar6 = 0x118;
  }
  lVar7 = 0x158;
  if (bVar10) {
    lVar7 = 0x128;
  }
  if (lVar22 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(ulonglong *)(lVar22 + 0xd8);
  }
  if (lVar5 == 0) {
    uVar20 = 0;
    uVar13 = 0;
    uVar16 = 0;
  }
  else {
    uVar13 = *(ulonglong *)(lVar5 + 0xf8);
    uVar16 = *(ulonglong *)(lVar5 + 0xd8);
    if (*(int *)(lVar5 + 0x108) == 0x2d) {
      uVar20 = 2;
    }
  }
  if (lVar22 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = *(uint *)(lVar22 + 0xec);
  }
  if (lVar5 == 0) {
    uVar15 = 0xffffffff;
    uVar19 = 0xffffffff;
  }
  else {
    uVar15 = *(uint *)(lVar5 + 0x104);
    uVar19 = *(uint *)(lVar5 + 0xec);
  }
  if (lVar22 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined4 *)(lVar22 + 0xf0);
  }
  if (lVar5 == 0) {
    uVar17 = 0;
    uVar21 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(lVar5 + 0x108);
    uVar21 = *(undefined4 *)(lVar5 + 0xf0);
  }
  if (((lVar22 != 0) && (lVar5 != 0)) &&
     ((*(uint *)(lVar5 + 0x28) < *(uint *)(lVar22 + 0x28) ||
      (*(uint *)(lVar5 + 0x2c) < *(uint *)(lVar22 + 0x2c))))) {
    if (extraout_w9 == 0) {
      uVar16 = 0;
      uVar19 = 0xffffffff;
      uVar13 = 0;
      uVar15 = 0xffffffff;
    }
    else {
      uVar11 = 0;
      uVar14 = *(int *)(lVar22 + 0xec) + 1;
    }
  }
  uVar9 = *(uint *)(param_2 + 0x24);
  if (extraout_w10 == 0) {
    local_f8 = 0.005;
    fStack_f4 = 0.005;
  }
  else {
    local_f8 = -(0.49 / ((float)(extraout_x11 & 0xffffffff) / (float)(extraout_x12 & 0xffffffff)));
    fStack_f4 = -(0.49 / ((float)*(uint *)(param_2 + 0x2c) / (float)uVar9));
  }
  bVar10 = *(int *)(param_2 + 0x70) == 1;
  uVar2 = uStack_10c;
  if (bVar10) {
    uVar2 = uVar9 - uStack_10c;
  }
  local_120[2] = (float)local_108;
  uVar3 = local_104;
  if (bVar10) {
    uVar3 = uVar9 - local_104;
  }
  local_120[1] = (float)uStack_10c;
  local_120[0] = (float)local_110;
  fStack_114 = (float)local_104;
  local_100 = (float)local_110 + local_f8;
  fStack_fc = (float)uVar2 + fStack_f4;
  local_f8 = local_120[2] + local_f8;
  fStack_f4 = (float)uVar3 + fStack_f4;
  FUN_180026490(param_1,local_120,&local_100,
                *(undefined8 *)(param_1 + (ulonglong)extraout_w8 * 8 + 0x598),
                *(ulonglong *)(param_2 + lVar1),*(ulonglong *)(param_2 + lVar6),uVar11,uVar16,uVar13
                ,uVar18,uVar21,uVar17,*(undefined4 *)(param_2 + 0x30),*(uint *)(param_2 + lVar7),
                *(uint *)(param_2 + lVar7) + 1,uVar14,uVar19,uVar15,0,uVar20,param_9);
  FUN_18001afb8(*(longlong *)(param_1 + 0x140));
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = uVar8;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be1) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be0) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be3) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x3171) = 1;
  return;
}


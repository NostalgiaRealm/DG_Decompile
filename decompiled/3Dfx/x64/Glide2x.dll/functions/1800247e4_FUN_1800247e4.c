/*
 * FUN_1800247e4 at 1800247e4
 * undefined __fastcall FUN_1800247e4(longlong param_1, longlong param_2, byte param_3, byte param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 1800247e4-180024e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800247e4(longlong param_1,longlong param_2,byte param_3,byte param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,byte param_9)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 local_res8;
  undefined4 local_res10;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  ulonglong local_c8;
  int local_c0 [14];
  int local_88 [18];
  
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0);
  bVar6 = FUN_1800193e0(*(longlong *)(param_1 + 0x140));
  bVar5 = false;
  *(bool *)(*(longlong *)(param_1 + 0x140) + 0x32d8) = bVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c98) = *(undefined4 *)(param_2 + 0x6c);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf0) = (float)*(uint *)(param_2 + 0x20);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf4) = (float)*(uint *)(param_2 + 0x24);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x3170) = 1;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4);
  if (*(char *)(param_2 + 0x95) == '\0') {
    uVar7 = FUN_18001aaa8((longlong *)(lVar10 + 0x1978),(int *)&DAT_180060c80);
    local_c0[0] = 1;
    local_c0[2] = 8;
    local_c0[3] = 0;
    local_c0[4] = 0xffff;
    local_c0[5] = 3;
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3260) = uVar7;
    local_c0[6] = 3;
    local_c0[7] = 3;
    local_c0[8] = 8;
    local_88[0xc] = 8;
    piVar12 = local_c0;
    if (*(char *)(param_2 + 0x48) == '\0') {
      piVar12 = local_88;
    }
    local_c0[1] = 1;
    local_c0[9] = 3;
    local_c0[10] = 3;
    local_c0[0xb] = 3;
    local_c0[0xc] = 8;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 8;
    local_88[3] = 0;
    local_88[4] = 0xffff;
    local_88[5] = 3;
    local_88[6] = 3;
    local_88[7] = 3;
    local_88[8] = 8;
    local_88[9] = 3;
    local_88[10] = 3;
    local_88[0xb] = 3;
    uVar7 = FUN_18001ad48((longlong *)(lVar10 + 0x1960),piVar12);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3278) = uVar7;
    uVar7 = FUN_18001ac58((longlong *)(lVar10 + 0x19a8),(uint *)&DAT_180060c18);
    *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3270) = uVar7;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x32da) = 1;
    local_108 = *(undefined4 *)(param_2 + 0x28);
    local_104 = *(undefined4 *)(param_2 + 0x2c);
    local_110 = 0;
    FUN_1800487c0(*(longlong *)(lVar10 + 0x1508),1,(longlong)&local_110);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
    FUN_180019d78(*(longlong *)(param_1 + 0x140),*(char *)(*(longlong *)(param_1 + 0x140) + 0x32d8))
    ;
    FUN_18001a090(*(longlong *)(param_1 + 0x140),*(char *)(*(longlong *)(param_1 + 0x140) + 0x32d8))
    ;
  }
  local_e0 = 0;
  local_d0 = 0;
  local_cc = 0x3f800000;
  local_d8 = (float)*(uint *)(param_2 + 0x28);
  local_d4 = (float)*(uint *)(param_2 + 0x2c);
  lVar10 = *(longlong *)(lVar10 + 0x1508);
  FUN_18004886c(lVar10,1,(longlong)&local_e0);
  if (((*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x20)) ||
      (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x24))) &&
     (bVar6 = FUN_1800202e8(lVar10,*(int *)(*(longlong *)(param_1 + 0x140) + 0x2c98),
                            *(int *)(*(longlong *)(param_1 + 0x140) + 0x2c94)), bVar6)) {
    bVar5 = true;
  }
  cVar1 = *(char *)(param_2 + 0x48);
  puVar8 = &DAT_180063368;
  if (!bVar5) {
    puVar8 = &DAT_180063340;
  }
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x2984) & 0x7f;
  if (uVar9 == 0) {
    iVar11 = 0;
  }
  else if (uVar9 == 1) {
    iVar11 = 1;
  }
  else {
    iVar11 = -1;
    if (uVar9 == 2) {
      iVar11 = 2;
    }
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x2988);
  iVar15 = -1;
  if (iVar3 == 0) {
    iVar15 = 0;
  }
  else if (iVar3 == 1) {
    iVar15 = 1;
  }
  else if (iVar3 == 2) {
    iVar15 = 2;
  }
  lVar10 = 0;
  if (iVar11 != -1) {
    lVar10 = (longlong)iVar11 * 0x170 + 0x148 + param_1;
  }
  lVar14 = param_2;
  if (cVar1 != '\0') {
    lVar14 = lVar10;
  }
  lVar10 = 0;
  if (iVar15 != -1) {
    lVar10 = (longlong)iVar15 * 0x170 + 0x148 + param_1;
  }
  if (cVar1 != '\0') {
    lVar10 = param_2;
  }
  local_110 = *(ulonglong *)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x110 + param_2);
  local_c8 = *(ulonglong *)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x118 + param_2);
  uVar9 = *(uint *)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x128 + param_2);
  if (lVar14 == 0) {
    local_118 = 0;
  }
  else {
    local_118 = *(ulonglong *)(lVar14 + 0xd8);
  }
  uVar16 = 0;
  if (lVar10 == 0) {
    uVar18 = 0;
    local_120 = 0;
  }
  else {
    local_120 = *(ulonglong *)(lVar10 + 0xd8);
    uVar16 = (*(int *)(lVar10 + 0x108) == 0x2d) + 1;
    uVar18 = *(ulonglong *)(lVar10 + 0xf8);
  }
  if (lVar14 == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = *(uint *)(lVar14 + 0xec);
  }
  if (lVar10 == 0) {
    uVar19 = 0xffffffff;
    uVar20 = 0xffffffff;
  }
  else {
    uVar19 = *(uint *)(lVar10 + 0x104);
    uVar20 = *(uint *)(lVar10 + 0xec);
  }
  if (lVar14 == 0) {
    local_res10 = 0;
  }
  else {
    local_res10 = *(undefined4 *)(lVar14 + 0xf0);
  }
  if (lVar10 == 0) {
    local_res8 = 0;
    uVar13 = 0;
  }
  else {
    local_res8 = *(undefined4 *)(lVar10 + 0x108);
    uVar13 = *(undefined4 *)(lVar10 + 0xf0);
  }
  if (((lVar14 != 0) && (lVar10 != 0)) &&
     ((*(uint *)(lVar10 + 0x28) < *(uint *)(lVar14 + 0x28) ||
      (*(uint *)(lVar10 + 0x2c) < *(uint *)(lVar14 + 0x2c))))) {
    if (*(char *)(param_2 + 0x48) == '\0') {
      uVar19 = 0xffffffff;
      local_120 = 0;
      uVar18 = 0;
      uVar20 = uVar19;
    }
    else {
      uVar17 = *(int *)(lVar14 + 0xec) + 1;
      local_118 = 0;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x24);
  if (bVar5) {
    local_f8 = -(0.49 / ((float)*(uint *)(param_2 + 0x28) / (float)*(uint *)(param_2 + 0x20)));
    local_f4 = -(0.49 / ((float)*(uint *)(param_2 + 0x2c) / (float)uVar4));
  }
  else {
    local_f4 = 0.005;
    local_f8 = 0.005;
  }
  local_f0 = (float)param_5;
  local_ec = (float)param_6;
  local_e8 = (float)param_7;
  local_e4 = (float)param_8;
  if (*(int *)(param_2 + 0x70) == 1) {
    param_6 = uVar4 - param_6;
    param_8 = uVar4 - param_8;
  }
  local_100 = local_f0 + local_f8;
  local_f8 = local_e8 + local_f8;
  local_fc = (float)param_6 + local_f4;
  local_f4 = (float)param_8 + local_f4;
  FUN_180023c24(param_1,&local_f0,&local_100,
                *(undefined8 *)
                 (param_1 + 0x598 +
                 (ulonglong)
                 *(ushort *)
                  (puVar8 + (ulonglong)
                            (-(uint)(*(char *)(param_2 + 0x95) != '\0') & 2 | (uint)(cVar1 != '\0')
                             | (uint)param_3 << 2 | (uint)param_4 << 3) * 2) * 8),local_110,local_c8
                ,local_118,local_120,uVar18,local_res10,uVar13,local_res8,
                *(undefined4 *)(param_2 + 0x30),uVar9,uVar9 + 1,uVar17,uVar20,uVar19,0,uVar16,
                param_9);
  FUN_18001a2fc(*(longlong *)(param_1 + 0x140));
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2ae4) = uVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be1) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be0) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be3) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x3171) = 1;
  return;
}


/*
 * FUN_180019438 at 180019438
 * undefined __cdecl FUN_180019438(longlong * param_1, longlong * param_2, byte param_3, byte param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 180019438-180019a0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019438(longlong *param_1,longlong *param_2,byte param_3,byte param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,byte param_9)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  ushort uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d0 [16];
  int local_90 [16];
  
  lVar26 = *(longlong *)(param_1[0x28] + 0x3340);
  local_108 = param_5;
  local_104 = param_7;
  bVar14 = FUN_18000db68(param_1[0x28]);
  *(bool *)(param_1[0x28] + 0x3458) = bVar14;
  *(undefined4 *)(param_1[0x28] + 0x2d38) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(float *)(param_1[0x28] + 0x2c90) = (float)*(uint *)(param_2 + 4);
  *(float *)(param_1[0x28] + 0x2c94) = (float)*(uint *)((longlong)param_2 + 0x24);
  *(undefined1 *)(param_1[0x28] + 0x32f0) = 1;
  uVar9 = *(undefined4 *)(param_1[0x28] + 0x2b7c);
  uVar25 = 1;
  if (*(char *)((longlong)param_2 + 0x95) == '\0') {
    uVar17 = FUN_18000faf8((longlong *)(lVar26 + 0x1978),(int *)&DAT_1800658d0);
    *(undefined8 *)(param_1[0x28] + 0x33e0) = uVar17;
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
    piVar2 = local_d0;
    if ((char)param_2[9] == '\0') {
      piVar2 = local_90;
    }
    uVar17 = FUN_18000fd80((longlong *)(lVar26 + 0x1960),piVar2);
    *(undefined8 *)(param_1[0x28] + 0x33f8) = uVar17;
    uVar17 = FUN_18000f8c0((longlong *)(lVar26 + 0x19a8),(uint *)&DAT_180065860);
    *(undefined8 *)(param_1[0x28] + 0x33f0) = uVar17;
    *(undefined1 *)(param_1[0x28] + 0x345a) = 1;
    local_118 = (float)param_2[5];
    fStack_114 = *(float *)((longlong)param_2 + 0x2c);
    local_120 = 0;
    FUN_18004fb30(*(longlong *)(lVar26 + 0x1508),1,(longlong)&local_120);
  }
  else {
    *(undefined4 *)(param_1[0x28] + 0x2b7c) = 1;
    *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
    FUN_18000e2a0(param_1[0x28],*(byte *)(param_1[0x28] + 0x3458));
    FUN_18000e568(param_1[0x28],(ulonglong)*(byte *)(param_1[0x28] + 0x3458));
  }
  local_f0 = 0;
  local_e0 = 0;
  fStack_e4 = (float)*(uint *)((longlong)param_2 + 0x2c);
  local_e8 = (float)*(uint *)(param_2 + 5);
  local_dc = 0x3f800000;
  uVar17 = FUN_18004fc00(*(longlong *)(lVar26 + 0x1508),1,(longlong)&local_f0);
  if ((((int)param_2[5] == (int)param_2[4]) &&
      (*(int *)((longlong)param_2 + 0x2c) == *(int *)((longlong)param_2 + 0x24))) ||
     (bVar14 = FUN_180015908(uVar17,*(int *)(param_1[0x28] + 0x2d38),
                             *(undefined4 *)(param_1[0x28] + 0x2d34)), !bVar14)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  uVar15 = (uint)((char)param_2[9] != '\0') |
           (uint)(*(char *)((longlong)param_2 + 0x95) != '\0') << 1 | (uint)param_3 << 2 |
           (uint)param_4 << 3;
  if (*(char *)((longlong)param_2 + 0x97) != '\0') {
    uVar15 = (param_3 ^ 1) + 0x10;
  }
  puVar3 = &DAT_180067700;
  if (bVar14) {
    puVar3 = &DAT_180067728;
  }
  uVar12 = *(ushort *)(puVar3 + (ulonglong)uVar15 * 2);
  if (*(char *)((longlong)param_2 + 0x97) != '\0') {
    local_110 = *(int *)((longlong)param_2 + 0x8c) * *(int *)(param_1[0x28] + 0x77a0);
    local_100 = (**(code **)(**(longlong **)(param_1[0x28] + 0x77a8) + 0x58))();
    local_10c = (int)param_2[0x12] * *(int *)(param_1[0x28] + 0x77a0);
    local_120 = (**(code **)(**(longlong **)(param_1[0x28] + 0x77a8) + 0x58))();
    FUN_18004f478(*(longlong *)(lVar26 + 0x1508),0xf,local_100 + (ulonglong)local_110);
    FUN_18004f478(*(longlong *)(lVar26 + 0x1508),0x10,local_120 + (ulonglong)local_10c);
    FUN_18004ec28(*(ulonglong *)
                   (*(longlong *)(*(longlong *)(param_1[0x28] + 0x7798) + 0x3340) + 0x1508),
                  *(ulonglong *)(param_1[0x28] + 0x77a8),0,1,0x80);
  }
  uVar15 = FUN_180016f80(param_1,*(uint *)(param_1[0x28] + 0x29fc) & 0x7f);
  uVar16 = FUN_180016f80(param_1,*(int *)(param_1[0x28] + 0x2a00));
  cVar11 = (char)param_2[9];
  plVar4 = param_1 + (longlong)(int)uVar15 * 0x2e + 0x29;
  if (uVar15 == 0xffffffff) {
    plVar4 = (longlong *)0x0;
  }
  if (cVar11 == '\0') {
    plVar4 = param_2;
  }
  plVar5 = param_1 + (longlong)(int)uVar16 * 0x2e + 0x29;
  if (uVar16 == 0xffffffff) {
    plVar5 = (longlong *)0x0;
  }
  plVar6 = param_2;
  if (cVar11 == '\0') {
    plVar6 = plVar5;
  }
  bVar13 = param_4 == 0;
  lVar26 = 0x140;
  if (bVar13) {
    lVar26 = 0x110;
  }
  lVar7 = 0x148;
  if (bVar13) {
    lVar7 = 0x118;
  }
  lVar8 = 0x158;
  if (bVar13) {
    lVar8 = 0x128;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar19 = 0;
  }
  else {
    uVar19 = plVar4[0x1b];
  }
  if (plVar6 == (longlong *)0x0) {
    uVar25 = 0;
    uVar24 = 0;
    uVar20 = 0;
  }
  else {
    uVar24 = plVar6[0x1f];
    uVar20 = plVar6[0x1b];
    if ((int)plVar6[0x21] == 0x2d) {
      uVar25 = 2;
    }
  }
  if (plVar4 == (longlong *)0x0) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = *(uint *)((longlong)plVar4 + 0xec);
  }
  if (plVar6 == (longlong *)0x0) {
    uVar16 = 0xffffffff;
    uVar23 = 0xffffffff;
  }
  else {
    uVar16 = *(uint *)((longlong)plVar6 + 0x104);
    uVar23 = *(uint *)((longlong)plVar6 + 0xec);
  }
  if (plVar4 == (longlong *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = (undefined4)plVar4[0x1e];
  }
  if (plVar6 == (longlong *)0x0) {
    uVar21 = 0;
    uVar18 = 0;
  }
  else {
    uVar21 = (undefined4)plVar6[0x21];
    uVar18 = (undefined4)plVar6[0x1e];
  }
  if (((plVar4 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) &&
     ((*(uint *)(plVar6 + 5) < *(uint *)(plVar4 + 5) ||
      (*(uint *)((longlong)plVar6 + 0x2c) < *(uint *)((longlong)plVar4 + 0x2c))))) {
    if (cVar11 == '\0') {
      uVar20 = 0;
      uVar23 = 0xffffffff;
      uVar24 = 0;
      uVar16 = 0xffffffff;
    }
    else {
      uVar19 = 0;
      uVar15 = *(int *)((longlong)plVar4 + 0xec) + 1;
    }
  }
  uVar10 = *(uint *)((longlong)param_2 + 0x24);
  if (bVar14) {
    local_118 = -(0.49 / ((float)*(uint *)(param_2 + 5) / (float)*(uint *)(param_2 + 4)));
    fStack_114 = -(0.49 / ((float)*(uint *)((longlong)param_2 + 0x2c) / (float)uVar10));
  }
  else {
    local_118 = 0.005;
    fStack_114 = 0.005;
  }
  local_f8 = (float)local_104;
  bVar14 = (int)param_2[0xe] == 1;
  uVar1 = param_6;
  if (bVar14) {
    uVar1 = uVar10 - param_6;
  }
  local_100 = CONCAT44((float)param_6,(float)local_108);
  fStack_f4 = (float)param_8;
  if (bVar14) {
    param_8 = uVar10 - param_8;
  }
  local_120 = CONCAT44((float)uVar1 + fStack_114,(float)local_108 + local_118);
  local_118 = local_f8 + local_118;
  fStack_114 = (float)param_8 + fStack_114;
  FUN_180019058((longlong)param_1,(float *)&local_100,(float *)&local_120,
                param_1[(ulonglong)uVar12 + 0x16b],*(ulonglong *)((longlong)param_2 + lVar26),
                *(ulonglong *)((longlong)param_2 + lVar7),uVar19,uVar20,uVar24,uVar22,uVar18,uVar21,
                (int)param_2[6],*(uint *)((longlong)param_2 + lVar8),
                *(uint *)((longlong)param_2 + lVar8) + 1,uVar15,uVar23,uVar16,0,uVar25,param_9);
  FUN_18000e700(param_1[0x28]);
  *(undefined4 *)(param_1[0x28] + 0x2b7c) = uVar9;
  *(undefined1 *)(param_1[0x28] + 0x2c79) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c78) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7b) = 1;
  *(undefined1 *)(param_1[0x28] + 0x32f1) = 1;
  return;
}


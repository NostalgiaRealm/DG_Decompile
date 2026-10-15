/*
 * FUN_180017008 at 180017008
 * undefined __fastcall FUN_180017008(longlong * param_1, longlong * param_2, byte param_3, byte param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 180017008-1800176ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017008(longlong *param_1,longlong *param_2,byte param_3,byte param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,byte param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined6 extraout_var;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong lVar16;
  int *piVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  char cVar24;
  longlong *plVar25;
  undefined4 local_res8;
  undefined4 local_res20;
  ulonglong local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  int local_a8 [14];
  int local_70 [14];
  
  lVar6 = *(longlong *)(param_1[0x28] + 0x3340);
  bVar8 = FUN_18000c348(param_1[0x28]);
  cVar24 = '\x01';
  *(bool *)(param_1[0x28] + 0x3458) = bVar8;
  *(undefined4 *)(param_1[0x28] + 0x2d38) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(float *)(param_1[0x28] + 0x2c90) = (float)*(uint *)(param_2 + 4);
  *(float *)(param_1[0x28] + 0x2c94) = (float)*(uint *)((longlong)param_2 + 0x24);
  *(undefined1 *)(param_1[0x28] + 0x32f0) = 1;
  uVar1 = *(undefined4 *)(param_1[0x28] + 0x2b7c);
  if (*(char *)((longlong)param_2 + 0x95) == '\0') {
    uVar12 = FUN_18000d928((longlong *)(lVar6 + 0x1978),(int *)&DAT_180062970);
    local_a8[0] = 1;
    local_a8[2] = 8;
    local_a8[3] = 0;
    local_a8[4] = 0xffff;
    local_a8[5] = 3;
    *(undefined8 *)(param_1[0x28] + 0x33e0) = uVar12;
    local_a8[6] = 3;
    local_a8[7] = 3;
    local_a8[8] = 8;
    local_70[0xc] = 8;
    piVar17 = local_a8;
    if ((char)param_2[9] == '\0') {
      piVar17 = local_70;
    }
    local_a8[1] = 1;
    local_a8[9] = 3;
    local_a8[10] = 3;
    local_a8[0xb] = 3;
    local_a8[0xc] = 8;
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = 8;
    local_70[3] = 0;
    local_70[4] = 0xffff;
    local_70[5] = 3;
    local_70[6] = 3;
    local_70[7] = 3;
    local_70[8] = 8;
    local_70[9] = 3;
    local_70[10] = 3;
    local_70[0xb] = 3;
    uVar12 = FUN_18000dbc8((longlong *)(lVar6 + 0x1960),piVar17);
    *(undefined8 *)(param_1[0x28] + 0x33f8) = uVar12;
    uVar12 = FUN_18000dad8((longlong *)(lVar6 + 0x19a8),(uint *)&DAT_180062900);
    *(undefined8 *)(param_1[0x28] + 0x33f0) = uVar12;
    *(undefined1 *)(param_1[0x28] + 0x345a) = 1;
    local_f0 = (undefined4)param_2[5];
    local_ec = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_f8 = 0;
    FUN_18004adcc(*(longlong *)(lVar6 + 0x1508),1,(longlong)&local_f8);
  }
  else {
    *(undefined4 *)(param_1[0x28] + 0x2b7c) = 1;
    *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
    FUN_18000cce0(param_1[0x28],*(char *)(param_1[0x28] + 0x3458));
    FUN_18000d004(param_1[0x28],*(char *)(param_1[0x28] + 0x3458));
  }
  local_c8 = 0;
  local_b8 = 0;
  local_b4 = 0x3f800000;
  local_c0 = (float)*(uint *)(param_2 + 5);
  local_bc = (float)*(uint *)((longlong)param_2 + 0x2c);
  lVar16 = *(longlong *)(lVar6 + 0x1508);
  FUN_18004ae78(lVar16,1,(longlong)&local_c8);
  if ((((int)param_2[5] == (int)param_2[4]) &&
      (*(int *)((longlong)param_2 + 0x2c) == *(int *)((longlong)param_2 + 0x24))) ||
     (bVar8 = FUN_18001372c(lVar16,*(int *)(param_1[0x28] + 0x2d38),*(int *)(param_1[0x28] + 0x2d34)
                           ), !bVar8)) {
    cVar24 = '\0';
  }
  uVar9 = FUN_180013794(lVar16,(longlong)param_2,param_3,cVar24,param_4);
  if (*(char *)((longlong)param_2 + 0x97) != '\0') {
    iVar2 = *(int *)((longlong)param_2 + 0x8c);
    iVar3 = *(int *)(param_1[0x28] + 0x77a0);
    lVar13 = (**(code **)(**(longlong **)(param_1[0x28] + 0x77a8) + 0x58))();
    lVar16 = param_2[0x12];
    iVar4 = *(int *)(param_1[0x28] + 0x77a0);
    lVar14 = (**(code **)(**(longlong **)(param_1[0x28] + 0x77a8) + 0x58))();
    FUN_18004a82c(*(longlong *)(lVar6 + 0x1508),0xf,(ulonglong)(uint)(iVar2 * iVar3) + lVar13);
    FUN_18004a82c(*(longlong *)(lVar6 + 0x1508),0x10,(ulonglong)(uint)((int)lVar16 * iVar4) + lVar14
                 );
    FUN_18004a068(*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1[0x28] + 0x7798) + 0x3340) + 0x1508),
                  *(ulonglong *)(param_1[0x28] + 0x77a8),0,1,0x80);
  }
  plVar21 = (longlong *)0x0;
  uVar10 = FUN_180014854(param_1,*(uint *)(param_1[0x28] + 0x29fc) & 0x7f);
  uVar11 = FUN_180014854(param_1,*(int *)(param_1[0x28] + 0x2a00));
  plVar18 = plVar21;
  if (uVar10 != 0xffffffff) {
    plVar18 = param_1 + (longlong)(int)uVar10 * 0x2e + 0x29;
  }
  plVar22 = param_2;
  if ((char)param_2[9] != '\0') {
    plVar22 = plVar18;
  }
  plVar18 = plVar21;
  if (uVar11 != 0xffffffff) {
    plVar18 = param_1 + (longlong)(int)uVar11 * 0x2e + 0x29;
  }
  if ((char)param_2[9] != '\0') {
    plVar18 = param_2;
  }
  local_f8 = *(ulonglong *)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x110 + (longlong)param_2);
  local_b0 = *(ulonglong *)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x118 + (longlong)param_2);
  uVar10 = *(uint *)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x128 + (longlong)param_2);
  if (plVar22 == (longlong *)0x0) {
    local_100 = 0;
  }
  else {
    local_100 = plVar22[0x1b];
  }
  uVar11 = 0;
  plVar25 = plVar21;
  if (plVar18 != (longlong *)0x0) {
    plVar21 = (longlong *)plVar18[0x1b];
    uVar11 = ((int)plVar18[0x21] == 0x2d) + 1;
    plVar25 = (longlong *)plVar18[0x1f];
  }
  if (plVar22 == (longlong *)0x0) {
    uVar23 = 0xffffffff;
  }
  else {
    uVar23 = *(uint *)((longlong)plVar22 + 0xec);
  }
  if (plVar18 == (longlong *)0x0) {
    uVar19 = 0xffffffff;
    uVar20 = 0xffffffff;
  }
  else {
    uVar19 = *(uint *)((longlong)plVar18 + 0x104);
    uVar20 = *(uint *)((longlong)plVar18 + 0xec);
  }
  uVar15 = 0;
  if (plVar22 == (longlong *)0x0) {
    local_res8 = 0;
  }
  else {
    local_res8 = (undefined4)plVar22[0x1e];
  }
  if (plVar18 == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (undefined4)plVar18[0x21];
    uVar15 = (undefined4)plVar18[0x1e];
  }
  if (((plVar22 != (longlong *)0x0) && (plVar18 != (longlong *)0x0)) &&
     ((*(uint *)(plVar18 + 5) < *(uint *)(plVar22 + 5) ||
      (*(uint *)((longlong)plVar18 + 0x2c) < *(uint *)((longlong)plVar22 + 0x2c))))) {
    if ((char)param_2[9] == '\0') {
      uVar19 = 0xffffffff;
      plVar21 = (longlong *)0x0;
      plVar25 = (longlong *)0x0;
      uVar20 = uVar19;
    }
    else {
      uVar23 = *(int *)((longlong)plVar22 + 0xec) + 1;
      local_100 = 0;
    }
  }
  uVar5 = *(uint *)((longlong)param_2 + 0x24);
  if (cVar24 == '\0') {
    local_dc = 0.005;
    local_e0 = 0.005;
  }
  else {
    local_e0 = -(0.49 / ((float)*(uint *)(param_2 + 5) / (float)*(uint *)(param_2 + 4)));
    local_dc = -(0.49 / ((float)*(uint *)((longlong)param_2 + 0x2c) / (float)uVar5));
  }
  local_d4 = (float)param_6;
  local_d8 = (float)param_5;
  local_d0 = (float)param_7;
  uVar7 = uVar5 - param_6;
  if ((int)param_2[0xe] != 1) {
    uVar7 = param_6;
  }
  local_e8 = local_d8 + local_e0;
  local_cc = (float)param_8;
  uVar5 = uVar5 - param_8;
  if ((int)param_2[0xe] != 1) {
    uVar5 = param_8;
  }
  local_e0 = local_d0 + local_e0;
  local_e4 = (float)uVar7 + local_dc;
  local_dc = (float)uVar5 + local_dc;
  FUN_180016448((longlong)param_1,&local_d8,&local_e8,
                param_1[(CONCAT62(extraout_var,uVar9) & 0xffffffff) + 0x16b],local_f8,local_b0,
                local_100,(ulonglong)plVar21,(ulonglong)plVar25,local_res8,uVar15,local_res20,
                (int)param_2[6],uVar10,uVar10 + 1,uVar23,uVar20,uVar19,0,uVar11,param_9);
  FUN_18000d268(param_1[0x28]);
  *(undefined4 *)(param_1[0x28] + 0x2b7c) = uVar1;
  *(undefined1 *)(param_1[0x28] + 0x2c79) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c78) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7b) = 1;
  *(undefined1 *)(param_1[0x28] + 0x32f1) = 1;
  return;
}


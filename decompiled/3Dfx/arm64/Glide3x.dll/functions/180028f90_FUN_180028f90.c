/*
 * FUN_180028f90 at 180028f90
 * undefined __cdecl FUN_180028f90(longlong * param_1, longlong * param_2, undefined8 param_3, ulonglong param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 180028f90-18002946b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180028f90(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,byte param_9)

{
  int *piVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *extraout_x1;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  float local_68 [3];
  float fStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar19 = param_1[0x28];
  uVar11 = (uint)param_3;
  plVar13 = param_2;
  uVar15 = param_4;
  if (*(char *)(lVar19 + 0x2c83) != '\0') {
    plVar13 = *(longlong **)(*(longlong *)(lVar19 + 0x3340) + 8);
    (**(code **)(*plVar13 + 0xe0))
              (plVar13,*(undefined8 *)
                        (lVar19 + ((ulonglong)*(uint *)(lVar19 + 0x2af0) + 0x33a) * 0x10));
    plVar13 = *(longlong **)(*(longlong *)(lVar19 + 0x3340) + 8);
    (**(code **)(*plVar13 + 0xe0))
              (plVar13,*(undefined8 *)
                        (lVar19 + (ulonglong)*(uint *)(lVar19 + 0x2af0) * 0x10 + 0x33a8));
    *(int *)(lVar19 + 0x2af0) = *(int *)(lVar19 + 0x2af0) + 1;
    plVar13 = extraout_x1;
  }
  *(undefined4 *)(param_1[0x28] + 0x2d38) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(float *)(param_1[0x28] + 0x2c90) = (float)*(uint *)(param_2 + 4);
  *(float *)(param_1[0x28] + 0x2c94) = (float)*(uint *)((longlong)param_2 + 0x24);
  *(undefined1 *)(param_1[0x28] + 0x32f0) = 1;
  uVar6 = *(undefined4 *)(param_1[0x28] + 0x2b7c);
  *(undefined4 *)(param_1[0x28] + 0x2b7c) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
  if (*(char *)((longlong)param_2 + 0x95) == '\0') {
    DAT_18006f764 = 0xf;
    DAT_18006f744 = 8;
    if ((char)param_2[9] == '\0') {
      DAT_18006f744 = DAT_18006f764;
    }
    if ((char)param_2[9] == '\0') {
      DAT_18006f764 = 0;
    }
    if (((char)param_2[9] != '\0') &&
       (((int)param_2[2] == 5 || ((*(uint *)(param_1[0x28] + 0x29fc) >> 7 & 1) != 0)))) {
      DAT_18006f744 = 0;
    }
    FUN_180053700(*(longlong *)(param_1[0x28] + 0x3330),(ulonglong)*(uint *)(param_1[0x28] + 0x3338)
                  ,(int *)&DAT_18006f720,uVar15,-1);
    _DAT_18006f6b0 = 0x100000001;
    lVar19 = param_1[0x28];
    piVar1 = &DAT_18006f6b0;
    if ((char)param_2[9] == '\0') {
      piVar1 = (int *)&DAT_18006f6e8;
    }
    FUN_1800539b0(*(longlong *)(lVar19 + 0x3330),(ulonglong)*(uint *)(lVar19 + 0x3338),piVar1,
                  *(int *)(lVar19 + 0x2b30));
    FUN_180053c88(*(ulonglong *)(param_1[0x28] + 0x3330),
                  (ulonglong)*(uint *)(param_1[0x28] + 0x3338),(uint *)&DAT_18006f688);
    DAT_18006f6f4 = 0;
  }
  else {
    FUN_1800105a8(param_1[0x28],plVar13,param_3,uVar15);
  }
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_58 = 0;
  fStack_5c = (float)*(uint *)((longlong)param_2 + 0x2c);
  local_68[2] = (float)*(uint *)(param_2 + 5);
  local_54 = 0x3f800000;
  uVar14 = FUN_180054160(*(longlong *)(param_1[0x28] + 0x3330),
                         (ulonglong)*(uint *)(param_1[0x28] + 0x3338),local_68);
  if ((((int)param_2[5] == (int)param_2[4]) &&
      (*(int *)((longlong)param_2 + 0x2c) == *(int *)((longlong)param_2 + 0x24))) ||
     (bVar10 = FUN_180015908(uVar14,*(int *)(param_1[0x28] + 0x2d38),
                             *(undefined4 *)(param_1[0x28] + 0x2d34)), !bVar10)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  uVar11 = uVar11 & 0xff;
  uVar12 = (uint)((char)param_2[9] != '\0') |
           (uint)(*(char *)((longlong)param_2 + 0x95) != '\0') << 1 | uVar11 << 2 |
           ((uint)param_4 & 0xff) << 3;
  if (*(char *)((longlong)param_2 + 0x97) != '\0') {
    uVar12 = (uVar11 ^ 1) + 0x10;
  }
  puVar2 = &DAT_180067700;
  if (bVar10) {
    puVar2 = &DAT_180067728;
  }
  uVar8 = *(ushort *)(puVar2 + (ulonglong)uVar12 * 2);
  if (*(char *)((longlong)param_2 + 0x97) != '\0') {
    lVar19 = param_1[0x28];
    local_78 = *(undefined8 *)(lVar19 + (longlong)*(int *)((longlong)param_2 + 0x8c) * 8 + 0x7628);
    local_70 = *(undefined8 *)(lVar19 + (longlong)(int)param_2[0x12] * 8 + 0x7628);
    FUN_180054258(*(longlong *)(lVar19 + 0x3330),(ulonglong)*(uint *)(lVar19 + 0x3338),0x1c,2,
                  (longlong)&local_78);
  }
  uVar11 = FUN_180016f80(param_1,*(uint *)(param_1[0x28] + 0x29fc) & 0x7f);
  uVar12 = FUN_180016f80(param_1,*(int *)(param_1[0x28] + 0x2a00));
  cVar7 = (char)param_2[9];
  plVar13 = param_1 + (longlong)(int)uVar11 * 0x30 + 0x29;
  if (uVar11 == 0xffffffff) {
    plVar13 = (longlong *)0x0;
  }
  if (cVar7 == '\0') {
    plVar13 = param_2;
  }
  plVar3 = param_1 + (longlong)(int)uVar12 * 0x30 + 0x29;
  if (uVar12 == 0xffffffff) {
    plVar3 = (longlong *)0x0;
  }
  plVar4 = param_2;
  if (cVar7 == '\0') {
    plVar4 = plVar3;
  }
  bVar9 = (param_4 & 0xff) != 0;
  lVar19 = 0x120;
  if (bVar9) {
    lVar19 = 0x150;
  }
  lVar5 = 0x128;
  if (bVar9) {
    lVar5 = 0x158;
  }
  if (plVar13 == (longlong *)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = plVar13[0x1c];
  }
  if (plVar4 == (longlong *)0x0) {
    lVar18 = 0;
    lVar17 = 0;
  }
  else {
    lVar18 = plVar4[0x2d];
    lVar17 = plVar4[0x1c];
  }
  if (((plVar13 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) &&
     (((int)plVar13[5] != (int)plVar4[5] ||
      (*(int *)((longlong)plVar13 + 0x2c) != *(int *)((longlong)plVar4 + 0x2c))))) {
    if (cVar7 == '\0') {
      lVar17 = 0;
      lVar18 = 0;
    }
    else {
      lVar16 = 0;
    }
  }
  uVar11 = *(uint *)((longlong)param_2 + 0x24);
  if (bVar10) {
    local_80 = -(0.49 / ((float)*(uint *)(param_2 + 5) / (float)*(uint *)(param_2 + 4)));
    fStack_7c = -(0.49 / ((float)*(uint *)((longlong)param_2 + 0x2c) / (float)uVar11));
  }
  else {
    local_80 = 0.005;
    fStack_7c = 0.005;
  }
  bVar10 = (int)param_2[0xe] == 1;
  uVar12 = param_6;
  if (bVar10) {
    uVar12 = uVar11 - param_6;
  }
  local_78 = CONCAT44((float)param_6,(float)param_5);
  local_88 = (float)param_5 + local_80;
  local_70 = CONCAT44((float)param_8,(float)param_7);
  if (bVar10) {
    param_8 = uVar11 - param_8;
  }
  fStack_84 = (float)uVar12 + fStack_7c;
  local_80 = (float)param_7 + local_80;
  fStack_7c = (float)param_8 + fStack_7c;
  FUN_180028df0((longlong)param_1,(float *)&local_78,&local_88,param_1[(ulonglong)uVar8 + 0x179],
                *(undefined8 *)((longlong)param_2 + lVar19),
                *(undefined8 *)((longlong)param_2 + lVar5),lVar16,lVar17,lVar18,param_9);
  FUN_1800109c0(param_1[0x28]);
  *(undefined4 *)(param_1[0x28] + 0x2b7c) = uVar6;
  *(undefined1 *)(param_1[0x28] + 0x2c79) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c78) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7b) = 1;
  return;
}


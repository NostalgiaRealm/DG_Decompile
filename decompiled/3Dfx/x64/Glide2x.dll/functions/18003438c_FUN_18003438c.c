/*
 * FUN_18003438c at 18003438c
 * undefined __fastcall FUN_18003438c(longlong param_1, uint param_2, byte param_3, undefined8 param_4, byte param_5)
 * Address ranges: 18003438c-1800347d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003438c(longlong param_1,uint param_2,byte param_3,undefined8 param_4,byte param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined8 uVar13;
  uint **ppuVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined4 *local_78 [2];
  float local_68 [3];
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar6 = 0;
  uVar7 = param_4;
  FUN_180034abc(param_1 + 0x3ae0,0,0,param_4);
  uVar10 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
  uVar6 = 0;
  FUN_1800338f8((longlong *)(param_1 + 0x3420),'\0',uVar10);
  FUN_18001cf18(param_1,uVar6,uVar10,uVar7);
  FUN_18001c138(param_1);
  iVar4 = 1;
  if ((*(int *)(param_1 + 0x2a60) == 0) || (*(int *)(param_1 + 0x2a64) != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  DAT_18006c604 = *(char *)(param_1 + 0x2abc);
  if ((bVar3) || ((*(uint *)(param_1 + 0x2c0c) & 0xff0000) == 0)) {
    DAT_18006c624 = '\x0f';
  }
  else {
    DAT_18006c624 = '\0';
  }
  _DAT_18006c564 = *(undefined4 *)(param_1 + 0x2afc);
  _DAT_18006c570 = *(undefined4 *)(param_1 + 0x2a60);
  _DAT_18006c574 = *(int *)(param_1 + 0x2a64);
  FUN_18004cc3c(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                (int *)&DAT_18006c5e0,uVar7,*(int *)(param_1 + 0x2a9c));
  FUN_18004ccb0(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                (int *)&DAT_18006c570,(uint)param_5);
  FUN_18004ce28(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                (uint *)&DAT_18006c548);
  iVar1 = *(int *)(param_1 + 0x2984);
  uVar15 = 0;
  uVar16 = 0;
  uVar18 = 0;
  uVar17 = 0;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else if ((iVar1 != 1) && (iVar4 = -1, iVar1 == 2)) {
    iVar4 = 2;
  }
  iVar1 = *(int *)(param_1 + 0x2988);
  iVar12 = -1;
  if (iVar1 == 0) {
    iVar12 = 0;
  }
  else if (iVar1 == 1) {
    iVar12 = 1;
  }
  else if (iVar1 == 2) {
    iVar12 = 2;
  }
  lVar11 = (longlong)iVar4 * 0x180;
  lVar8 = 0;
  if (iVar4 != -1) {
    lVar8 = param_1 + 0x3568 + lVar11;
  }
  lVar9 = 0;
  if (iVar12 != -1) {
    lVar9 = (longlong)iVar12 * 0x180 + 0x3568 + param_1;
  }
  if (lVar8 != 0) {
    puVar5 = (uint *)&DAT_00000028;
    if (iVar4 != -1) {
      puVar5 = (uint *)(param_1 + 0x3590 + lVar11);
    }
    uVar15 = *puVar5;
    puVar5 = (uint *)&DAT_0000002c;
    if (iVar4 != -1) {
      puVar5 = (uint *)(param_1 + 0x3594 + lVar11);
    }
    uVar16 = *puVar5;
    puVar5 = (uint *)&DAT_00000020;
    if (iVar4 != -1) {
      puVar5 = (uint *)(param_1 + 0x3588 + lVar11);
    }
    uVar18 = *puVar5;
    puVar5 = (uint *)&DAT_00000024;
    if (iVar4 != -1) {
      puVar5 = (uint *)(param_1 + 0x358c + lVar11);
    }
    uVar17 = *puVar5;
  }
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_58 = 0;
  local_54 = 0x3f800000;
  local_68[2] = (float)uVar15;
  local_5c = (float)uVar16;
  FUN_18004d024(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),local_68);
  fVar19 = FUN_1800214dc(param_1,param_2,param_3,(uint)param_4);
  *(byte *)(param_1 + 0x3b18) = *(byte *)(param_1 + 0x3b18) | 1;
  FUN_18001bbb0(param_1);
  uVar10 = *(ulonglong *)(param_1 + 0x3a88);
  FUN_18001c07c(*(longlong *)(param_1 + 0x3560),5,*(longlong *)(param_1 + 0x3ac0),
                *(longlong *)(param_1 + 0x3aa8),uVar10);
  uVar7 = *(undefined8 *)(param_1 + 0x3ad0);
  uVar6 = 0;
  uVar13 = 4;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3560) + 0x31c0) + 8);
  iVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,uVar7,0,4,uVar10 & 0xffffffff00000000,local_78);
  if (-1 < iVar4) {
    uVar6 = 0;
    *local_78[0] = 0;
    local_78[0][1] = 0;
    local_78[0][2] = fVar19;
    local_78[0][3] = 0;
    local_78[0][4] = (float)uVar18;
    local_78[0][5] = 0;
    local_78[0][6] = fVar19;
    local_78[0][7] = 0;
    local_78[0][8] = 0;
    local_78[0][9] = (float)uVar17;
    local_78[0][10] = fVar19;
    local_78[0][0xb] = 0;
    local_78[0][0xc] = (float)uVar18;
    local_78[0][0xd] = (float)uVar17;
    local_78[0][0xe] = fVar19;
    local_78[0][0xf] = 0;
    uVar7 = *(undefined8 *)(param_1 + 0x3ad0);
    (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3560) + 0x31c0) + 8) + 0x78
                ))();
  }
  FUN_180031918(*(longlong *)(param_1 + 0x3560) + 0x3ae0,uVar7,uVar6,uVar13);
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x3560) + 0x31c0);
  (**(code **)(**(longlong **)(lVar11 + 8) + 0x68))(*(longlong **)(lVar11 + 8),4);
  ppuVar14 = (uint **)CONCAT71((int7)((ulonglong)lVar11 >> 8),DAT_18006c604);
  FUN_1800215bc(param_1,lVar8,lVar9,DAT_18006c604,DAT_18006c624);
  FUN_180033b5c((longlong *)(param_1 + 0x3420),lVar8,lVar9,ppuVar14);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  *(undefined4 *)(param_1 + 0x2be0) = 0x1010101;
  return;
}


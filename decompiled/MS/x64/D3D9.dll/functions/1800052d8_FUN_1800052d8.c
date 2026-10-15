/*
 * FUN_1800052d8 at 1800052d8
 * int __fastcall FUN_1800052d8(longlong param_1, uint param_2, uint param_3, uint param_4, uint * param_5, uint param_6, int param_7, uint param_8, undefined8 * param_9, uint * param_10, undefined4 * param_11)
 * Address ranges: 1800052d8-1800054fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800052d8(longlong param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint param_6
                 ,int param_7,uint param_8,undefined8 *param_9,uint *param_10,undefined4 *param_11)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_9 == (undefined8 *)0x0) {
    return -0x7789f794;
  }
  *param_9 = 0;
  iVar4 = FUN_180002a0c(*(longlong *)(param_1 + 0xe28),*(uint *)(param_1 + 0xea8),
                        *(int *)(param_1 + 0xe68),*(int *)(param_1 + 0xe88),param_8,param_6,4,
                        param_7,0);
  iVar5 = 0;
  if (iVar4 != 0x876086f) {
    iVar5 = iVar4;
  }
  if (iVar5 < 0) {
    return iVar5;
  }
  uVar9 = 0;
  uVar6 = param_3;
  if (param_3 <= param_2) {
    uVar6 = param_2;
  }
  if (uVar6 < param_4) {
    uVar6 = param_4;
  }
  for (; uVar6 != 0; uVar6 = uVar6 >> 1) {
    uVar9 = uVar9 + 1;
  }
  uVar6 = *param_5;
  if (*param_5 == 0) {
    *param_5 = uVar9;
    uVar6 = uVar9;
  }
  iVar5 = param_7;
  uVar8 = FUN_180002844(param_7);
  uVar11 = (uint)uVar8;
  uVar8 = FUN_1800028a0(iVar5);
  uVar10 = (uint)uVar8;
  uVar8 = FUN_1800026c0(iVar5);
  if ((((param_2 & uVar11 - 1) == 0) || (param_2 < uVar11)) &&
     (((param_3 & uVar10 - 1) == 0 || (param_3 < uVar10)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_3 == 0) {
    return -0x7789f794;
  }
  if (param_4 == 0) {
    return -0x7789f794;
  }
  bVar3 = FUN_1800038e8(*(longlong *)(param_1 + 0xe28),*(int *)(param_1 + 0xe68),3,param_2,param_3,
                        param_4);
  if (!bVar3) {
    return -0x7789f794;
  }
  if ((!bVar1) && (0 < (int)uVar8)) {
    return -0x7789f794;
  }
  if (uVar9 < uVar6) {
    return -0x7789f794;
  }
  iVar5 = 0;
  *param_10 = 0;
  if (param_8 == 0) {
    iVar2 = iVar5;
    if (*(int *)(param_1 + 0xe68) == 1) {
      uVar9 = FUN_180018aa4(param_2,param_3,param_4,uVar6,param_7);
      uVar6 = *(uint *)(param_1 + 0xea8);
      *param_10 = uVar9;
      iVar2 = 0;
      if (*(ulonglong *)(&DAT_180112b00 + (ulonglong)uVar6 * 600) < (ulonglong)uVar9) {
        iVar2 = -0x7789fe84;
      }
    }
  }
  else {
    iVar2 = 0;
    if (param_8 == 3) {
      uVar7 = 0x2a;
      goto LAB_1800054d3;
    }
  }
  iVar5 = iVar2;
  uVar7 = FUN_18000223c(param_7);
LAB_1800054d3:
  *param_11 = uVar7;
  if (-1 < iVar5) {
    iVar5 = iVar4;
  }
  return iVar5;
}


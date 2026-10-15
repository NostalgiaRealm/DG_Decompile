/*
 * FUN_1800186f0 at 1800186f0
 * undefined8 __fastcall FUN_1800186f0(longlong param_1, uint * param_2, int * param_3, uint param_4)
 * Address ranges: 1800186f0-18001895a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800186f0(longlong param_1,uint *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_80 [4];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50 [6];
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0xbd) == '\0') {
    return 0x8876086c;
  }
  if (*(char *)(param_1 + 0xbe) != '\0' || (param_4 & 0xffff17ef) != 0) {
    return 0x8876086c;
  }
  if (((param_4 >> 0xd & 1) != 0) && (*(char *)(param_1 + 0xbc) == '\0')) {
    return 0x8876086c;
  }
  local_80[3] = *(int *)(param_1 + 0xa8);
  local_70 = *(int *)(param_1 + 0xac);
  local_6c = *(int *)(param_1 + 0xb0);
  local_80[0] = 0;
  local_80[1] = 0;
  iVar7 = 0;
  local_80[2] = 0;
  iVar2 = local_80[3];
  iVar10 = local_70;
  iVar5 = local_6c;
  iVar11 = iVar7;
  iVar12 = iVar7;
  if (param_3 != (int *)0x0) {
    iVar7 = *param_3;
    iVar2 = param_3[2];
    iVar10 = param_3[3];
    iVar5 = param_3[5];
    iVar11 = param_3[1];
    iVar12 = param_3[4];
  }
  local_68 = iVar7;
  local_64 = iVar11;
  local_60 = iVar12;
  local_5c = iVar2;
  local_58 = iVar10;
  local_54 = iVar5;
  piVar3 = FUN_180018580(&local_68,local_50,local_80);
  if (*piVar3 != iVar7) {
    return 0x8876086c;
  }
  if (piVar3[1] != iVar11) {
    return 0x8876086c;
  }
  if (piVar3[2] != iVar12) {
    return 0x8876086c;
  }
  if (piVar3[3] != iVar2) {
    return 0x8876086c;
  }
  if ((int)*(undefined8 *)(piVar3 + 4) != iVar10) {
    return 0x8876086c;
  }
  if ((int)((ulonglong)*(undefined8 *)(piVar3 + 4) >> 0x20) != iVar5) {
    return 0x8876086c;
  }
  if (*(int *)(param_1 + 0xa4) == 3) {
    lVar9 = *(longlong *)(param_1 + 0x90);
  }
  else {
    if ((*(char *)(*(longlong *)(param_1 + 0x80) + 0x6819) != '\0') &&
       (*(int *)(param_1 + 0xa4) == 0)) {
      return 0x8876086c;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 0x80004005;
    }
    FUN_180031c40(param_1);
    lVar9 = *(longlong *)(param_1 + 0x28);
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar8 = *(uint *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar6 = (longlong)(int)((uint)*(byte *)(param_1 + 0x26) * iVar7) + (ulonglong)(iVar12 * uVar1);
    uVar4 = (ulonglong)(iVar11 * uVar8);
  }
  else {
    uVar6 = (ulonglong)(((int)((iVar11 >> 0x1f & 3U) + iVar11) >> 2) * uVar8);
    uVar4 = (ulonglong)(iVar12 * uVar1) +
            (ulonglong)(uint)(((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) * *(int *)(param_1 + 0x20))
    ;
  }
  *(ulonglong *)(param_2 + 2) = uVar6 + uVar4 + lVar9;
  *param_2 = uVar8;
  param_2[1] = uVar1;
  if (*(int *)(param_1 + 0x98) == 0x31495441) {
    uVar8 = uVar8 >> 1;
    param_2[1] = uVar1 * 2;
  }
  else {
    if (*(int *)(param_1 + 0x98) != 0x32495441) goto LAB_180018921;
    uVar8 = uVar8 >> 2;
  }
  *param_2 = uVar8;
LAB_180018921:
  FUN_180018f10(*(longlong *)(param_1 + 0x88),*(int *)(param_1 + 0xb4),param_3);
  *(undefined1 *)(param_1 + 0xbe) = 1;
  return 0;
}


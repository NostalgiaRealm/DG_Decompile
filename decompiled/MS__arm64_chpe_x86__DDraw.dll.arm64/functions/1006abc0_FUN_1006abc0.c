/*
 * FUN_1006abc0 at 1006abc0
 * undefined FUN_1006abc0(void)
 * Address ranges: 1006abc0-1006af1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006abc0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  code *extraout_w11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  param_1 = param_1 + param_2 * 0x1510;
  uVar13 = 0;
  piVar1 = (int *)(param_1 + 0x834);
  puVar2 = (uint *)(param_1 + 0x83c);
  uVar14 = *puVar2;
  uVar15 = 0x20;
  if (param_3[0x1a] == 0) {
    uVar15 = 0;
  }
  uVar12 = 0x10;
  if (param_3[0x12] == 0) {
    uVar12 = 0;
  }
  uVar4 = 8;
  if (param_3[10] == 0) {
    uVar4 = 0;
  }
  uVar5 = 4;
  if (param_3[2] == 0) {
    uVar5 = 0;
  }
  uVar6 = 2;
  if (param_3[1] == 0) {
    uVar6 = 0;
  }
  uVar15 = (ulonglong)
           (param_3[3] & 0x1fU |
           (param_3[4] & 0x1fU |
           (param_3[5] & 7U | (param_3[6] & 0x1fU | (param_3[7] & 0x1fU) << 5) << 3) << 5) << 5) <<
           6 | ((ulonglong)(uint)param_3[8] & 7 |
               ((ulonglong)*(byte *)(param_3 + 9) & 0xffffffffffff000f |
               ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
               ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
               ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 5) << 0x1d | uVar15
           | uVar12 | uVar4 | uVar5 | uVar6 | (ulonglong)(*param_3 != 0);
  if (uVar14 != 0) {
    uVar11 = 0;
    uVar10 = uVar14;
    do {
      uVar13 = uVar10 + uVar11 >> 1;
      uVar12 = *(ulonglong *)(*piVar1 + uVar13 * 0x118);
      uVar7 = uVar13;
      if (uVar12 <= uVar15) {
        if (uVar15 <= uVar12) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar11;
        uVar7 = uVar10;
      }
      uVar10 = uVar7;
    } while (uVar10 != uVar11);
    if ((uVar13 != uVar14) && (iVar8 = uVar13 * 0x118, *(ulonglong *)(iVar8 + *piVar1) == uVar15))
    goto LAB_1006ae88;
  }
  puVar3 = (uint *)(param_1 + 0x838);
  if (uVar14 == *puVar3) {
    uVar12 = (ulonglong)(*puVar3 << 1) * 0x118;
    uVar9 = (undefined4)uVar12;
    if (uVar12 >> 0x20 != 0) {
      uVar9 = 0xffffffff;
    }
    iVar8 = FUN_100914b0(uVar9);
    if (iVar8 != 0) {
      if (*puVar3 != 0) {
        uVar14 = 0;
        do {
          FUN_100917a0(iVar8 + uVar14 * 0x118,*piVar1 + uVar14 * 0x118,0x118);
          uVar14 = uVar14 + 1;
        } while (uVar14 < *puVar3);
      }
      FUN_100914d0(*piVar1);
      *piVar1 = iVar8;
      *puVar3 = *puVar3 << 1;
    }
  }
  for (uVar14 = *puVar2; uVar13 < uVar14; uVar14 = uVar14 - 1) {
    iVar8 = *piVar1 + uVar14 * 0x118;
    FUN_100917a0(iVar8,iVar8 + -0x118,0x118);
  }
  iVar8 = uVar13 * 0x118;
  *(ulonglong *)(iVar8 + *piVar1) = uVar15;
  FUN_100917a0(iVar8 + *piVar1 + 8,param_3,0x108);
  uVar9 = FUN_1006ab00(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x844),param_3);
  *(undefined4 *)(iVar8 + *piVar1 + 0x110) = uVar9;
  *puVar2 = *puVar2 + 1;
LAB_1006ae88:
  iVar8 = *(int *)(iVar8 + *piVar1 + 0x110);
  if ((iVar8 != *(int *)(param_1 + 0x530)) || (*(int *)(param_1 + 0x53c) != -1)) {
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar9,iVar8,0,0xffffffff);
    *(int *)(param_1 + 0x530) = iVar8;
    *(undefined4 *)(param_1 + 0x53c) = 0xffffffff;
  }
  return;
}


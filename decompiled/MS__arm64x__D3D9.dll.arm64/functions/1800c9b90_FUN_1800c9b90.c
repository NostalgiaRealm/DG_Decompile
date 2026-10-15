/*
 * FUN_1800c9b90 at 1800c9b90
 * undefined FUN_1800c9b90(void)
 * Address ranges: 1800c9b90-1800c9e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c9b90(longlong param_1,uint *param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  
  if (((*(uint *)(*(longlong *)(param_1 + -0x40) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar3 == 0) {
      FUN_180003398();
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar17 = 0x8876086c;
  if (((*(char *)(param_1 + -3) != '\0') &&
      (*(char *)(param_1 + -2) == '\0' && (param_4 & 0xffff17ef) == 0)) &&
     (((param_4 >> 0xd & 1) == 0 || (*(char *)(param_1 + -4) != '\0')))) {
    uVar8 = *(uint *)(param_1 + -0x18);
    uVar10 = *(uint *)(param_1 + -0x14);
    uVar11 = *(uint *)(param_1 + -0x10);
    if (param_3 == (uint *)0x0) {
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar12 = uVar8;
      uVar13 = uVar10;
      uVar2 = uVar11;
    }
    else {
      uVar16 = param_3[4];
      uVar14 = *param_3;
      uVar15 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      uVar2 = param_3[5];
    }
    if ((((((int)uVar14 < (int)uVar12 && (int)uVar15 < (int)uVar13) && (int)uVar16 < (int)uVar2) &&
         0 < (int)uVar8) && 0 < (int)uVar10) && 0 < (int)uVar11) {
      if ((int)uVar2 <= (int)uVar11) {
        uVar11 = uVar2;
      }
      if ((int)uVar13 <= (int)uVar10) {
        uVar10 = uVar13;
      }
      uVar4 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
      uVar5 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
      if ((int)uVar12 <= (int)uVar8) {
        uVar8 = uVar12;
      }
      uVar6 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
    }
    if (((((uVar4 == uVar14 && uVar5 == uVar15) && uVar6 == uVar16) && uVar8 == uVar12) &&
        uVar10 == uVar13) && uVar11 == uVar2) {
      if (*(int *)(param_1 + -0x1c) == 3) {
        lVar7 = *(longlong *)(param_1 + -0x30);
      }
      else {
        if ((*(char *)(*(longlong *)(param_1 + -0x40) + 0x6819) != '\0') &&
           (*(int *)(param_1 + -0x1c) == 0)) goto LAB_1800c9dd8;
        if (*(longlong *)(param_1 + -0x98) == 0) {
          uVar17 = 0x80004005;
          goto LAB_1800c9dd8;
        }
        FUN_180023780(param_1 + -0xc0);
        lVar7 = *(longlong *)(param_1 + -0x98);
      }
      uVar11 = *(uint *)(param_1 + -0xa8);
      uVar10 = *(uint *)(param_1 + -0xa4);
      if (*(int *)(param_1 + -0xa0) == 0) {
        lVar9 = (longlong)(int)(*(byte *)(param_1 + -0x9a) * uVar14) + (ulonglong)(uVar16 * uVar10)
                + (ulonglong)(uVar15 * uVar11);
      }
      else {
        lVar9 = (ulonglong)(((int)(uVar15 + ((uint)((int)uVar15 >> 1) >> 0x1e)) >> 2) * uVar11) +
                (ulonglong)
                (uint)(((int)(uVar14 + ((uint)((int)uVar14 >> 1) >> 0x1e)) >> 2) *
                      *(int *)(param_1 + -0xa0)) + (ulonglong)(uVar16 * uVar10);
      }
      *(longlong *)(param_2 + 2) = lVar9 + lVar7;
      *param_2 = uVar11;
      param_2[1] = uVar10;
      if (*(int *)(param_1 + -0x28) == 0x31495441) {
        *param_2 = uVar11 >> 1;
        param_2[1] = uVar10 << 1;
      }
      else if (*(int *)(param_1 + -0x28) == 0x32495441) {
        *param_2 = uVar11 >> 2;
      }
      FUN_18000f388(*(undefined8 *)(param_1 + -0x38),*(undefined4 *)(param_1 + -0xc),param_3);
      *(undefined1 *)(param_1 + -2) = 1;
      uVar17 = 0;
    }
  }
LAB_1800c9dd8:
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar17;
}


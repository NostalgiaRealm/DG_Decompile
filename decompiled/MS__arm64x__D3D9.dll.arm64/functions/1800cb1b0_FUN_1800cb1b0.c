/*
 * FUN_1800cb1b0 at 1800cb1b0
 * undefined FUN_1800cb1b0(void)
 * Address ranges: 1800cb1b0-1800cb46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800cb1b0(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  
  if (*(char *)(param_1 + -0x10) == '\0') {
    return 0x8876086c;
  }
  if (*(ushort *)(param_1 + -0xdc) <= param_2) {
    return 0x8876086c;
  }
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x100) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x100) + -0x59c0);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar4 == 0) {
      FUN_180003398();
    }
  }
  uVar19 = 0x8876086c;
  lVar18 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0xd8);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (((*(char *)(lVar18 + 0xbd) != '\0') &&
      (*(char *)(lVar18 + 0xbe) == '\0' && (param_5 & 0xffff17ef) == 0)) &&
     (((param_5 >> 0xd & 1) == 0 || (*(char *)(lVar18 + 0xbc) != '\0')))) {
    uVar9 = *(uint *)(lVar18 + 0xa8);
    uVar11 = *(uint *)(lVar18 + 0xac);
    uVar12 = *(uint *)(lVar18 + 0xb0);
    if (param_4 == (uint *)0x0) {
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar13 = uVar9;
      uVar14 = uVar11;
      uVar3 = uVar12;
    }
    else {
      uVar17 = param_4[4];
      uVar15 = *param_4;
      uVar16 = param_4[1];
      uVar13 = param_4[2];
      uVar14 = param_4[3];
      uVar3 = param_4[5];
    }
    if ((((((int)uVar15 < (int)uVar13 && (int)uVar16 < (int)uVar14) && (int)uVar17 < (int)uVar3) &&
         0 < (int)uVar9) && 0 < (int)uVar11) && 0 < (int)uVar12) {
      if ((int)uVar3 <= (int)uVar12) {
        uVar12 = uVar3;
      }
      if ((int)uVar14 <= (int)uVar11) {
        uVar11 = uVar14;
      }
      uVar5 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
      uVar6 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
      if ((int)uVar13 <= (int)uVar9) {
        uVar9 = uVar13;
      }
      uVar7 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
    }
    if (((((uVar5 == uVar15 && uVar6 == uVar16) && uVar7 == uVar17) && uVar9 == uVar13) &&
        uVar11 == uVar14) && uVar12 == uVar3) {
      if (*(int *)(lVar18 + 0xa4) == 3) {
        lVar8 = *(longlong *)(lVar18 + 0x90);
      }
      else {
        if ((*(char *)(*(longlong *)(lVar18 + 0x80) + 0x6819) != '\0') &&
           (*(int *)(lVar18 + 0xa4) == 0)) goto LAB_1800cb430;
        if (*(longlong *)(lVar18 + 0x28) == 0) {
          uVar19 = 0x80004005;
          goto LAB_1800cb430;
        }
        FUN_180023780(lVar18);
        lVar8 = *(longlong *)(lVar18 + 0x28);
      }
      uVar12 = *(uint *)(lVar18 + 0x18);
      uVar11 = *(uint *)(lVar18 + 0x1c);
      if (*(int *)(lVar18 + 0x20) == 0) {
        lVar10 = (longlong)(int)(*(byte *)(lVar18 + 0x26) * uVar15) + (ulonglong)(uVar17 * uVar11) +
                 (ulonglong)(uVar16 * uVar12);
      }
      else {
        lVar10 = (ulonglong)(((int)(uVar16 + ((uint)((int)uVar16 >> 1) >> 0x1e)) >> 2) * uVar12) +
                 (ulonglong)
                 (uint)(((int)(uVar15 + ((uint)((int)uVar15 >> 1) >> 0x1e)) >> 2) *
                       *(int *)(lVar18 + 0x20)) + (ulonglong)(uVar17 * uVar11);
      }
      *(longlong *)(param_3 + 2) = lVar10 + lVar8;
      *param_3 = uVar12;
      param_3[1] = uVar11;
      if (*(int *)(lVar18 + 0x98) == 0x31495441) {
        *param_3 = uVar12 >> 1;
        param_3[1] = uVar11 << 1;
      }
      else if (*(int *)(lVar18 + 0x98) == 0x32495441) {
        *param_3 = uVar12 >> 2;
      }
      FUN_18000f388(*(undefined8 *)(lVar18 + 0x88),*(undefined4 *)(lVar18 + 0xb4),param_4);
      *(undefined1 *)(lVar18 + 0xbe) = 1;
      uVar19 = 0;
    }
  }
LAB_1800cb430:
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar19;
}


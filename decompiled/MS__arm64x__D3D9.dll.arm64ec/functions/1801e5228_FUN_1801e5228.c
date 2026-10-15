/*
 * FUN_1801e5228 at 1801e5228
 * undefined FUN_1801e5228(void)
 * Address ranges: 1801e5228-1801e54ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e5228(longlong param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  
  if (((*(uint *)(*(longlong *)(param_1 + -0x40) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar5 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar5 == 0) {
      FUN_1801085c8();
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar16 = 0x8876086c;
  if (((*(char *)(param_1 + -3) != '\0') &&
      (*(char *)(param_1 + -2) == '\0' && (param_4 & 0xffff17ef) == 0)) &&
     (((param_4 >> 0xd & 1) == 0 || (*(char *)(param_1 + -4) != '\0')))) {
    uVar9 = *(uint *)(param_1 + -0x18);
    uVar11 = *(uint *)(param_1 + -0x14);
    uVar13 = *(uint *)(param_1 + -0x10);
    if (param_3 == (uint *)0x0) {
      uVar15 = 0;
      uVar14 = 0;
      uVar17 = 0;
      uVar4 = uVar13;
      uVar2 = uVar11;
      uVar1 = uVar9;
    }
    else {
      uVar15 = param_3[4];
      uVar17 = *param_3;
      uVar14 = param_3[1];
      uVar4 = param_3[5];
      uVar2 = param_3[3];
      uVar1 = param_3[2];
    }
    if ((((((int)uVar17 < (int)uVar1 && (int)uVar14 < (int)uVar2) && (int)uVar15 < (int)uVar4) &&
         0 < (int)uVar9) && 0 < (int)uVar11) && 0 < (int)uVar13) {
      if ((int)uVar4 <= (int)uVar13) {
        uVar13 = uVar4;
      }
      if ((int)uVar2 <= (int)uVar11) {
        uVar11 = uVar2;
      }
      uVar6 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
      uVar7 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
      if ((int)uVar1 <= (int)uVar9) {
        uVar9 = uVar1;
      }
      uVar8 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar13 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
    }
    if (((((uVar6 == uVar17 && uVar7 == uVar14) && uVar8 == uVar15) && uVar9 == uVar1) &&
        uVar11 == uVar2) && uVar13 == uVar4) {
      if (*(int *)(param_1 + -0x1c) == 3) {
        lVar10 = *(longlong *)(param_1 + -0x30);
      }
      else {
        if ((*(char *)(*(longlong *)(param_1 + -0x40) + 0x6819) != '\0') &&
           (*(int *)(param_1 + -0x1c) == 0)) goto LAB_1801e5470;
        if (*(longlong *)(param_1 + -0x98) == 0) {
          uVar16 = 0x80004005;
          goto LAB_1801e5470;
        }
        FUN_18012ff70(param_1 + -0xc0);
        lVar10 = *(longlong *)(param_1 + -0x98);
      }
      uVar13 = *(uint *)(param_1 + -0xa8);
      uVar11 = *(uint *)(param_1 + -0xa4);
      uVar15 = uVar15 * uVar11;
      if (*(int *)(param_1 + -0xa0) == 0) {
        lVar12 = (longlong)(int)(*(byte *)(param_1 + -0x9a) * uVar17) + (ulonglong)uVar15;
        uVar15 = uVar14 * uVar13;
      }
      else {
        lVar12 = (ulonglong)(((int)(uVar14 + ((uint)((int)uVar14 >> 1) >> 0x1e)) >> 2) * uVar13) +
                 (ulonglong)
                 (uint)(((int)(uVar17 + ((uint)((int)uVar17 >> 1) >> 0x1e)) >> 2) *
                       *(int *)(param_1 + -0xa0));
      }
      *(ulonglong *)(param_2 + 2) = lVar12 + (ulonglong)uVar15 + lVar10;
      *param_2 = uVar13;
      param_2[1] = uVar11;
      if (*(int *)(param_1 + -0x28) == 0x31495441) {
        *param_2 = uVar13 >> 1;
        param_2[1] = uVar11 << 1;
      }
      else if (*(int *)(param_1 + -0x28) == 0x32495441) {
        *param_2 = uVar13 >> 2;
      }
      FUN_18011ad88(*(undefined8 *)(param_1 + -0x38),*(undefined4 *)(param_1 + -0xc),param_3);
      *(undefined1 *)(param_1 + -2) = 1;
      uVar16 = 0;
    }
  }
LAB_1801e5470:
  if (bVar3) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar16;
}


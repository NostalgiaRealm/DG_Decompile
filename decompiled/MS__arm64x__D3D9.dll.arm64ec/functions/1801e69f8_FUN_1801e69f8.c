/*
 * FUN_1801e69f8 at 1801e69f8
 * undefined FUN_1801e69f8(void)
 * Address ranges: 1801e69f8-1801e6cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e69f8(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
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
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar4 = true;
    iVar6 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar6 == 0) {
      FUN_1801085c8();
    }
  }
  uVar19 = 0x8876086c;
  lVar15 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0xd8);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (((*(char *)(lVar15 + 0xbd) != '\0') &&
      (*(char *)(lVar15 + 0xbe) == '\0' && (param_5 & 0xffff17ef) == 0)) &&
     (((param_5 >> 0xd & 1) == 0 || (*(char *)(lVar15 + 0xbc) != '\0')))) {
    uVar10 = *(uint *)(lVar15 + 0xa8);
    uVar12 = *(uint *)(lVar15 + 0xac);
    uVar14 = *(uint *)(lVar15 + 0xb0);
    if (param_4 == (uint *)0x0) {
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar5 = uVar14;
      uVar3 = uVar12;
      uVar2 = uVar10;
    }
    else {
      uVar18 = param_4[4];
      uVar16 = *param_4;
      uVar17 = param_4[1];
      uVar5 = param_4[5];
      uVar3 = param_4[3];
      uVar2 = param_4[2];
    }
    if ((((((int)uVar16 < (int)uVar2 && (int)uVar17 < (int)uVar3) && (int)uVar18 < (int)uVar5) &&
         0 < (int)uVar10) && 0 < (int)uVar12) && 0 < (int)uVar14) {
      if ((int)uVar5 <= (int)uVar14) {
        uVar14 = uVar5;
      }
      if ((int)uVar3 <= (int)uVar12) {
        uVar12 = uVar3;
      }
      uVar7 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
      uVar8 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
      if ((int)uVar2 <= (int)uVar10) {
        uVar10 = uVar2;
      }
      uVar9 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar14 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
    }
    if (((((uVar7 == uVar16 && uVar8 == uVar17) && uVar9 == uVar18) && uVar10 == uVar2) &&
        uVar12 == uVar3) && uVar14 == uVar5) {
      if (*(int *)(lVar15 + 0xa4) == 3) {
        lVar11 = *(longlong *)(lVar15 + 0x90);
      }
      else {
        if ((*(char *)(*(longlong *)(lVar15 + 0x80) + 0x6819) != '\0') &&
           (*(int *)(lVar15 + 0xa4) == 0)) goto LAB_1801e6c78;
        if (*(longlong *)(lVar15 + 0x28) == 0) {
          uVar19 = 0x80004005;
          goto LAB_1801e6c78;
        }
        FUN_18012ff70(lVar15);
        lVar11 = *(longlong *)(lVar15 + 0x28);
      }
      uVar14 = *(uint *)(lVar15 + 0x18);
      uVar12 = *(uint *)(lVar15 + 0x1c);
      uVar18 = uVar18 * uVar12;
      if (*(int *)(lVar15 + 0x20) == 0) {
        lVar13 = (longlong)(int)(*(byte *)(lVar15 + 0x26) * uVar16) + (ulonglong)uVar18;
        uVar18 = uVar17 * uVar14;
      }
      else {
        lVar13 = (ulonglong)(((int)(uVar17 + ((uint)((int)uVar17 >> 1) >> 0x1e)) >> 2) * uVar14) +
                 (ulonglong)
                 (uint)(((int)(uVar16 + ((uint)((int)uVar16 >> 1) >> 0x1e)) >> 2) *
                       *(int *)(lVar15 + 0x20));
      }
      *(ulonglong *)(param_3 + 2) = lVar13 + (ulonglong)uVar18 + lVar11;
      *param_3 = uVar14;
      param_3[1] = uVar12;
      if (*(int *)(lVar15 + 0x98) == 0x31495441) {
        *param_3 = uVar14 >> 1;
        param_3[1] = uVar12 << 1;
      }
      else if (*(int *)(lVar15 + 0x98) == 0x32495441) {
        *param_3 = uVar14 >> 2;
      }
      FUN_18011ad88(*(undefined8 *)(lVar15 + 0x88),*(undefined4 *)(lVar15 + 0xb4),param_4);
      *(undefined1 *)(lVar15 + 0xbe) = 1;
      uVar19 = 0;
    }
  }
LAB_1801e6c78:
  if (bVar4) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar19;
}


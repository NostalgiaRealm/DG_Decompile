/*
 * FUN_100bbe30 at 100bbe30
 * undefined FUN_100bbe30(void)
 * Address ranges: 100bbe30-100bc467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bbe30(int param_1,char param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 extraout_w13;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [16];
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar12 = *(int *)(param_1 + 0x1c);
  if (10 < iVar12 - 0x15U) {
    uVar15 = 7;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar15 = 5;
    }
    if (((uVar15 < *(uint *)(&DAT_10162c20 + iVar12 * 4)) || (*(int *)(param_1 + 0x28) != 0)) &&
       (2 < *(int *)(param_1 + 0x34) - 3U)) {
      puVar1 = (uint *)(param_1 + 0x24);
      uVar15 = *puVar1;
      if (*(int *)(param_1 + 0xfc) == 0) {
        uVar16 = 0x1f;
        if (*(char *)(iVar12 + 0x10162838) == '\0') {
          uVar16 = 0x1c;
        }
        uVar14 = (ulonglong)uVar16;
        if (uVar15 != 1) {
          FUN_100cebc8(param_1);
        }
        uVar9 = FUN_100cebc8(param_1);
        FUN_100bace8(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                     uVar9,uVar15,1,0x1b,uVar14 & 0xffffffff,extraout_w13);
        FUN_100bcd40(param_1);
      }
      if ((param_2 != '\0') || (*(char *)(param_1 + 0x3d) == '\x01')) {
        FUN_100bb5c0(param_1 + 0xf0,uVar15 != 1,0);
      }
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      iVar12 = 0x108;
      if (param_2 != '\0') {
        iVar12 = 0x114;
      }
      iVar12 = *(int *)(iVar12 + param_1);
      if (*(int *)(param_1 + 0xfc) == 0) {
        return iVar12;
      }
      puVar2 = (uint *)(param_1 + 0x20);
      uVar17 = 0;
      uVar16 = 0;
      uVar13 = 0;
      if (*puVar1 != 0) {
        do {
          uVar13 = 0;
          if (*puVar2 != 0) {
            piVar3 = (int *)(param_1 + 0x104);
            do {
              (*pcVar7)();
              cVar8 = (*extraout_w11)(param_1,uVar13,uVar16,1);
              if (cVar8 != '\0') {
                uVar17 = 1 << (ulonglong)(uVar16 & 0x1f) | uVar17;
              }
              iVar10 = FUN_100cebc8(param_1);
              iVar10 = uVar13 + iVar10 * uVar16;
              if (*(char *)(param_1 + 0x12d) != '\0') {
                uVar5 = *(uint *)(param_1 + 0x18) >> (ulonglong)(uVar13 & 0x1f);
                if (uVar5 == 0) {
                  uVar5 = 1;
                }
                uVar6 = *(uint *)(param_1 + 0x14) >> (ulonglong)(uVar13 & 0x1f);
                if (uVar6 == 0) {
                  uVar6 = 1;
                }
                (*(code *)PTR_FUN_1016c26c)(*piVar3 + iVar10 * 0x20 + 0x10,0,0,uVar6,uVar5);
              }
              iVar11 = (*(code *)PTR_FUN_1016c210)(*piVar3 + iVar10 * 0x20 + 0x10);
              if (iVar11 == 0) {
                iVar4 = *(int *)(param_1 + 0x2c);
                FUN_10112730(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15d8),auStack_54,
                             *(undefined4 *)(param_1 + 0x60),0);
                FUN_10112730(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15dc),auStack_50,
                             *(undefined4 *)(param_1 + 0x10c),iVar10);
                iVar11 = *piVar3 + iVar10 * 0x20;
                FUN_100b6ce0(*(undefined4 *)(param_1 + 0xe0),*(int *)(param_1 + 0x1c),uVar13,uVar16,
                             uVar13 + iVar4 * uVar16,iVar10,*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar11 + 0x14));
                (*(code *)PTR_FUN_1016c270)(*piVar3 + iVar10 * 0x20 + 0x10);
                uVar17 = 1 << (ulonglong)(uVar16 & 0x1f) | uVar17;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *puVar2);
          }
          uVar16 = uVar16 + 1;
          uVar13 = *puVar1;
        } while (uVar16 < uVar13);
      }
      *(undefined1 *)(param_1 + 0x12d) = 0;
      if (*(char *)(param_1 + 0x3d) == '\x01') {
        FUN_100bb370(param_1 + 0x48,*puVar2,uVar13);
        *(char *)(param_1 + 0x3d) = '\x02';
      }
      if (uVar17 == 0) {
        return iVar12;
      }
      auVar18 = FUN_100cebc8(param_1,param_1 + 0xf0);
      FUN_100bd8c0(param_1,auVar18._8_8_,uVar17,*(undefined4 *)(param_1 + 0x108),uVar15 != 1,
                   auVar18._0_8_ & 0xffffffff);
      return iVar12;
    }
  }
  uVar16 = 0;
  uVar15 = 0;
  uVar13 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    do {
      iVar12 = *(int *)(param_1 + 0x104);
      if ((iVar12 != 0) || (iVar12 = *(int *)(param_1 + 0x5c), iVar12 != 0)) {
        iVar12 = (*(code *)PTR_FUN_1016c210)
                           (iVar12 + *(int *)(param_1 + 0x2c) * uVar15 * 0x20 + 0x10);
        if (iVar12 == 0) {
          uVar16 = 1 << (ulonglong)(uVar15 & 0x1f) | uVar16;
        }
      }
      uVar13 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        do {
          (*pcVar7)();
          cVar8 = (*extraout_w11_00)(param_1,uVar13,uVar15,1);
          uVar13 = uVar13 + 1;
          if (cVar8 != '\0') {
            uVar16 = 1 << (ulonglong)(uVar15 & 0x1f) | uVar16;
          }
        } while (uVar13 < *(uint *)(param_1 + 0x20));
      }
      uVar15 = uVar15 + 1;
      uVar13 = *(uint *)(param_1 + 0x24);
    } while (uVar15 < uVar13);
  }
  iVar12 = *(int *)(param_1 + 0x108);
  if (param_2 == '\0') {
    if (iVar12 != -1) goto LAB_100bc420;
    piVar3 = (int *)(param_1 + 0x60);
  }
  else {
    if (iVar12 == -1) {
      iVar12 = 0x48;
      iVar10 = 0x6c;
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x54);
      iVar10 = 0x114;
      iVar12 = 0xf0;
    }
    FUN_100bb5c0(param_1 + iVar12,uVar13 != 1,uVar9);
    piVar3 = (int *)(iVar10 + param_1);
  }
  iVar12 = *piVar3;
LAB_100bc420:
  if (uVar16 != 0) {
    FUN_100bd8c0(param_1,param_1 + 0x48,uVar16,*(undefined4 *)(param_1 + 0x60),0,0);
  }
  return iVar12;
}


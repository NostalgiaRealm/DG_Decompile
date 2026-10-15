/*
 * FUN_100abdb0 at 100abdb0
 * undefined FUN_100abdb0(void)
 * Address ranges: 100abdb0-100ac37f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100abdb0(int param_1,byte param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar14;
  uint uVar15;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar10 = *(int *)(param_1 + 0x1c);
  if (10 < iVar10 - 0x15U) {
    uVar13 = 7;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar13 = 5;
    }
    if (((uVar13 < *(uint *)(&DAT_10162c20 + iVar10 * 4)) || (*(int *)(param_1 + 0x28) != 0)) &&
       (2 < *(int *)(param_1 + 0x34) - 3U)) {
      puVar1 = (uint *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0xb8) == 0) {
        uVar11 = (ulonglong)*puVar1;
        uVar7 = FUN_100cebc8(param_1);
        FUN_100ab158(param_1 + 0xac,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                     uVar7,uVar11 & 0xffffffff,1,0x1b);
        FUN_100aca40(param_1);
      }
      if ((param_2 != 0) || (*(char *)(param_1 + 0x3d) == '\x01')) {
        FUN_100ab780(param_1 + 0xac,0);
      }
      pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      iVar10 = *(int *)(param_1 + (uint)param_2 * 8 + 0xc0);
      if (*(int *)(param_1 + 0xb8) == 0) {
        return iVar10;
      }
      uVar15 = 0;
      uVar13 = 0;
      puVar2 = (uint *)(param_1 + 0x20);
      if (*puVar1 != 0) {
        do {
          uVar14 = 0;
          if (*puVar2 != 0) {
            piVar3 = (int *)(param_1 + 0xc4);
            do {
              (*pcVar5)();
              cVar6 = (*extraout_w11)(param_1,uVar14,uVar13,1);
              if (cVar6 != '\0') {
                uVar15 = 1 << (ulonglong)(uVar13 & 0x1f) | uVar15;
              }
              iVar8 = FUN_100cebc8(param_1);
              iVar8 = uVar14 + iVar8 * uVar13;
              if (*(char *)(param_1 + 0xd9) != '\0') {
                uVar12 = *(uint *)(param_1 + 0x18) >> (ulonglong)(uVar14 & 0x1f);
                if (uVar12 == 0) {
                  uVar12 = 1;
                }
                uVar4 = *(uint *)(param_1 + 0x14) >> (ulonglong)(uVar14 & 0x1f);
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                (*(code *)PTR_FUN_1016c26c)(*piVar3 + iVar8 * 0x1c + 0xc,0,0,uVar4,uVar12);
              }
              iVar9 = (*(code *)PTR_FUN_1016c210)(*piVar3 + iVar8 * 0x1c + 0xc);
              if (iVar9 == 0) {
                iVar9 = *piVar3 + iVar8 * 0x1c;
                FUN_100aa5b0(*(undefined4 *)(param_1 + 0xa8),*(int *)(param_1 + 0x1c),uVar14,uVar13,
                             *(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar9 + 0xc),
                             *(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(iVar9 + 0x14),
                             *(undefined4 *)(iVar9 + 0x18));
                (*(code *)PTR_FUN_1016c270)(*piVar3 + iVar8 * 0x1c + 0xc);
                iVar8 = *(int *)(param_1 + 0xc0);
                iVar9 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x1510;
                uVar12 = 0;
                do {
                  if (iVar8 == *(int *)(iVar9 + 0x604 + uVar12 * 4)) {
                    *(undefined4 *)(iVar9 + uVar12 * 4 + 0x604) = 0;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < 0x40);
                uVar15 = 1 << (ulonglong)(uVar13 & 0x1f) | uVar15;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *puVar2);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *puVar1);
      }
      *(undefined1 *)(param_1 + 0xd9) = 0;
      if (*(char *)(param_1 + 0x3d) == '\x01') {
        FUN_100ab520(param_1 + 0x48,*puVar2,*puVar1);
        *(char *)(param_1 + 0x3d) = '\x02';
      }
      if (uVar15 == 0) {
        return iVar10;
      }
      uVar7 = FUN_100cebc8(param_1);
      iVar8 = 0x48;
      if (*(int *)(param_1 + 0xc0) != 0) {
        iVar8 = 0xac;
      }
      FUN_100ad578(param_1,iVar8 + param_1,0,uVar15,uVar7);
      return iVar10;
    }
  }
  uVar15 = 0;
  uVar13 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    do {
      iVar10 = *(int *)(param_1 + 0xc4);
      if ((iVar10 != 0) || (iVar10 = *(int *)(param_1 + 0x60), iVar10 != 0)) {
        iVar10 = (*(code *)PTR_FUN_1016c210)
                           (iVar10 + *(int *)(param_1 + 0x2c) * uVar13 * 0x1c + 0xc);
        if (iVar10 == 0) {
          uVar15 = 1 << (ulonglong)(uVar13 & 0x1f) | uVar15;
        }
      }
      uVar14 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        do {
          (*pcVar5)();
          cVar6 = (*extraout_w11_00)(param_1,uVar14,uVar13,1);
          uVar14 = uVar14 + 1;
          if (cVar6 != '\0') {
            uVar15 = 1 << (ulonglong)(uVar13 & 0x1f) | uVar15;
          }
        } while (uVar14 < *(uint *)(param_1 + 0x20));
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x24));
  }
  iVar10 = *(int *)(param_1 + 0xc0);
  if (param_2 == 0) {
    if (iVar10 != 0) goto LAB_100ac33c;
    piVar3 = (int *)(param_1 + 0x5c);
  }
  else {
    if (iVar10 == 0) {
      iVar8 = 100;
      uVar7 = 0;
      iVar10 = 0x48;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x54);
      iVar8 = 200;
      iVar10 = 0xac;
    }
    FUN_100ab780(param_1 + iVar10,uVar7);
    piVar3 = (int *)(iVar8 + param_1);
  }
  iVar10 = *piVar3;
LAB_100ac33c:
  if (uVar15 != 0) {
    FUN_100ad578(param_1,param_1 + 0x48,0,uVar15,*(undefined4 *)(param_1 + 0x2c));
  }
  return iVar10;
}


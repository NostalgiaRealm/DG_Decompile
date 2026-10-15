/*
 * FUN_100116c0 at 100116c0
 * undefined FUN_100116c0(void)
 * Address ranges: 100116c0-10011bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100116c0(int param_1)

{
  uint *puVar1;
  int *piVar2;
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
  uVar13 = 7;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar13 = 5;
  }
  if (((uVar13 < *(uint *)(&DAT_100b35b0 + *(int *)(param_1 + 0x1c) * 4)) ||
      (*(int *)(param_1 + 0x28) != 0)) && (2 < *(int *)(param_1 + 0x34) - 3U)) {
    puVar1 = (uint *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0xb8) == 0) {
      uVar11 = (ulonglong)*puVar1;
      uVar7 = FUN_10033d60(param_1);
      FUN_10010c18(param_1 + 0xac,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   uVar7,uVar11 & 0xffffffff,1,0x1b);
      FUN_100122c0(param_1);
    }
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    piVar2 = (int *)(param_1 + 0xc0);
    iVar10 = *piVar2;
    if (*(int *)(param_1 + 0xb8) == 0) {
      return iVar10;
    }
    uVar15 = 0;
    uVar13 = 0;
    if (*puVar1 != 0) {
      do {
        uVar14 = 0;
        if (*(uint *)(param_1 + 0x20) != 0) {
          piVar3 = (int *)(param_1 + 0xc4);
          do {
            (*pcVar5)();
            cVar6 = (*extraout_w11)(param_1,uVar14,uVar13,1);
            if (cVar6 != '\0') {
              uVar15 = 1 << (ulonglong)(uVar13 & 0x1f) | uVar15;
            }
            iVar8 = FUN_10033d60(param_1);
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
              (*(code *)PTR_FUN_100ba2b8)(*piVar3 + iVar8 * 0x1c + 0xc,0,0,uVar4,uVar12);
            }
            iVar9 = (*(code *)PTR_FUN_100ba248)(*piVar3 + iVar8 * 0x1c + 0xc);
            if (iVar9 == 0) {
              iVar9 = *piVar3 + iVar8 * 0x1c;
              FUN_10010080(*(undefined4 *)(param_1 + 0xa8),*(int *)(param_1 + 0x1c),uVar14,uVar13,
                           *(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar9 + 0xc),
                           *(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(iVar9 + 0x14),
                           *(undefined4 *)(iVar9 + 0x18));
              (*(code *)PTR_FUN_100ba2bc)(*piVar3 + iVar8 * 0x1c + 0xc);
              iVar8 = *piVar2;
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
          } while (uVar14 < *(uint *)(param_1 + 0x20));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *puVar1);
    }
    *(undefined1 *)(param_1 + 0xd9) = 0;
    if (*(char *)(param_1 + 0x3d) == '\x01') {
      FUN_10010fe0(param_1 + 0x48,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      *(char *)(param_1 + 0x3d) = '\x02';
    }
    if (uVar15 == 0) {
      return iVar10;
    }
    uVar7 = FUN_10033d60(param_1);
    iVar8 = 0x48;
    if (*piVar2 != 0) {
      iVar8 = 0xac;
    }
    iVar8 = iVar8 + param_1;
  }
  else {
    uVar15 = 0;
    uVar13 = 0;
    if (*(uint *)(param_1 + 0x24) != 0) {
      do {
        iVar10 = *(int *)(param_1 + 0xc4);
        if ((iVar10 != 0) || (iVar10 = *(int *)(param_1 + 0x60), iVar10 != 0)) {
          iVar10 = (*(code *)PTR_FUN_100ba248)
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
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x5c);
    }
    if (uVar15 == 0) {
      return iVar10;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    iVar8 = param_1 + 0x48;
  }
  FUN_10012dd8(param_1,iVar8,0,uVar15,uVar7);
  return iVar10;
}


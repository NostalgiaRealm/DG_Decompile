/*
 * FUN_10021750 at 10021750
 * undefined FUN_10021750(void)
 * Address ranges: 10021750-10021cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10021750(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 extraout_w14;
  uint uVar15;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar11 = *(int *)(param_1 + 0x1c);
  uVar14 = 7;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar14 = 5;
  }
  if (((uVar14 < *(uint *)(&DAT_100b35b0 + iVar11 * 4)) || (*(int *)(param_1 + 0x28) != 0)) &&
     (2 < *(int *)(param_1 + 0x34) - 3U)) {
    iVar2 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0xfc) == 0) {
      uVar14 = 0x1f;
      if (*(char *)(iVar11 + 0x100b3760) == '\0') {
        uVar14 = 0x1c;
      }
      uVar13 = (ulonglong)uVar14;
      if (iVar2 != 1) {
        FUN_10033d60(param_1);
      }
      uVar8 = FUN_10033d60(param_1);
      FUN_10020818(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   uVar8,iVar2,1,0x1b,uVar13 & 0xffffffff,extraout_w14);
      FUN_100223d0(param_1);
    }
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar11 = *(int *)(param_1 + 0x108);
    if (*(int *)(param_1 + 0xfc) != 0) {
      uVar14 = 0;
      uVar15 = 0;
      uVar12 = 0;
      if (*(int *)(param_1 + 0x24) != 0) {
        do {
          uVar12 = 0;
          if (*(uint *)(param_1 + 0x20) != 0) {
            piVar1 = (int *)(param_1 + 0x104);
            do {
              (*pcVar6)();
              cVar7 = (*extraout_w11)(param_1,uVar12,uVar14,1);
              if (cVar7 != '\0') {
                uVar15 = 1 << (ulonglong)(uVar14 & 0x1f) | uVar15;
              }
              iVar9 = FUN_10033d60(param_1);
              iVar9 = uVar12 + iVar9 * uVar14;
              if (*(char *)(param_1 + 0x12d) != '\0') {
                uVar4 = *(uint *)(param_1 + 0x18) >> (ulonglong)(uVar12 & 0x1f);
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                uVar5 = *(uint *)(param_1 + 0x14) >> (ulonglong)(uVar12 & 0x1f);
                if (uVar5 == 0) {
                  uVar5 = 1;
                }
                (*(code *)PTR_FUN_100ba2b8)(*piVar1 + iVar9 * 0x20 + 0x10,0,0,uVar5,uVar4);
              }
              iVar10 = (*(code *)PTR_FUN_100ba248)(*piVar1 + iVar9 * 0x20 + 0x10);
              if (iVar10 == 0) {
                iVar3 = *(int *)(param_1 + 0x2c);
                FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15d8),auStack_48,
                             *(undefined4 *)(param_1 + 0x60),0);
                FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15dc),auStack_44,
                             *(undefined4 *)(param_1 + 0x10c),iVar9);
                iVar10 = *piVar1 + iVar9 * 0x20;
                FUN_1001c178(*(undefined4 *)(param_1 + 0xe0),*(int *)(param_1 + 0x1c),uVar12,uVar14,
                             uVar12 + iVar3 * uVar14,iVar9,*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 0x14));
                (*(code *)PTR_FUN_100ba2bc)(*piVar1 + iVar9 * 0x20 + 0x10);
                uVar15 = 1 << (ulonglong)(uVar14 & 0x1f) | uVar15;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(param_1 + 0x20));
          }
          uVar14 = uVar14 + 1;
          uVar12 = *(uint *)(param_1 + 0x24);
        } while (uVar14 < uVar12);
      }
      *(undefined1 *)(param_1 + 0x12d) = 0;
      if (*(char *)(param_1 + 0x3d) == '\x01') {
        FUN_10020e88(param_1 + 0x48,*(undefined4 *)(param_1 + 0x20),uVar12);
        *(char *)(param_1 + 0x3d) = '\x02';
      }
      if (uVar15 != 0) {
        uVar8 = FUN_10033d60(param_1);
        FUN_10022fe0(param_1,param_1 + 0xf0,uVar15,*(int *)(param_1 + 0x108),iVar2 != 1,uVar8);
      }
    }
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    if (*(uint *)(param_1 + 0x24) != 0) {
      do {
        iVar11 = *(int *)(param_1 + 0x104);
        if ((iVar11 != 0) || (iVar11 = *(int *)(param_1 + 0x5c), iVar11 != 0)) {
          iVar11 = (*(code *)PTR_FUN_100ba248)
                             (iVar11 + *(int *)(param_1 + 0x2c) * uVar14 * 0x20 + 0x10);
          if (iVar11 == 0) {
            uVar12 = 1 << (ulonglong)(uVar14 & 0x1f) | uVar12;
          }
        }
        uVar15 = 0;
        if (*(int *)(param_1 + 0x20) != 0) {
          do {
            (*pcVar6)();
            cVar7 = (*extraout_w11_00)(param_1,uVar15,uVar14,1);
            uVar15 = uVar15 + 1;
            if (cVar7 != '\0') {
              uVar12 = 1 << (ulonglong)(uVar14 & 0x1f) | uVar12;
            }
          } while (uVar15 < *(uint *)(param_1 + 0x20));
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x24));
    }
    iVar11 = *(int *)(param_1 + 0x108);
    if (iVar11 == -1) {
      iVar11 = *(int *)(param_1 + 0x60);
    }
    if (uVar12 != 0) {
      FUN_10022fe0(param_1,param_1 + 0x48,uVar12,*(int *)(param_1 + 0x60),0,0);
    }
  }
  return iVar11;
}


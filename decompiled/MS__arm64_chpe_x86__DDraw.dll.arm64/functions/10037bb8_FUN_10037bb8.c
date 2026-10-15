/*
 * FUN_10037bb8 at 10037bb8
 * undefined FUN_10037bb8(void)
 * Address ranges: 10037bb8-10037f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037bb8(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 *extraout_w8;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar11;
  undefined1 auStack_48 [8];
  
  FUN_100a9d50(auStack_48);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = param_1 + 0x154;
  }
  uVar11 = 0;
  if (*(uint *)(param_1 + 0x15c) != 0) {
    do {
      uVar7 = (*pcVar5)();
      (*extraout_w11)(uVar7,iVar4);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x15c));
  }
  uVar11 = 0;
  if (*(uint *)(param_1 + 0x110) != 0) {
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = param_1 + 0x10;
    }
    do {
      uVar7 = (*pcVar5)();
      uVar8 = (*extraout_w11_00)(uVar7,*extraout_w8);
      FUN_1008f050(uVar8,*(undefined4 *)(*(int *)(param_1 + 0x10c) + uVar11 * 4),iVar4);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x110));
  }
  uVar9 = FUN_100914d0(*(undefined4 *)(param_1 + 0x10c));
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = param_1 + 0x38;
  }
  if (DAT_100be0b4 != 0) {
    piVar1 = (int *)(DAT_100be0b4 + 8);
    puVar2 = (uint *)(DAT_100be0b4 + 0xc);
    uVar11 = *puVar2;
    if (uVar11 != 0) {
      uVar10 = 0;
      do {
        if (*(int *)(*piVar1 + uVar10 * 4) == iVar4) {
          if (uVar10 != 0xffffffff) {
            uVar10 = uVar10 + 1;
            if (uVar10 < uVar11) {
              do {
                puVar3 = (undefined4 *)(*piVar1 + uVar10 * 4);
                uVar10 = uVar10 + 1;
                puVar3[-1] = *puVar3;
              } while (uVar10 < *puVar2);
            }
            *puVar2 = *puVar2 - 1;
          }
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
  }
  iVar6 = DAT_100be0c0;
  iVar4 = *(int *)(DAT_100be0c0 + 0x308) + -1;
  *(int *)(DAT_100be0c0 + 0x308) = iVar4;
  if ((iVar4 == 0) && (uVar9 = (ulonglong)DAT_100c2a80, DAT_100c2a80 != 0)) {
    if (*(char *)(iVar6 + 0x758) != '\0') {
      (*(code *)PTR_FUN_100ba27c)(*(undefined4 *)(iVar6 + 0x30c),0x12,0,0);
      (*(code *)PTR_FUN_100ba168)(DAT_100c2a80,0xffffffff);
      uVar9 = (ulonglong)DAT_100c2a80;
    }
    (*(code *)PTR_FUN_100ba06c)(uVar9);
    DAT_100c2a80 = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    uVar9 = (*(code *)PTR_FUN_100ba094)(iVar6 + 0x318);
  }
  if ((*(char *)(param_1 + 0x36) != '\0') && (DAT_100be0d8 = DAT_100be0d8 + -1, DAT_100be0d8 == 0))
  {
    uVar9 = (*(code *)PTR_FUN_100ba2e4)(DAT_100be0d0,DAT_100c2954);
    DAT_100be0d0 = 0;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    uVar8 = FUN_10002240(uVar9,*(undefined4 *)(param_1 + 0x11c));
    if ((int)uVar8 == 1) {
      FUN_10039300(param_1,0);
      uVar8 = FUN_10039300(param_1,1);
    }
    FUN_10002100(uVar8,*(undefined4 *)(param_1 + 0x11c));
    *(int *)(param_1 + 0x118) = 0;
  }
  FUN_10003b78();
  FUN_10003cd0();
  FUN_100418e0(0);
  iVar6 = DAT_100be0c0;
  iVar4 = *(int *)(DAT_100be0c0 + 0xf8) + -1;
  *(int *)(DAT_100be0c0 + 0xf8) = iVar4;
  if ((iVar4 == 0) && (*(char *)(iVar6 + 0x789) != '\0')) {
    puVar3 = (undefined4 *)(iVar6 + 0xf4);
    (*(code *)PTR_FUN_100ba134)(*puVar3);
    *puVar3 = 0;
  }
  FUN_100a9ca0(auStack_48);
  return;
}


/*
 * FUN_10043750 at 10043750
 * undefined FUN_10043750(void)
 * Address ranges: 10043750-10043a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043750(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  uint uVar9;
  int iVar10;
  undefined4 auStack_348 [194];
  
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_1004f590(param_1);
  }
  piVar1 = (int *)(param_1 + 4);
  if ((*(uint *)(*piVar1 + 200) >> 3 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x1bc) >> 9 & 1) == 0) {
      do {
        FUN_1004c8e8(param_1);
        param_1 = *(int *)(param_1 + 0x110);
      } while (param_1 != 0);
    }
    else {
      for (; iVar10 = param_1, *(int *)(param_1 + 0x10c) != 0; param_1 = *(int *)(param_1 + 0x10c))
      {
      }
      do {
        if ((*(uint *)(iVar10 + 0x1bc) & 0xfe00) != 0x200) {
          FUN_1004c8e8(iVar10);
        }
        piVar1 = (int *)(iVar10 + 0x110);
        iVar10 = *piVar1;
      } while (*piVar1 != 0);
      uVar9 = 0;
      do {
        piVar1 = (int *)(param_1 + 0x120 + uVar9 * 4);
        while (iVar10 = *piVar1, iVar10 != 0) {
          if ((*(uint *)(iVar10 + 0x1bc) & 0xfe00) != 0x200) {
            FUN_1004c8e8(iVar10);
          }
          piVar1 = (int *)(iVar10 + 0x110);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 5);
    }
  }
  else {
    FUN_100917d0(auStack_348,0,0x300);
    bVar6 = true;
    for (iVar10 = param_1; *(int *)(iVar10 + 0x10c) != 0; iVar10 = *(int *)(iVar10 + 0x10c)) {
    }
    iVar5 = iVar10;
    do {
      if ((*(uint *)(iVar5 + 0x1bc) & 0xfe00) == 0x200) {
        bVar6 = false;
      }
      else {
        FUN_1004c8e8(iVar5);
        iVar4 = *(int *)(iVar5 + 4);
        if ((*(uint *)(param_1 + 0x154) >> 0x11 & 1) == 0) {
          iVar8 = 1;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x168);
        }
        iVar8 = *(int *)(iVar4 + 0x6c) + *(int *)(iVar4 + 0x70) * iVar8;
        auStack_348[iVar8 * 2] = *(undefined4 *)(iVar4 + 0x20);
        auStack_348[iVar8 * 2 + 1] = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x10);
      }
      iVar5 = *(int *)(iVar5 + 0x110);
    } while (iVar5 != 0);
    uVar9 = 0;
    do {
      piVar2 = (int *)(iVar10 + 0x120 + uVar9 * 4);
      while (iVar5 = *piVar2, iVar5 != 0) {
        if ((*(uint *)(iVar5 + 0x1bc) & 0xfe00) != 0x200) {
          FUN_1004c8e8(iVar5);
          iVar4 = *(int *)(iVar5 + 4);
          if ((*(uint *)(param_1 + 0x154) >> 0x11 & 1) == 0) {
            iVar8 = 1;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x168);
          }
          iVar8 = *(int *)(iVar4 + 0x6c) + *(int *)(iVar4 + 0x70) * iVar8;
          auStack_348[iVar8 * 2] = *(undefined4 *)(iVar4 + 0x20);
          auStack_348[iVar8 * 2 + 1] = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x10);
        }
        piVar2 = (int *)(iVar5 + 0x110);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 5);
    puVar3 = auStack_348;
    if (!bVar6) {
      puVar3 = (undefined4 *)0x0;
    }
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(*(int *)(iVar10 + 4) + 0x50),puVar3);
    (*extraout_w11)(uVar7);
    *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) | 0x10;
    *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) & 0xfffffff7;
  }
  return;
}


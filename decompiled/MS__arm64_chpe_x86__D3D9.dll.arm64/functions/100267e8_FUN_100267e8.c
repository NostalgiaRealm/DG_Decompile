/*
 * FUN_100267e8 at 100267e8
 * undefined FUN_100267e8(void)
 * Address ranges: 100267e8-1002698f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100267e8(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_10 [4];
  
  piVar1 = (int *)(param_1 + 0x318);
  uVar10 = 0;
  while( true ) {
    iVar9 = (int)uVar10;
    piVar3 = (int *)(*piVar1 + iVar9 * 4);
    if (*piVar3 == param_2) break;
    uVar11 = iVar9 + 1;
    uVar10 = (ulonglong)uVar11;
    if (7 < uVar11) {
      if ((uVar11 == 8) && (8 < *(uint *)(param_1 + 0x31c))) {
        uVar11 = 8;
        do {
          if (*(int *)(*piVar1 + uVar11 * 4) == param_2) {
            puVar2 = (uint *)(param_1 + 0x31c);
            uVar12 = *puVar2;
            if (uVar12 <= uVar11) {
              return;
            }
            uVar11 = uVar11 + 1;
            if (uVar11 < uVar12) {
              do {
                puVar4 = (undefined4 *)(*piVar1 + uVar11 * 4);
                uVar11 = uVar11 + 1;
                puVar4[-1] = *puVar4;
                uVar12 = *puVar2;
              } while (uVar11 < uVar12);
            }
            *puVar2 = uVar12 - 1;
            return;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_1 + 0x31c));
      }
      return;
    }
  }
  local_10[0] = param_2;
  if (*(uint *)(param_1 + 0x31c) < 9) {
    *piVar3 = -1;
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar6,uVar10 & 0xffffffff,0);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x31c);
  uVar6 = 0xffffffff;
  if (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 0x31c) = iVar5;
    uVar6 = *(undefined4 *)(*piVar1 + iVar5 * 4);
  }
  *(undefined4 *)(*piVar1 + iVar9 * 4) = uVar6;
  uVar7 = FUN_10012e10(param_1 + 0x2ec,local_10);
  uVar8 = uVar7 & 0xffffffff;
  if ((int)uVar7 == 0) {
    return;
  }
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6,uVar10 & 0xffffffff,uVar8 & 0xffffffff);
  return;
}


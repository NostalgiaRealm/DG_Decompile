/*
 * FUN_100d32f0 at 100d32f0
 * undefined FUN_100d32f0(void)
 * Address ranges: 100d32f0-100d33db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d32f0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *extraout_w11;
  
  puVar4 = (undefined4 *)(param_2 + 0x1c);
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,*puVar4);
  puVar1 = (uint *)(param_1 + 0x67a0);
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x679c) + uVar5 * 4) == param_2) {
        if (uVar5 == 0xffffffff) {
          return;
        }
        uVar5 = uVar5 + 1;
        if (uVar5 < uVar2) {
          do {
            puVar4 = (undefined4 *)(*(int *)(param_1 + 0x679c) + uVar5 * 4);
            uVar5 = uVar5 + 1;
            puVar4[-1] = *puVar4;
          } while (uVar5 < *puVar1);
        }
        *puVar1 = *puVar1 - 1;
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}


/*
 * FUN_1006a650 at 1006a650
 * undefined FUN_1006a650(void)
 * Address ranges: 1006a650-1006a6fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a650(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  
  iVar1 = param_1 + param_2 * 0x1510;
  (*(code *)PTR_FUN_100a003c)(param_1 + 0x4a0);
  uVar2 = 0;
  do {
    if (param_3 == *(int *)(iVar1 + 0x7fc + uVar2 * 4)) {
      *(undefined4 *)(iVar1 + uVar2 * 4 + 0x7fc) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*(code *)PTR_FUN_100a0090)(param_1 + 0x4a0);
  return;
}


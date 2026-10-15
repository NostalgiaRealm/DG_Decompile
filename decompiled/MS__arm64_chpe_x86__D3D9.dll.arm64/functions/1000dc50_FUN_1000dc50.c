/*
 * FUN_1000dc50 at 1000dc50
 * undefined FUN_1000dc50(void)
 * Address ranges: 1000dc50-1000dd17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000dc50(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  
  if ((((param_2 == *(int *)(param_1 + 0x18)) || (param_2 == *(int *)(param_1 + 0x1c))) ||
      (param_2 == *(int *)(param_1 + 0x20))) ||
     ((param_2 == *(int *)(param_1 + 0x24) || (param_2 == *(int *)(param_1 + 0x28))))) {
LAB_1000dce0:
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  else if (*(int *)(param_2 + 0x1c) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x1258 + uVar2 * 4)) goto LAB_1000dce0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10);
  }
  return;
}


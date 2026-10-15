/*
 * FUN_1000cf40 at 1000cf40
 * undefined FUN_1000cf40(void)
 * Address ranges: 1000cf40-1000cfa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cf40(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  if (*(char *)(param_1 + 0xb17) != '\0') {
    *(undefined2 *)(param_1 + 0x58bd) = 1;
  }
  return;
}


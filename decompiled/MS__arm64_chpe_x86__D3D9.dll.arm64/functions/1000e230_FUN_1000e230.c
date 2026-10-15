/*
 * FUN_1000e230 at 1000e230
 * undefined FUN_1000e230(void)
 * Address ranges: 1000e230-1000e297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e230(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  if (*(char *)(param_1 + 0xddb) != '\0') {
    *(undefined2 *)(param_1 + 0x669d) = 1;
  }
  return;
}


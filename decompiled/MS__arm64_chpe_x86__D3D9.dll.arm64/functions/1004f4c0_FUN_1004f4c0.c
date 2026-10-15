/*
 * FUN_1004f4c0 at 1004f4c0
 * undefined FUN_1004f4c0(void)
 * Address ranges: 1004f4c0-1004f527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f4c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    puVar2 = (undefined4 *)(param_1 + 0xc);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,*puVar2,0);
  }
  return;
}


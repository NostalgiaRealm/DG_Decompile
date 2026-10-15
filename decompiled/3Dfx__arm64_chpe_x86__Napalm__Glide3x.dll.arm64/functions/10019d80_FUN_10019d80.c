/*
 * FUN_10019d80 at 10019d80
 * undefined FUN_10019d80(void)
 * Address ranges: 10019d80-10019e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019d80(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  switch(*(undefined4 *)(*(int *)(param_1 + 4) + 0xeb)) {
  case 0:
    param_2 = 0;
    break;
  case 2:
    param_2 = 1;
  }
  *(undefined4 *)(param_1 + 0x2e34) = param_2;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}


/*
 * FUN_10048d90 at 10048d90
 * undefined FUN_10048d90(void)
 * Address ranges: 10048d90-10048e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048d90(int param_1,undefined4 param_2)

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
  *(undefined4 *)(param_1 + 0x2c44) = param_2;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}


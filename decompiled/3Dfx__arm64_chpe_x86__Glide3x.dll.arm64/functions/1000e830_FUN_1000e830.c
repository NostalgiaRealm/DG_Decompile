/*
 * FUN_1000e830 at 1000e830
 * undefined FUN_1000e830(void)
 * Address ranges: 1000e830-1000e8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e830(int param_1,uint param_2)

{
  uint *puVar1;
  code *extraout_w11;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x32e0) + 0xf0);
  if (*puVar1 != (param_2 & 0xff)) {
    *puVar1 = param_2 & 0xff;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined1 *)(param_1 + 0x2c64) = 1;
  }
  return;
}


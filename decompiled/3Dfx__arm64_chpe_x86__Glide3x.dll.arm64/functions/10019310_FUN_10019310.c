/*
 * FUN_10019310 at 10019310
 * undefined FUN_10019310(void)
 * Address ranges: 10019310-100193a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019310(int param_1,uint param_2)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x29ec) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(uint *)(param_1 + 0x2cb0) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2cb4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2cb8) = param_2 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}


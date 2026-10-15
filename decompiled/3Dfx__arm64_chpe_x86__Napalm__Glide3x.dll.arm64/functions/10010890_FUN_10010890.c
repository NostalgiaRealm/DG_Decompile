/*
 * FUN_10010890 at 10010890
 * undefined FUN_10010890(void)
 * Address ranges: 10010890-100108ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010890(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x3624) = param_2;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(undefined4 *)(param_1 + 0x2b50) = param_2;
  return;
}


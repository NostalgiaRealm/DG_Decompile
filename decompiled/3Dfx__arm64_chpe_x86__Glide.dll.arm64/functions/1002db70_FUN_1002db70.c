/*
 * FUN_1002db70 at 1002db70
 * undefined FUN_1002db70(void)
 * Address ranges: 1002db70-1002dc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002db70(int param_1,uint param_2)

{
  code *extraout_w11;
  
  FUN_1002bd50(*(undefined4 *)(param_1 + 0x315c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2bf8) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(uint *)(param_1 + 0x2a44) = param_2 & 0xff;
  *(undefined2 *)(param_1 + 0x2bc0) = 0x101;
  return;
}


/*
 * FUN_1001f280 at 1001f280
 * undefined FUN_1001f280(void)
 * Address ranges: 1001f280-1001f317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f280(int param_1,uint param_2)

{
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2de8) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(uint *)(param_1 + 0x2c24) = param_2 & 0xff;
  *(undefined2 *)(param_1 + 0x2da8) = 0x101;
  return;
}


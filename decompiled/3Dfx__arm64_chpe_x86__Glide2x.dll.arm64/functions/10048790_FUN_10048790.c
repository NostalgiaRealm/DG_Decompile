/*
 * FUN_10048790 at 10048790
 * undefined FUN_10048790(void)
 * Address ranges: 10048790-10048807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048790(int param_1,uint param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2c1c) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(uint *)(param_1 + 0x2970) = param_2 & 0xff;
  return;
}


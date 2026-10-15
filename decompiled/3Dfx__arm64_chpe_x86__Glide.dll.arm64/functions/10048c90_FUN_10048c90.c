/*
 * FUN_10048c90 at 10048c90
 * undefined FUN_10048c90(void)
 * Address ranges: 10048c90-10048d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048c90(int param_1,uint param_2)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x2970) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(uint *)(param_1 + 0x2c10) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2c14) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2c18) = param_2 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}


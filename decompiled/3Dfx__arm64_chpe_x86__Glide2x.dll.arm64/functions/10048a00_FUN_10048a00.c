/*
 * FUN_10048a00 at 10048a00
 * undefined FUN_10048a00(void)
 * Address ranges: 10048a00-10048ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2c90) = param_2;
  *(undefined4 *)(param_1 + 0x2c94) = param_3;
  *(undefined4 *)(param_1 + 0x2c98) = param_4;
  *(undefined4 *)(param_1 + 0x2c9c) = param_5;
  *(undefined4 *)(param_1 + 0x2ca0) = param_6;
  *(uint *)(param_1 + 0x2c40) = -(uint)(param_7 != '\0');
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}


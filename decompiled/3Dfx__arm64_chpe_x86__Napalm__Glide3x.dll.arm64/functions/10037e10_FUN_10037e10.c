/*
 * FUN_10037e10 at 10037e10
 * undefined FUN_10037e10(void)
 * Address ranges: 10037e10-10037ed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037e10(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined1 *)(param_1 + 0x2d24) = param_4;
  *(undefined1 *)(param_1 + 0x2c30) = param_4;
  uVar1 = *(undefined4 *)(&DAT_100a0170 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x2d34) = uVar1;
  *(undefined4 *)(param_1 + 0x2c50) = uVar1;
  *(undefined4 *)(param_1 + 0x2c40) = uVar1;
  *(uint *)(param_1 + 0x2c54) = param_3 & 0xff;
  *(undefined1 *)(param_1 + 0x2da8) = 1;
  return;
}


/*
 * FUN_10037f60 at 10037f60
 * undefined FUN_10037f60(void)
 * Address ranges: 10037f60-10038063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037f60(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  uVar1 = *(undefined4 *)(&DAT_100a04d8 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x2d28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c44) = uVar1;
  *(undefined4 *)(param_1 + 0x2c34) = uVar1;
  uVar1 = *(undefined4 *)(&DAT_100a04d8 + param_3 * 4);
  *(undefined4 *)(param_1 + 0x2d2c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c48) = uVar1;
  *(undefined4 *)(param_1 + 0x2c38) = uVar1;
  uVar1 = *(undefined4 *)(&DAT_100a04d8 + param_4 * 4);
  *(undefined4 *)(param_1 + 0x2d30) = uVar1;
  *(undefined4 *)(param_1 + 0x2c4c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c3c) = uVar1;
  *(undefined1 *)(param_1 + 0x2da8) = 1;
  return;
}


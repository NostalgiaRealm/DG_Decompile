/*
 * FUN_10079d60 at 10079d60
 * undefined FUN_10079d60(void)
 * Address ranges: 10079d60-10079e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079d60(int param_1,undefined4 *param_2)

{
  code *extraout_w11;
  undefined4 uVar1;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  *(undefined4 *)(param_1 + 0x6f50) = *param_2;
  *(undefined4 *)(param_1 + 0x6f54) = param_2[1];
  *(undefined4 *)(param_1 + 0x6f58) = param_2[2];
  *(undefined4 *)(param_1 + 0x6f5c) = param_2[3];
  *(undefined4 *)(param_1 + 0x6f70) = param_2[8];
  *(undefined4 *)(param_1 + 0x6f74) = param_2[9];
  *(undefined4 *)(param_1 + 0x6f78) = param_2[10];
  *(undefined4 *)(param_1 + 0x6f7c) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x6f60) = param_2[4];
  *(undefined4 *)(param_1 + 0x6f64) = param_2[5];
  *(undefined4 *)(param_1 + 0x6f68) = param_2[6];
  *(undefined4 *)(param_1 + 0x6f6c) = param_2[7];
  *(undefined4 *)(param_1 + 0x6f80) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x6f84) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x6f88) = param_2[0xe];
  uVar1 = param_2[0x10];
  *(undefined1 *)(param_1 + 0xf671) = 1;
  *(undefined4 *)(param_1 + 0x6f8c) = uVar1;
  return;
}


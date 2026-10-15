/*
 * FUN_10063750 at 10063750
 * undefined FUN_10063750(void)
 * Address ranges: 10063750-10063873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063750(int param_1,undefined4 *param_2)

{
  code *extraout_w11;
  undefined4 uVar1;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  *(undefined4 *)(param_1 + 0x52c0) = *param_2;
  *(undefined4 *)(param_1 + 0x52c4) = param_2[1];
  *(undefined4 *)(param_1 + 0x52c8) = param_2[2];
  *(undefined4 *)(param_1 + 0x52cc) = param_2[3];
  *(undefined4 *)(param_1 + 0x52e0) = param_2[8];
  *(undefined4 *)(param_1 + 0x52e4) = param_2[9];
  *(undefined4 *)(param_1 + 0x52e8) = param_2[10];
  *(undefined4 *)(param_1 + 0x52ec) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x52d0) = param_2[4];
  *(undefined4 *)(param_1 + 0x52d4) = param_2[5];
  *(undefined4 *)(param_1 + 0x52d8) = param_2[6];
  *(undefined4 *)(param_1 + 0x52dc) = param_2[7];
  *(undefined4 *)(param_1 + 0x52f0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x52f4) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x52f8) = param_2[0xe];
  uVar1 = param_2[0x10];
  *(undefined1 *)(param_1 + 0xd981) = 1;
  *(undefined4 *)(param_1 + 0x52fc) = uVar1;
  return;
}


/*
 * FUN_1000ea70 at 1000ea70
 * undefined FUN_1000ea70(void)
 * Address ranges: 1000ea70-1000eb43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ea70(int param_1,uint param_2,uint param_3)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x2a14) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(uint *)(param_1 + 0x32b0) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x32b4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x32b8) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x32c0) = param_3 >> 0x18;
  *(uint *)(param_1 + 0x32c4) = param_3 >> 0x10 & 0xff;
  *(uint *)(param_1 + 13000) = param_3 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}


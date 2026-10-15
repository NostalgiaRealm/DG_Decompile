/*
 * FUN_10037cc0 at 10037cc0
 * undefined FUN_10037cc0(void)
 * Address ranges: 10037cc0-10037d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037cc0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar1 = param_1 + param_2 * 0x250;
  *(float *)(iVar1 + 0x2f40) = (float)(param_3 >> 0x18);
  *(float *)(iVar1 + 0x2f44) = (float)(param_3 >> 0x10 & 0xff);
  *(float *)(iVar1 + 0x2f48) = (float)(param_3 >> 8 & 0xff);
  *(float *)(iVar1 + 0x2f4c) = (float)(param_3 & 0xff);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}


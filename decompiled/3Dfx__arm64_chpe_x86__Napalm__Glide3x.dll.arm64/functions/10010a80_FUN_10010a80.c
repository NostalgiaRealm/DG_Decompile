/*
 * FUN_10010a80 at 10010a80
 * undefined FUN_10010a80(void)
 * Address ranges: 10010a80-10010b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010a80(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + param_2 * 4 + 0x2b7c) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  iVar1 = param_1 + param_2 * 0x250;
  *(uint *)(iVar1 + 0x2f90) = param_3 >> 0x18;
  *(uint *)(iVar1 + 0x2f94) = param_3 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2f98) = param_3 >> 8 & 0xff;
  *(uint *)(iVar1 + 0x2fa0) = param_4 >> 0x18;
  *(uint *)(iVar1 + 0x2fa4) = param_4 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2fa8) = param_4 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}


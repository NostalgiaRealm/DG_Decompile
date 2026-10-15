/*
 * FUN_1000ebe0 at 1000ebe0
 * undefined FUN_1000ebe0(void)
 * Address ranges: 1000ebe0-1000ecc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ebe0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + param_2 * 4 + 0x2a40) != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  iVar1 = param_1 + param_2 * 0x1a0;
  *(uint *)(iVar1 + 0x2dd0) = param_3 >> 0x18;
  *(uint *)(iVar1 + 0x2dd4) = param_3 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2dd8) = param_3 >> 8 & 0xff;
  *(uint *)(iVar1 + 0x2de0) = param_4 >> 0x18;
  *(uint *)(iVar1 + 0x2de4) = param_4 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2de8) = param_4 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}


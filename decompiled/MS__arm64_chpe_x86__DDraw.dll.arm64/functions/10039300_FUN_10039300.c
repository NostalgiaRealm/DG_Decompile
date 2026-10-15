/*
 * FUN_10039300 at 10039300
 * undefined FUN_10039300(void)
 * Address ranges: 10039300-1003936b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039300(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = (*(int *)(param_1 + 0x11c) * 0x29 + param_2) * 4;
  if (*(int *)(&DAT_100bbcdc + iVar1) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,1);
    *(undefined4 *)(&DAT_100bbcdc + iVar1) = 0;
  }
  return;
}


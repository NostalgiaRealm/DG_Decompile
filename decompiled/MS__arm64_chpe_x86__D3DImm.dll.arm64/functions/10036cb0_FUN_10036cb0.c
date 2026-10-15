/*
 * FUN_10036cb0 at 10036cb0
 * undefined FUN_10036cb0(void)
 * Address ranges: 10036cb0-10036d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036cb0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  iVar1 = param_1 + 0x80;
  iVar2 = iVar1 + param_2 * 0x10;
  *(undefined4 *)(iVar1 + (param_2 + 0xe2) * 0x10) = *param_3;
  *(undefined4 *)(iVar2 + 0xe24) = param_3[1];
  *(undefined4 *)(iVar2 + 0xe28) = param_3[2];
  *(undefined4 *)(iVar2 + 0xe2c) = param_3[3];
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  *(undefined4 *)(iVar1 + (param_2 + 0x4d) * 0x10) = *param_3;
  *(undefined4 *)(iVar2 + 0x4d4) = param_3[1];
  *(undefined4 *)(iVar2 + 0x4d8) = param_3[2];
  *(undefined4 *)(iVar2 + 0x4dc) = param_3[3];
  *(undefined1 *)(param_1 + 0x1d48) = 1;
  return;
}


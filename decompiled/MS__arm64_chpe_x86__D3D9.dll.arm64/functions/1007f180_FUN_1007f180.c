/*
 * FUN_1007f180 at 1007f180
 * undefined FUN_1007f180(void)
 * Address ranges: 1007f180-1007f21f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f180(float param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2,0);
  iVar2 = (int)param_1;
  *(float *)(param_2 + 0xe88) = param_1;
  *(undefined1 *)(param_2 + 0xe8c) = param_3;
  iVar1 = iVar2;
  if (8 < iVar2) {
    iVar1 = 8;
  }
  if (iVar2 < 1) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 0x6948) = iVar1;
  *(undefined1 *)(param_2 + 0xf671) = 1;
  *(undefined1 *)(param_2 + 0xf694) = 1;
  *(int *)(param_2 + 0x5198) = iVar1;
  return;
}


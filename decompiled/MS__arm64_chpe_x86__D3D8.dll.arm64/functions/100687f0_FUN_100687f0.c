/*
 * FUN_100687f0 at 100687f0
 * undefined FUN_100687f0(void)
 * Address ranges: 100687f0-1006888f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100687f0(float param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2,0);
  iVar2 = (int)param_1;
  *(float *)(param_2 + 0x570) = param_1;
  *(undefined1 *)(param_2 + 0x574) = param_3;
  iVar1 = iVar2;
  if (8 < iVar2) {
    iVar1 = 8;
  }
  if (iVar2 < 1) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 0x4cd8) = iVar1;
  *(undefined1 *)(param_2 + 0xd981) = 1;
  *(undefined1 *)(param_2 + 0xd9a4) = 1;
  *(int *)(param_2 + 0x4738) = iVar1;
  return;
}


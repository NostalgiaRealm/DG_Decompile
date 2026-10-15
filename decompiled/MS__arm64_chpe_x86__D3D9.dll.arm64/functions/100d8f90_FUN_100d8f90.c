/*
 * FUN_100d8f90 at 100d8f90
 * undefined FUN_100d8f90(void)
 * Address ranges: 100d8f90-100d901f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d8f90(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *(undefined4 *)(param_2 + 0xc2d0) = param_1;
  if ((*(uint *)(*(int *)(&DAT_00006704 + param_2) + 0x1c) >> 0x18 & 1) != 0) {
    FUN_100256d0(param_2);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_2 + 0x14),
                       *(int *)(*(int *)(param_2 + 0xc) + 0x94f) != 0);
    (*extraout_w11)(uVar1);
  }
  return;
}


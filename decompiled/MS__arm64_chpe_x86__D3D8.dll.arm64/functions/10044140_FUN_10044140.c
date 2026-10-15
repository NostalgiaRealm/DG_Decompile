/*
 * FUN_10044140 at 10044140
 * undefined FUN_10044140(void)
 * Address ranges: 10044140-1004420b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044140(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0xc4);
  if (*piVar1 != 0) {
    FUN_10043a88(param_1);
    FUN_10043a38(param_1);
    FUN_10043988(param_1);
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 != 0) {
      FUN_100ebf50(*(undefined4 *)(*piVar1 + 0x172c0),*piVar2,0,1);
    }
    FUN_100e8470(*(int *)(param_1 + 0xcc) + 0x1640,*piVar2);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3);
    *piVar2 = 0;
    FUN_100dafb0(*piVar1);
    *piVar1 = 0;
    *(int *)(param_1 + 0xcc) = 0;
  }
  return;
}


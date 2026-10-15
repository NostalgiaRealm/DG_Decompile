/*
 * FUN_100523d0 at 100523d0
 * undefined FUN_100523d0(void)
 * Address ranges: 100523d0-1005249b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100523d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0xc4);
  if (*piVar1 != 0) {
    FUN_10051c88(param_1);
    FUN_10051c38(param_1);
    FUN_10051b88(param_1);
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 != 0) {
      FUN_1011e7a0(*(undefined4 *)(*piVar1 + 0x172c0),*piVar2,0,1);
    }
    FUN_1011acc0(*(int *)(param_1 + 0xcc) + 0x1640,*piVar2);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3);
    *piVar2 = 0;
    FUN_1010d6f0(*piVar1);
    *piVar1 = 0;
    *(int *)(param_1 + 0xcc) = 0;
  }
  return;
}


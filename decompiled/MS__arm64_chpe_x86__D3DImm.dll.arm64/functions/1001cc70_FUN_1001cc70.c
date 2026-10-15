/*
 * FUN_1001cc70 at 1001cc70
 * undefined FUN_1001cc70(void)
 * Address ranges: 1001cc70-1001cd3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cc70(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0xcc);
  if (*piVar1 != 0) {
    FUN_1001c5d0(param_1);
    FUN_1001c580(param_1);
    FUN_1001c4d0(param_1);
    piVar2 = (int *)(param_1 + 0xd8);
    if (*piVar2 != 0) {
      FUN_10077c00(*(undefined4 *)(*piVar1 + 0x172c0),*piVar2,0,1);
    }
    FUN_10075650(*(int *)(param_1 + 0xd4) + 0x1640,*piVar2);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3);
    *piVar2 = 0;
    FUN_10070b58(*piVar1);
    *piVar1 = 0;
    *(int *)(param_1 + 0xd4) = 0;
  }
  return;
}


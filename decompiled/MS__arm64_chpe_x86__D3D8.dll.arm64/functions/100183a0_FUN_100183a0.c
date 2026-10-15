/*
 * FUN_100183a0 at 100183a0
 * undefined FUN_100183a0(void)
 * Address ranges: 100183a0-10018467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100183a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_1000c990(*(undefined4 *)(param_1 + 0x18),param_2);
    FUN_10036d08(*(undefined4 *)(param_2 + 4));
  }
  piVar1 = (int *)(param_1 + 4);
  if (*(int *)(*piVar1 + 0x50) != 0) {
    FUN_1000c990(*(undefined4 *)(param_1 + 0x18),param_1);
    FUN_100365a8(*piVar1 + 0x4c);
    FUN_10036d08(*piVar1);
    puVar3 = (undefined4 *)(*piVar1 + 0x70);
    puVar4 = (undefined4 *)(*piVar1 + 0x6c);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*puVar4,*puVar3,1);
  }
  return;
}


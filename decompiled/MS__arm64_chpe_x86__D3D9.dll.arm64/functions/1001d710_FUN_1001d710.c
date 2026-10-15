/*
 * FUN_1001d710 at 1001d710
 * undefined FUN_1001d710(void)
 * Address ranges: 1001d710-1001d7d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d710(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_1000dc50(*(undefined4 *)(param_1 + 0x18),param_2);
    FUN_10040c08(*(undefined4 *)(param_2 + 4));
  }
  piVar1 = (int *)(param_1 + 4);
  if (*(int *)(*piVar1 + 0x50) != 0) {
    FUN_1000dc50(*(undefined4 *)(param_1 + 0x18),param_1);
    FUN_100404a8(*piVar1 + 0x4c);
    FUN_10040c08(*piVar1);
    puVar3 = (undefined4 *)(*piVar1 + 0x70);
    puVar4 = (undefined4 *)(*piVar1 + 0x6c);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*puVar4,*puVar3,1);
  }
  return;
}


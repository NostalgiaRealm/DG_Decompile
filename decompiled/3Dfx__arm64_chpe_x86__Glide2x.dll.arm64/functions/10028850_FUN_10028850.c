/*
 * FUN_10028850 at 10028850
 * undefined FUN_10028850(void)
 * Address ranges: 10028850-10028973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028850(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_1002b880(*(undefined4 *)(param_1 + 0x315c),0,2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x3160);
  if (*(int *)(*piVar1 + 0x30) != 1) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*piVar1 + 0x30) = 1;
  }
  FUN_100483d0(*piVar1,1,1);
  FUN_10027750(*piVar1,param_2,1,0);
  **(int **)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x2c) + -1;
  *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 4;
  FUN_1002e7c0(param_1);
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  return;
}


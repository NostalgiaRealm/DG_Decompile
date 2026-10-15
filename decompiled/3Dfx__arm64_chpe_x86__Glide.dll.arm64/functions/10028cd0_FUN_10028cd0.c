/*
 * FUN_10028cd0 at 10028cd0
 * undefined FUN_10028cd0(void)
 * Address ranges: 10028cd0-10028df3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028cd0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  FUN_1002bd00(*(undefined4 *)(param_1 + 0x315c),0,2);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x3160);
  if (*(int *)(*piVar1 + 0x30) != 1) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*piVar1 + 0x30) = 1;
  }
  FUN_10048850(*piVar1,1,1);
  FUN_10027bd0(*piVar1,param_2,1,0);
  **(int **)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x2c) + -1;
  *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 4;
  FUN_1002ec40(param_1);
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  return;
}


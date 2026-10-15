/*
 * FUN_1001a300 at 1001a300
 * undefined FUN_1001a300(void)
 * Address ranges: 1001a300-1001a3ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001a300(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  code *extraout_w11;
  undefined4 uVar3;
  undefined8 local_40 [2];
  
  (*(code *)PTR_FUN_101341c4)(local_40);
  iVar1 = (*(code *)PTR_FUN_101342a4)(local_40[0]);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = 0;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(param_1 + -0x28);
    if (iVar1 == iVar2) {
      *(undefined4 *)(param_1 + -0x10) = param_2;
      uVar3 = 1;
    }
  }
  *param_3 = uVar3;
  return 0;
}


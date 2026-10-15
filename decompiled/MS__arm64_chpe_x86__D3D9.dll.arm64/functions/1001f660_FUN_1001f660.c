/*
 * FUN_1001f660 at 1001f660
 * undefined FUN_1001f660(void)
 * Address ranges: 1001f660-1001f70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001f660(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  code *extraout_w11;
  undefined4 uVar3;
  undefined8 local_40 [2];
  
  (*(code *)PTR_FUN_1016c1c4)(local_40);
  iVar1 = (*(code *)PTR_FUN_1016c2a4)(local_40[0]);
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


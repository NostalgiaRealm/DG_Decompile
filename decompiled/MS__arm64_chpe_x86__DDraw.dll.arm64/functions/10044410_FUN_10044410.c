/*
 * FUN_10044410 at 10044410
 * undefined FUN_10044410(void)
 * Address ranges: 10044410-100444d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10044410(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = *(int *)(param_1 + 0x104);
  if (iVar2 != param_2) {
    if (iVar2 != 0) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3);
    }
    if (param_2 != 0) {
      (*pcVar1)();
      (*extraout_w11_00)(param_2);
    }
    *(int *)(param_1 + 0x104) = param_2;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return 0;
}


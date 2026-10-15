/*
 * FUN_10043f90 at 10043f90
 * undefined FUN_10043f90(void)
 * Address ranges: 10043f90-10044037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10043f90(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  uVar2 = 0x80070057;
  if (param_2 != (int *)0x0) {
    uVar2 = 0x88760238;
    iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar1 == 0) {
      FUN_10001c10(0);
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2);
      uVar2 = 0;
      *param_2 = *(int *)(param_1 + 0x104);
    }
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  return uVar2;
}


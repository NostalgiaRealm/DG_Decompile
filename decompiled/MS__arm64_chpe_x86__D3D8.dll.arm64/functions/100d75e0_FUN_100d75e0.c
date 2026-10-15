/*
 * FUN_100d75e0 at 100d75e0
 * undefined FUN_100d75e0(void)
 * Address ranges: 100d75e0-100d768b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d75e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  
  iVar1 = param_1 + param_2 * 0x1510;
  (*(code *)PTR_FUN_10134070)(param_1 + 0x4a0);
  uVar2 = 0;
  do {
    if (param_3 == *(int *)(iVar1 + 0x7fc + uVar2 * 4)) {
      *(undefined4 *)(iVar1 + uVar2 * 4 + 0x7fc) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x4a0);
  return;
}


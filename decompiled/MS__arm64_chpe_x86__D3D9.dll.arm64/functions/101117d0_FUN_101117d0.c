/*
 * FUN_101117d0 at 101117d0
 * undefined FUN_101117d0(void)
 * Address ranges: 101117d0-10111857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_101117d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_1,param_2);
  iVar3 = (*extraout_w11)(uVar2);
  if (iVar3 != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,param_3);
  }
  return iVar3 != 0;
}


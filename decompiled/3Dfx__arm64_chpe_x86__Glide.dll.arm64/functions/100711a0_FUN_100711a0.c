/*
 * FUN_100711a0 at 100711a0
 * undefined FUN_100711a0(void)
 * Address ranges: 100711a0-1007122f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100711a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 8),param_2);
  iVar3 = (*extraout_w11)(uVar2);
  if (iVar3 != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,param_3);
  }
  return iVar3 != 0;
}


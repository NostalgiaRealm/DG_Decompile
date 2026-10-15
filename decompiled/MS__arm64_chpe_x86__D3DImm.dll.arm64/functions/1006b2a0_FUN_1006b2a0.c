/*
 * FUN_1006b2a0 at 1006b2a0
 * undefined FUN_1006b2a0(void)
 * Address ranges: 1006b2a0-1006b36b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1006b2a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(*(int *)(param_1 + 4) + 0xa70),param_2);
  uVar2 = (*extraout_w11)(uVar2);
  uVar3 = (*pcVar1)();
  uVar3 = (*extraout_w11_00)(uVar3,param_4);
  uVar2 = FUN_10058e80(*(int *)(param_1 + 4),uVar2,param_3,uVar3,param_5,param_6);
  return uVar2;
}


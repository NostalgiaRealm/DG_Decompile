/*
 * FUN_1001a670 at 1001a670
 * undefined FUN_1001a670(void)
 * Address ranges: 1001a670-1001a79b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x1e58) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x1e7c);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*extraout_w8,*puVar3,0);
  }
  if (*(int *)(param_1 + 0x1e68) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x1e90);
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*extraout_w8_00,*puVar3,0);
  }
  FUN_10037c70(param_1,param_2,param_3,1,0,param_4,0,param_5,1);
  return;
}


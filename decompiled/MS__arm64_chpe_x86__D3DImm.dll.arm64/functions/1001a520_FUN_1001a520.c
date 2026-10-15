/*
 * FUN_1001a520 at 1001a520
 * undefined FUN_1001a520(void)
 * Address ranges: 1001a520-1001a66b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a520(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
  FUN_10038c90(param_1,param_2,param_3,1,0,param_4,param_5,param_6,param_7);
  return;
}


/*
 * FUN_10040260 at 10040260
 * undefined FUN_10040260(void)
 * Address ranges: 10040260-100403c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040260(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  int extraout_w8;
  int extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  char in_stack_00000008;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xdacc) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*(undefined4 *)(extraout_w8 + 0x1ae0),
                    *(undefined4 *)(extraout_w8 + 0x1af0),0);
  }
  if (*(int *)(param_1 + 0xdadc) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*(undefined4 *)(extraout_w8_00 + 0x1b00),
                       *(undefined4 *)(extraout_w8_00 + 0x1b04),0);
  }
  if (in_stack_00000008 == '\0') {
    FUN_10065628(param_1,param_2,param_3,1,0,param_4,param_5,param_6,param_7);
  }
  else {
    FUN_10065628(param_1,param_2,param_3,1,0,param_4,param_5,param_6,param_7);
  }
  return;
}


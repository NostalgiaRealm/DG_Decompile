/*
 * FUN_10040650 at 10040650
 * undefined FUN_10040650(void)
 * Address ranges: 10040650-10040773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040650(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_50;
  undefined4 local_4c;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_4c = param_2;
  if (*(int *)(param_1 + 0xdacc) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0xdae0),*(undefined4 *)(param_1 + 0xdaf0),0);
  }
  if (*(int *)(param_1 + 0xdadc) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xdb00),*(undefined4 *)(param_1 + 0xdb04),0);
  }
  local_50 = 0;
  if (param_4 != 0) {
    local_50 = param_4 + -0x18;
  }
  FUN_10064518(param_1,local_4c,param_3,0,&local_50,param_5,param_6,param_7,0);
  return;
}


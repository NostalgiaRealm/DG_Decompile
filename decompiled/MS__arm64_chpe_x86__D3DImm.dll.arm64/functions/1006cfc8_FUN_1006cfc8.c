/*
 * FUN_1006cfc8 at 1006cfc8
 * undefined FUN_1006cfc8(void)
 * Address ranges: 1006cfc8-1006d0c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006cfc8(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_2 + 0xd8c) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    *(int *)(param_2 + 0xd8c) = 0;
  }
  if (*(int *)(param_2 + 0xd88) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
    *(int *)(param_2 + 0xd88) = 0;
  }
  if (*(int *)(param_2 + 0xd94) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2);
    *(int *)(param_2 + 0xd94) = 0;
  }
  if (*(int *)(param_2 + 0xd90) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_02)(uVar2);
    *(int *)(param_2 + 0xd90) = 0;
  }
  return;
}


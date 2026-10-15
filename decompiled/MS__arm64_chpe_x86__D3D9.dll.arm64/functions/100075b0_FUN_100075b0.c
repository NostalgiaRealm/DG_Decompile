/*
 * FUN_100075b0 at 100075b0
 * undefined FUN_100075b0(void)
 * Address ranges: 100075b0-1000766f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100075b0(int param_1,undefined1 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *extraout_w8;
  code *extraout_w11;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  for (iVar1 = *(int *)(param_1 + 0xd98); iVar1 != 0; iVar1 = iVar1 + -1) {
    (*pcVar2)();
    (*extraout_w11)(param_1,*extraout_w8,param_2);
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0xd94));
  *(undefined8 *)(param_1 + 0xd94) = 0;
  *(undefined4 *)(param_1 + 0xd9c) = 0;
  FUN_1012f790(DAT_10170ad0);
  *(undefined4 *)(param_1 + 0xdec) = 0;
  return;
}


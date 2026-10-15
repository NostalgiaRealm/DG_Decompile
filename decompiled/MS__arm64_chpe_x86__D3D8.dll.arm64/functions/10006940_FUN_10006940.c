/*
 * FUN_10006940 at 10006940
 * undefined FUN_10006940(void)
 * Address ranges: 10006940-100069ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006940(int param_1,undefined1 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *extraout_w8;
  code *extraout_w11;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  for (iVar1 = *(int *)(param_1 + 0xad4); iVar1 != 0; iVar1 = iVar1 + -1) {
    (*pcVar2)();
    (*extraout_w11)(param_1,*extraout_w8,param_2);
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 0xad0));
  *(undefined8 *)(param_1 + 0xad0) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  FUN_100fc1c0(DAT_1013ceec);
  *(undefined4 *)(param_1 + 0xb28) = 0;
  return;
}


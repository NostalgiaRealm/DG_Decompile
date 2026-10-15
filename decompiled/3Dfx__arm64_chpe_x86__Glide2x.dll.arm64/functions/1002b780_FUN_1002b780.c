/*
 * FUN_1002b780 at 1002b780
 * undefined FUN_1002b780(void)
 * Address ranges: 1002b780-1002b82b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b780(int param_1,int param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x50) == '\0') {
    param_2 = iVar1 + 0x1d58;
  }
  FUN_1006b840(*(undefined4 *)(iVar1 + 0x295c),*(undefined4 *)(param_1 + 8),param_2,iVar1 + 0x2958);
  uVar2 = FUN_1002a8d0(param_1);
  if (((uVar2 & 1) == 0) && (param_3 == '\0')) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  return;
}


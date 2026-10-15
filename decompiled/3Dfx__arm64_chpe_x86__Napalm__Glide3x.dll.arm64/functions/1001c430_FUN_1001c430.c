/*
 * FUN_1001c430 at 1001c430
 * undefined FUN_1001c430(void)
 * Address ranges: 1001c430-1001c4db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c430(int param_1,int param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x50) == '\0') {
    param_2 = iVar1 + 0x1f10;
  }
  FUN_10074b80(*(undefined4 *)(iVar1 + 0x2b14),*(undefined4 *)(param_1 + 8),param_2,iVar1 + 0x2b10);
  uVar2 = FUN_1001b580(param_1);
  if (((uVar2 & 1) == 0) && (param_3 == '\0')) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  return;
}


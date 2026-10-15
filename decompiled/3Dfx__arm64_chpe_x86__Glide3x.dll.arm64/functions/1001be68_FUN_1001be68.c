/*
 * FUN_1001be68 at 1001be68
 * undefined FUN_1001be68(void)
 * Address ranges: 1001be68-1001bf13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001be68(int param_1,int param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x50) == '\0') {
    param_2 = iVar1 + 0x1dd4;
  }
  FUN_1006f4e0(*(undefined4 *)(iVar1 + 0x29d8),*(undefined4 *)(param_1 + 8),param_2,iVar1 + 0x29d4);
  uVar2 = FUN_1001afb8(param_1);
  if (((uVar2 & 1) == 0) && (param_3 == '\0')) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  return;
}


/*
 * FUN_10027a90 at 10027a90
 * undefined FUN_10027a90(void)
 * Address ranges: 10027a90-10027b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027a90(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  if ((*(uint *)(*(int *)(param_1 + 0x18) + 0x826) >> 2 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 8);
    *param_2 = *(int *)(iVar2 + 0xa8) * *(int *)(iVar2 + 0xa0);
    iVar2 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar2 + 0xac) * *(int *)(iVar2 + 0xa4);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x76c);
    if (iVar2 == 0) {
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar2 = (*extraout_w11)(uVar1);
    }
    else {
      iVar2 = iVar2 + -1;
    }
    *param_2 = *(int *)(*(int *)(param_1 + 8) + iVar2 * 8 + 0x14);
    iVar2 = *(int *)(*(int *)(param_1 + 8) + iVar2 * 8 + 0x18);
  }
  *param_3 = iVar2;
  return;
}


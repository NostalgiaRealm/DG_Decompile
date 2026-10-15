/*
 * FUN_1001c750 at 1001c750
 * undefined FUN_1001c750(void)
 * Address ranges: 1001c750-1001c7ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c750(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,1);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,1);
  }
  *(int *)(param_1 + 0x44) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 0x48) = 0;
  if (iVar1 != 0) {
    FUN_100fed20(*(undefined4 *)(iVar1 + -4));
  }
  *(int *)(param_1 + 4) = 0;
  return;
}


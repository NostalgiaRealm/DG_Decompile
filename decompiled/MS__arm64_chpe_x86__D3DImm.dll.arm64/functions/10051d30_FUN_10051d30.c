/*
 * FUN_10051d30 at 10051d30
 * undefined FUN_10051d30(void)
 * Address ranges: 10051d30-10051ddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051d30(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x508);
  iVar2 = *piVar1;
  if (((*(char *)(param_1 + 0xa89) != '\0') && (*(char *)(param_1 + 0xa84) != '\0')) &&
     (*(int *)(param_1 + 0x14d4) != 0)) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11)(uVar4);
    uVar3 = *(uint *)(iVar5 + 0x4c);
    *(char *)(param_1 + 0xa89) = '\0';
    *piVar1 = (uVar3 & 1) << 1;
    *(uint *)(param_1 + 0x934) = *(uint *)(param_1 + 0x934) | 1;
  }
  FUN_100021d0(param_1);
  *piVar1 = iVar2;
  return;
}


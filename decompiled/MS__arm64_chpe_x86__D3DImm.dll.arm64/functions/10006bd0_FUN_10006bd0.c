/*
 * FUN_10006bd0 at 10006bd0
 * undefined FUN_10006bd0(void)
 * Address ranges: 10006bd0-10006c9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006bd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x931) == '\0') {
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar3 = (*extraout_w11)(uVar4);
      iVar1 = 0;
      if (cVar3 == '\0') {
        iVar1 = param_3;
      }
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar4 = (*pcVar2)();
      cVar3 = (*extraout_w11_00)(uVar4);
      iVar1 = 0;
      if (cVar3 == '\0') {
        iVar1 = param_3;
      }
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    *(char *)(param_1 + 0x931) = '\x01';
    param_2 = 0;
  }
  return param_2;
}


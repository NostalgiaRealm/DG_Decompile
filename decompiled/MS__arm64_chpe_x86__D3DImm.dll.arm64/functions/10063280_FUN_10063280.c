/*
 * FUN_10063280 at 10063280
 * undefined FUN_10063280(void)
 * Address ranges: 10063280-1006338b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063280(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar4;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x1efc) != '\0') {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(uVar2);
    if (((*(char *)(iVar3 + 0x7e9) != *(char *)(param_2 + 0x85)) ||
        (*(int *)(iVar3 + 0x7dc) != *(int *)(param_2 + 0x78))) ||
       (*(int *)(iVar3 + 0x7e0) != *(int *)(param_2 + 0x7c))) {
      uVar4 = 0;
      if (*(uint *)(param_1 + 0xa0) != 0) {
        do {
          uVar2 = (*pcVar1)();
          (*extraout_w11_00)(uVar2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0xa0));
      }
    }
  }
  return;
}


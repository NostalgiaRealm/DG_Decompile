/*
 * FUN_10024538 at 10024538
 * undefined FUN_10024538(void)
 * Address ranges: 10024538-10024633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024538(int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2bcb) != '\0') {
    piVar1 = (int *)(param_1 + 0x2a38);
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x31b8);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,*puVar4);
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x31bc);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,*puVar4);
    *piVar1 = *piVar1 + 1;
    if (param_2 != '\0') {
      FUN_100241f8(param_1,1);
    }
  }
  return;
}


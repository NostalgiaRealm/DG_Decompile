/*
 * FUN_10023fd0 at 10023fd0
 * undefined FUN_10023fd0(void)
 * Address ranges: 10023fd0-100240b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023fd0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  if (*(char *)(param_1 + 0x2bcb) != '\0') {
    piVar1 = (int *)(param_1 + 0x2a38);
    if (*piVar1 == 0x20) {
      FUN_10023d78(param_1,0);
    }
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x31b8);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,*puVar4);
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x31bc);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,*puVar4);
  }
  return;
}


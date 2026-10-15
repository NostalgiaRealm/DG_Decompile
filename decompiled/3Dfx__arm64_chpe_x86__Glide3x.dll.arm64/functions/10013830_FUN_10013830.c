/*
 * FUN_10013830 at 10013830
 * undefined FUN_10013830(void)
 * Address ranges: 10013830-1001392b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10013830(int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2c6b) != '\0') {
    piVar1 = (int *)(param_1 + 0x2ad8);
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x3338);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,*puVar4);
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x333c);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,*puVar4);
    *piVar1 = *piVar1 + 1;
    if (param_2 != '\0') {
      FUN_100134f0(param_1,1);
    }
  }
  return;
}


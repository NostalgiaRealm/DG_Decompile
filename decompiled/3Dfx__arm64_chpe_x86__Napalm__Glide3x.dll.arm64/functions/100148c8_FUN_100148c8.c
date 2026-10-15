/*
 * FUN_100148c8 at 100148c8
 * undefined FUN_100148c8(void)
 * Address ranges: 100148c8-100149c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100148c8(int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2db3) != '\0') {
    piVar1 = (int *)(param_1 + 0x2c18);
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x36b8);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,*puVar4);
    puVar4 = (undefined4 *)(param_1 + *piVar1 * 8 + 0x36bc);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,*puVar4);
    *piVar1 = *piVar1 + 1;
    if (param_2 != '\0') {
      FUN_10014588(param_1,1);
    }
  }
  return;
}


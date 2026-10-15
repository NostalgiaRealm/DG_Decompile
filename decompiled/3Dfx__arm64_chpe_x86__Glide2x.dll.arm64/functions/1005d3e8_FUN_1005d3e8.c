/*
 * FUN_1005d3e8 at 1005d3e8
 * undefined FUN_1005d3e8(void)
 * Address ranges: 1005d3e8-1005d467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005d3e8(undefined8 param_1,uint param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      piVar1 = (int *)(param_3 + uVar4 * 4);
      if (*piVar1 != 0) {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3);
        *piVar1 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return;
}


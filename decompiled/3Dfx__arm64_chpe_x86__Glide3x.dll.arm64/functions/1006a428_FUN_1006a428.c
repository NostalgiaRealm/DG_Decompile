/*
 * FUN_1006a428 at 1006a428
 * undefined FUN_1006a428(void)
 * Address ranges: 1006a428-1006a4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a428(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      piVar1 = (int *)(param_4 + uVar4 * 4);
      if (*piVar1 != 0) {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3);
        *piVar1 = 0;
        piVar1 = (int *)(param_5 + uVar4 * 4);
        if (*piVar1 != 0) {
          uVar3 = (*pcVar2)();
          (*extraout_w11_00)(uVar3);
          *piVar1 = 0;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}


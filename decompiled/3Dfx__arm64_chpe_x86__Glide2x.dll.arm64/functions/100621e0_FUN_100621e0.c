/*
 * FUN_100621e0 at 100621e0
 * undefined FUN_100621e0(void)
 * Address ranges: 100621e0-100622f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100621e0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  code *extraout_w11;
  uint uVar5;
  undefined1 auStack_80 [64];
  
  if (*(int *)(param_1 + 0x8e0) != 0) {
    FUN_1005f428(param_1);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar5 = 0;
    if (param_2 != 0) {
      do {
        piVar1 = (int *)(param_3 + uVar5 * 0x18);
        if (*piVar1 == 0) {
          uVar3 = (*pcVar2)();
          piVar4 = (int *)(*extraout_w11)(uVar3,auStack_80);
          FUN_100598e0(*(undefined4 *)(param_1 + 0x8e4),piVar1[2],piVar1[3],*piVar4 == 0,
                       *(int *)(param_1 + 0x8e0),param_1,piVar1[5],*(undefined8 *)(param_1 + 0x938))
          ;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_2);
    }
  }
  FUN_1005f2b0(param_1,param_2,param_3);
  return;
}


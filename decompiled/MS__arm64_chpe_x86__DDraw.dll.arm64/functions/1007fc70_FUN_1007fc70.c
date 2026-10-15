/*
 * FUN_1007fc70 at 1007fc70
 * undefined FUN_1007fc70(void)
 * Address ranges: 1007fc70-1007fd83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007fc70(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  code *extraout_w11;
  uint uVar5;
  undefined1 auStack_80 [64];
  
  if (*(int *)(param_1 + 0x8e0) != 0) {
    FUN_1007c768(param_1);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar5 = 0;
    if (param_2 != 0) {
      do {
        piVar1 = (int *)(param_3 + uVar5 * 0x18);
        if (*piVar1 == 0) {
          uVar3 = (*pcVar2)();
          piVar4 = (int *)(*extraout_w11)(uVar3,auStack_80);
          FUN_100788c8(*(undefined4 *)(param_1 + 0x8e4),piVar1[2],piVar1[3],*piVar4 == 0,
                       *(int *)(param_1 + 0x8e0),param_1,piVar1[5],*(undefined8 *)(param_1 + 0x938))
          ;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_2);
    }
  }
  FUN_1007c5f0(param_1,param_2,param_3);
  return;
}


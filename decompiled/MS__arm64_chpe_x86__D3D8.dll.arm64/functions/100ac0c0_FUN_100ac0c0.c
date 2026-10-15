/*
 * FUN_100ac0c0 at 100ac0c0
 * undefined FUN_100ac0c0(void)
 * Address ranges: 100ac0c0-100ac2d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ac0c0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                int *param_6,uint param_7)

{
  code *pcVar1;
  undefined1 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  float fVar3;
  float fVar4;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  fVar3 = (float)(*extraout_w11)(param_4);
  (*pcVar1)();
  fVar4 = (float)(*extraout_w11_00)(param_4);
  if ((fVar3 != 1.0) || (uVar2 = 0, fVar4 != 1.0)) {
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x20) = uVar2;
  if ((param_7 & 1) == 0) {
    fVar3 = 1.0;
    fVar4 = 1.0;
  }
  (*(code *)PTR_FUN_1013426c)
            (param_2 + 0x10,(int)((float)*param_6 * fVar3),(int)((float)param_6[1] * fVar4),
             (int)((float)param_6[2] * fVar3),(int)((float)param_6[3] * fVar4));
  (*pcVar1)();
  fVar3 = (float)(*extraout_w11_01)(param_3);
  (*pcVar1)();
  fVar4 = (float)(*extraout_w11_02)(param_3);
  if ((fVar3 != 1.0) || (uVar2 = 0, fVar4 != 1.0)) {
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x21) = uVar2;
  if ((param_7 & 2) == 0) {
    fVar3 = 1.0;
    fVar4 = 1.0;
  }
  (*(code *)PTR_FUN_1013426c)
            (param_2,(int)((float)*param_5 * fVar3),(int)((float)param_5[1] * fVar4),
             (int)((float)param_5[2] * fVar3),(int)((float)param_5[3] * fVar4));
  return param_2;
}


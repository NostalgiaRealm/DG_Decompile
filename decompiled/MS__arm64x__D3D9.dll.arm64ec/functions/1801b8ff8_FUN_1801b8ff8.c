/*
 * FUN_1801b8ff8 at 1801b8ff8
 * undefined FUN_1801b8ff8(void)
 * Address ranges: 1801b8ff8-1801b919f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801b8ff8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      int *param_5,int *param_6,uint param_7)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  float fVar3;
  float fVar4;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  fVar3 = (float)(*extraout_x11)(param_4);
  (*(code *)puVar1)(0x180224000);
  fVar4 = (float)(*extraout_x11_00)(param_4);
  if ((fVar3 != 1.0) || (uVar2 = 0, fVar4 != 1.0)) {
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x20) = uVar2;
  if ((param_7 & 1) == 0) {
    fVar4 = 1.0;
    fVar3 = 1.0;
  }
  thunk_FUN_180223c20(param_2 + 0x10,(int)((float)*param_6 * fVar3),(int)((float)param_6[1] * fVar4)
                      ,(int)((float)param_6[2] * fVar3),(int)((float)param_6[3] * fVar4));
  (*(code *)puVar1)(0x180224000);
  fVar3 = (float)(*extraout_x11_01)(param_3);
  (*(code *)puVar1)(0x180224000);
  fVar4 = (float)(*extraout_x11_02)(param_3);
  if ((fVar3 != 1.0) || (uVar2 = 0, fVar4 != 1.0)) {
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x21) = uVar2;
  if ((param_7 & 2) == 0) {
    fVar4 = 1.0;
    fVar3 = 1.0;
  }
  thunk_FUN_180223c20(param_2,(int)((float)*param_5 * fVar3),(int)((float)param_5[1] * fVar4),
                      (int)((float)param_5[2] * fVar3),(int)((float)param_5[3] * fVar4));
  return param_2;
}


/*
 * FUN_1800a0ee0 at 1800a0ee0
 * undefined FUN_1800a0ee0(void)
 * Address ranges: 1800a0ee0-1800a1057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800a0ee0(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      int *param_5,int *param_6,uint param_7)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(**(code **)(*param_4 + 0x58))(param_4);
  fVar3 = (float)(**(code **)(*param_4 + 0x60))(param_4);
  if ((fVar2 != 1.0) || (uVar1 = 0, fVar3 != 1.0)) {
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0x20) = uVar1;
  if ((param_7 & 1) == 0) {
    fVar3 = 1.0;
    fVar2 = 1.0;
  }
  (*__imp_USER32_dll_SetRect)
            (param_2 + 0x10,(int)((float)*param_6 * fVar2),(int)((float)param_6[1] * fVar3),
             (int)((float)param_6[2] * fVar2),(int)((float)param_6[3] * fVar3));
  fVar2 = (float)(**(code **)(*param_3 + 0x58))(param_3);
  fVar3 = (float)(**(code **)(*param_3 + 0x60))(param_3);
  if ((fVar2 != 1.0) || (uVar1 = 0, fVar3 != 1.0)) {
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0x21) = uVar1;
  if ((param_7 & 2) == 0) {
    fVar3 = 1.0;
    fVar2 = 1.0;
  }
  (*__imp_USER32_dll_SetRect)
            (param_2,(int)((float)*param_5 * fVar2),(int)((float)param_5[1] * fVar3),
             (int)((float)param_5[2] * fVar2),(int)((float)param_5[3] * fVar3));
  return param_2;
}


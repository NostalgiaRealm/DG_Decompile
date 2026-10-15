/*
 * FUN_1800aab5c at 1800aab5c
 * LPRECT __fastcall FUN_1800aab5c(undefined8 param_1, LPRECT param_2, longlong * param_3, longlong * param_4, int * param_5, int * param_6, byte param_7)
 * Address ranges: 1800aab5c-1800aacca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_1800aab5c(undefined8 param_1,LPRECT param_2,longlong *param_3,longlong *param_4,
                    int *param_5,int *param_6,byte param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)(**(code **)(*param_4 + 0x58))(param_4);
  fVar4 = (float)(**(code **)(*param_4 + 0x60))(param_4);
  uVar2 = 1;
  if ((fVar3 == 1.0) && (fVar4 == 1.0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)&param_2[2].left = uVar1;
  if ((param_7 & 1) == 0) {
    fVar4 = 1.0;
    fVar3 = 1.0;
  }
  SetRect(param_2 + 1,(int)((float)*param_6 * fVar3),(int)((float)param_6[1] * fVar4),
          (int)((float)param_6[2] * fVar3),(int)((float)param_6[3] * fVar4));
  fVar4 = (float)(**(code **)(*param_3 + 0x58))(param_3);
  fVar3 = (float)(**(code **)(*param_3 + 0x60))(param_3);
  if ((fVar4 == 1.0) && (fVar3 == 1.0)) {
    uVar2 = 0;
  }
  *(undefined1 *)((longlong)&param_2[2].left + 1) = uVar2;
  if ((param_7 & 2) == 0) {
    fVar4 = 1.0;
    fVar3 = 1.0;
  }
  SetRect(param_2,(int)((float)*param_5 * fVar4),(int)((float)param_5[1] * fVar3),
          (int)((float)param_5[2] * fVar4),(int)((float)param_5[3] * fVar3));
  return param_2;
}


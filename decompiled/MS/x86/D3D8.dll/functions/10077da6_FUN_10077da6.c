/*
 * FUN_10077da6 at 10077da6
 * LPRECT __stdcall FUN_10077da6(LPRECT param_1, int * param_2, int * param_3, int * param_4, int * param_5, byte param_6)
 * Address ranges: 10077da6-10077ef4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_10077da6(LPRECT param_1,int *param_2,int *param_3,int *param_4,int *param_5,byte param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (float10)(**(code **)(*param_3 + 0x2c))();
  fVar4 = (float10)(**(code **)(*param_3 + 0x30))();
  fVar5 = (float)fVar4;
  uVar2 = 1;
  if (((float)fVar3 == 1.0) && (fVar5 == 1.0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)&param_1[2].left = uVar1;
  fVar6 = (float)fVar3;
  if ((param_6 & 1) == 0) {
    fVar5 = 1.0;
    fVar6 = fVar5;
  }
  SetRect(param_1 + 1,(int)((float)*param_5 * fVar6),(int)((float)param_5[1] * fVar5),
          (int)((float)param_5[2] * fVar6),(int)((float)param_5[3] * fVar5));
  fVar3 = (float10)(**(code **)(*param_2 + 0x2c))();
  fVar4 = (float10)(**(code **)(*param_2 + 0x30))();
  fVar5 = (float)fVar4;
  if (((float)fVar3 == 1.0) && (fVar5 == 1.0)) {
    uVar2 = 0;
  }
  *(undefined1 *)((int)&param_1[2].left + 1) = uVar2;
  fVar6 = (float)fVar3;
  if ((param_6 & 2) == 0) {
    fVar5 = 1.0;
    fVar6 = fVar5;
  }
  SetRect(param_1,(int)((float)*param_4 * fVar6),(int)((float)param_4[1] * fVar5),
          (int)((float)param_4[2] * fVar6),(int)((float)param_4[3] * fVar5));
  return param_1;
}


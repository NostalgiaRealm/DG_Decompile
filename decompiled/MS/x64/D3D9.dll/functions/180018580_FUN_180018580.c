/*
 * FUN_180018580 at 180018580
 * int * __fastcall FUN_180018580(int * param_1, int * param_2, int * param_3)
 * Address ranges: 180018580-18001863d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_180018580(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = *param_1;
  iVar2 = param_1[3];
  if ((((iVar1 < iVar2) && (param_1[1] < param_1[4])) && (param_1[2] < param_1[5])) &&
     (((iVar3 = param_3[3], *param_3 < iVar3 && (param_3[1] < param_3[4])) &&
      (param_3[2] < param_3[5])))) {
    piVar8 = param_1;
    if (param_3[5] < param_1[5]) {
      piVar8 = param_3;
    }
    iVar4 = piVar8[5];
    piVar8 = param_1;
    if (param_3[4] < param_1[4]) {
      piVar8 = param_3;
    }
    iVar5 = piVar8[4];
    piVar8 = param_1;
    if (param_1[2] < param_3[2]) {
      piVar8 = param_3;
    }
    if (param_1[1] < param_3[1]) {
      param_1 = param_3;
    }
    if (iVar1 < *param_3) {
      iVar1 = *param_3;
    }
    iVar6 = piVar8[2];
    iVar7 = param_1[1];
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    *param_2 = iVar1;
    param_2[1] = iVar7;
    param_2[2] = iVar6;
    param_2[3] = iVar2;
    param_2[4] = iVar5;
    param_2[5] = iVar4;
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  return param_2;
}


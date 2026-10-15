/*
 * FUN_18000f1f8 at 18000f1f8
 * undefined FUN_18000f1f8(void)
 * Address ranges: 18000f1f8-18000f2b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_18000f1f8(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = *param_1;
  iVar3 = param_1[3];
  if (iVar2 < iVar3) {
    if (param_1[1] < param_1[4]) {
      if (param_1[2] < param_1[5]) {
        iVar4 = *param_3;
        iVar5 = param_3[3];
        if (iVar4 < iVar5) {
          if (param_3[1] < param_3[4]) {
            if (param_3[2] < param_3[5]) {
              piVar1 = param_3;
              if (param_1[5] <= param_3[5]) {
                piVar1 = param_1;
              }
              iVar6 = piVar1[5];
              piVar1 = param_3;
              if (param_1[4] <= param_3[4]) {
                piVar1 = param_1;
              }
              iVar7 = piVar1[4];
              piVar1 = param_3;
              if (param_3[2] <= param_1[2]) {
                piVar1 = param_1;
              }
              if (param_3[1] <= param_1[1]) {
                param_3 = param_1;
              }
              iVar8 = piVar1[2];
              iVar9 = param_3[1];
              if (iVar4 <= iVar2) {
                iVar4 = iVar2;
              }
              *param_2 = iVar4;
              param_2[1] = iVar9;
              if (iVar3 <= iVar5) {
                iVar5 = iVar3;
              }
              param_2[2] = iVar8;
              param_2[3] = iVar5;
              param_2[4] = iVar7;
              param_2[5] = iVar6;
              return param_2;
            }
          }
        }
      }
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_2;
}


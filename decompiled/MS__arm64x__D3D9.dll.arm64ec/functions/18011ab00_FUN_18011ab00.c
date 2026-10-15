/*
 * FUN_18011ab00 at 18011ab00
 * undefined FUN_18011ab00(void)
 * Address ranges: 18011ab00-18011abcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011ab00(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = *param_1;
  iVar4 = param_1[3];
  if (iVar3 < iVar4) {
    if (param_1[1] < param_1[4]) {
      if (param_1[2] < param_1[5]) {
        iVar5 = *param_3;
        iVar6 = param_3[3];
        if (iVar5 < iVar6) {
          if (param_3[1] < param_3[4]) {
            if (param_3[2] < param_3[5]) {
              piVar2 = param_3;
              if (param_1[5] <= param_3[5]) {
                piVar2 = param_1;
              }
              piVar1 = param_3;
              if (param_1[4] <= param_3[4]) {
                piVar1 = param_1;
              }
              iVar7 = piVar2[5];
              iVar8 = piVar1[4];
              piVar2 = param_3;
              if (param_3[2] <= param_1[2]) {
                piVar2 = param_1;
              }
              if (param_3[1] <= param_1[1]) {
                param_3 = param_1;
              }
              iVar9 = piVar2[2];
              iVar10 = param_3[1];
              if (iVar5 <= iVar3) {
                iVar5 = iVar3;
              }
              *param_2 = iVar5;
              param_2[1] = iVar10;
              if (iVar4 <= iVar6) {
                iVar6 = iVar4;
              }
              param_2[2] = iVar9;
              param_2[3] = iVar6;
              param_2[4] = iVar8;
              param_2[5] = iVar7;
              return;
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
  return;
}


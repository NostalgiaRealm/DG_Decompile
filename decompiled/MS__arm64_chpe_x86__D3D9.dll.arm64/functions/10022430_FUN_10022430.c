/*
 * FUN_10022430 at 10022430
 * undefined FUN_10022430(void)
 * Address ranges: 10022430-1002253f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10022430(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar1 = *param_1;
  iVar2 = param_1[3];
  if (iVar1 < iVar2) {
    iVar3 = param_1[4];
    iVar4 = param_1[1];
    if (iVar4 < iVar3) {
      iVar5 = param_1[5];
      iVar6 = param_1[2];
      if (iVar6 < iVar5) {
        iVar7 = *param_3;
        iVar8 = param_3[3];
        if (iVar7 < iVar8) {
          iVar9 = param_3[4];
          iVar10 = param_3[1];
          if (iVar10 < iVar9) {
            iVar11 = param_3[5];
            iVar12 = param_3[2];
            if (iVar12 < iVar11) {
              if (iVar7 <= iVar1) {
                iVar7 = iVar1;
              }
              if (iVar10 <= iVar4) {
                iVar10 = iVar4;
              }
              *param_2 = iVar7;
              param_2[1] = iVar10;
              if (iVar12 <= iVar6) {
                iVar12 = iVar6;
              }
              if (iVar2 <= iVar8) {
                iVar8 = iVar2;
              }
              param_2[2] = iVar12;
              if (iVar3 <= iVar9) {
                iVar9 = iVar3;
              }
              param_2[3] = iVar8;
              if (iVar5 <= iVar11) {
                iVar11 = iVar5;
              }
              param_2[4] = iVar9;
              param_2[5] = iVar11;
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


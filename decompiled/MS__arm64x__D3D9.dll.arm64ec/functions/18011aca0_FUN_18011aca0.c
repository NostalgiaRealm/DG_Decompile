/*
 * FUN_18011aca0 at 18011aca0
 * undefined FUN_18011aca0(void)
 * Address ranges: 18011aca0-18011ad43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_18011aca0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar5 = *param_1;
  iVar6 = param_1[3];
  if (iVar5 < iVar6) {
    if (param_1[1] < param_1[4]) {
      if (param_1[2] < param_1[5]) {
        piVar3 = param_3;
        if (param_3[5] <= param_1[5]) {
          piVar3 = param_1;
        }
        piVar2 = param_3;
        if (param_3[4] <= param_1[4]) {
          piVar2 = param_1;
        }
        iVar7 = piVar3[5];
        iVar8 = piVar2[4];
        iVar4 = param_3[3];
        piVar3 = param_3;
        if (param_1[2] <= param_3[2]) {
          piVar3 = param_1;
        }
        iVar9 = piVar3[2];
        piVar3 = param_3;
        if (param_1[1] <= param_3[1]) {
          piVar3 = param_1;
        }
        iVar10 = piVar3[1];
        iVar1 = *param_3;
        if (iVar5 <= *param_3) {
          iVar1 = iVar5;
        }
        *param_2 = iVar1;
        param_2[1] = iVar10;
        if (iVar4 <= iVar6) {
          iVar4 = iVar6;
        }
        param_2[2] = iVar9;
        param_2[3] = iVar4;
        param_2[4] = iVar8;
        param_2[5] = iVar7;
        return param_2;
      }
    }
  }
  uVar12 = *(undefined8 *)param_3;
  uVar11 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = uVar12;
  *(undefined8 *)(param_2 + 4) = uVar11;
  return param_2;
}


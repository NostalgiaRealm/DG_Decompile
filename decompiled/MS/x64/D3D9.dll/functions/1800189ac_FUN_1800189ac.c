/*
 * FUN_1800189ac at 1800189ac
 * int * __fastcall FUN_1800189ac(int * param_1, int * param_2, int * param_3)
 * Address ranges: 1800189ac-180018a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1800189ac(int *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  
  iVar2 = *param_1;
  iVar3 = param_1[3];
  if (iVar2 < iVar3) {
    if (param_1[1] < param_1[4]) {
      if (param_1[2] < param_1[5]) {
        piVar9 = param_1;
        if (param_1[5] < param_3[5]) {
          piVar9 = param_3;
        }
        iVar4 = piVar9[5];
        piVar9 = param_1;
        if (param_1[4] < param_3[4]) {
          piVar9 = param_3;
        }
        iVar5 = piVar9[4];
        piVar9 = param_1;
        if (param_3[2] < param_1[2]) {
          piVar9 = param_3;
        }
        if (param_3[1] < param_1[1]) {
          param_1 = param_3;
        }
        if (*param_3 < iVar2) {
          iVar2 = *param_3;
        }
        iVar6 = piVar9[2];
        iVar7 = param_1[1];
        if (iVar3 < param_3[3]) {
          iVar3 = param_3[3];
        }
        *param_2 = iVar2;
        param_2[1] = iVar7;
        param_2[2] = iVar6;
        param_2[3] = iVar3;
        param_2[4] = iVar5;
        param_2[5] = iVar4;
        return param_2;
      }
    }
  }
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar1 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 2) = uVar8;
  *(undefined8 *)(param_2 + 4) = uVar1;
  return param_2;
}


/*
 * FUN_18000f2e0 at 18000f2e0
 * undefined FUN_18000f2e0(void)
 * Address ranges: 18000f2e0-18000f383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_18000f2e0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar4 = *param_1;
  iVar5 = param_1[3];
  if (iVar4 < iVar5) {
    if (param_1[1] < param_1[4]) {
      if (param_1[2] < param_1[5]) {
        piVar2 = param_3;
        if (param_3[5] <= param_1[5]) {
          piVar2 = param_1;
        }
        iVar6 = piVar2[5];
        piVar2 = param_3;
        if (param_3[4] <= param_1[4]) {
          piVar2 = param_1;
        }
        iVar7 = piVar2[4];
        iVar3 = param_3[3];
        piVar2 = param_3;
        if (param_1[2] <= param_3[2]) {
          piVar2 = param_1;
        }
        iVar8 = piVar2[2];
        piVar2 = param_3;
        if (param_1[1] <= param_3[1]) {
          piVar2 = param_1;
        }
        iVar9 = piVar2[1];
        iVar1 = *param_3;
        if (iVar4 <= *param_3) {
          iVar1 = iVar4;
        }
        *param_2 = iVar1;
        param_2[1] = iVar9;
        if (iVar3 <= iVar5) {
          iVar3 = iVar5;
        }
        param_2[2] = iVar8;
        param_2[3] = iVar3;
        param_2[4] = iVar7;
        param_2[5] = iVar6;
        return param_2;
      }
    }
  }
  uVar11 = *(undefined8 *)param_3;
  uVar10 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = uVar11;
  *(undefined8 *)(param_2 + 4) = uVar10;
  return param_2;
}


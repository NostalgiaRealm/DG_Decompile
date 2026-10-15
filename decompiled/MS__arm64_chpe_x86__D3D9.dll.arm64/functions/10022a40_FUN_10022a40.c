/*
 * FUN_10022a40 at 10022a40
 * undefined FUN_10022a40(void)
 * Address ranges: 10022a40-10022b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10022a40(int *param_1,int *param_2,int *param_3)

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
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar2 = *param_1;
  iVar3 = param_1[3];
  if (iVar2 < iVar3) {
    iVar4 = param_1[4];
    iVar5 = param_1[1];
    if (iVar5 < iVar4) {
      iVar6 = param_1[5];
      iVar7 = param_1[2];
      if (iVar7 < iVar6) {
        iVar8 = param_3[4];
        iVar9 = param_3[3];
        iVar10 = param_3[2];
        iVar11 = param_3[5];
        iVar1 = *param_3;
        if (iVar2 <= *param_3) {
          iVar1 = iVar2;
        }
        iVar2 = param_3[1];
        if (iVar5 <= param_3[1]) {
          iVar2 = iVar5;
        }
        *param_2 = iVar1;
        param_2[1] = iVar2;
        if (iVar7 <= iVar10) {
          iVar10 = iVar7;
        }
        param_2[2] = iVar10;
        if (iVar9 <= iVar3) {
          iVar9 = iVar3;
        }
        param_2[3] = iVar9;
        if (iVar8 <= iVar4) {
          iVar8 = iVar4;
        }
        if (iVar11 <= iVar6) {
          iVar11 = iVar6;
        }
        param_2[4] = iVar8;
        param_2[5] = iVar11;
        return param_2;
      }
    }
  }
  uVar13 = *(undefined8 *)param_3;
  uVar12 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = uVar13;
  *(undefined8 *)(param_2 + 4) = uVar12;
  return param_2;
}


/*
 * FUN_10046d60 at 10046d60
 * undefined FUN_10046d60(void)
 * Address ranges: 10046d60-10046fb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10046d60(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  piVar8 = (int *)0x0;
  if (*(char *)((int)param_1 + 0x42) == '\0') {
    do {
      iVar6 = param_1[0xc];
      uVar1 = param_1[0xd];
      if (iVar6 == 0) {
        piVar5 = param_1 + 4;
        if (uVar1 == 0) goto LAB_10046dd0;
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        if (uVar1 < *(uint *)(iVar6 + 8)) {
          piVar5 = (int *)(iVar6 + (uVar1 + 2) * 0x10);
LAB_10046dd0:
          piVar8 = piVar5;
          iVar7 = 1;
        }
      }
      param_1[0xd] = uVar1 + 1;
      if (iVar7 == 0) {
        return 0;
      }
      iVar6 = (*(code *)PTR_FUN_100ba244)(param_2,piVar8,param_1 + 8);
      if (iVar6 != 0) {
        iVar6 = param_1[4];
        iVar2 = param_1[2];
        fVar11 = (float)*param_1;
        iVar3 = iVar2 - *param_1;
        fVar10 = (float)((*param_2 - iVar6) * iVar3) / (float)(param_1[6] - iVar6) + fVar11;
        fVar9 = (float)((param_2[2] - iVar6) * iVar3) / (float)(param_1[6] - iVar6) + fVar11;
        if ((char)param_1[0x10] == '\0') {
          param_2[4] = (int)fVar10;
        }
        else {
          param_2[4] = (int)(((float)iVar2 - fVar10) + fVar11);
          fVar9 = (float)(param_1[2] + *param_1) - fVar9;
        }
        param_2[6] = (int)fVar9;
        iVar6 = param_1[5];
        iVar2 = param_1[3];
        iVar3 = param_1[1];
        iVar4 = iVar2 - iVar3;
        fVar11 = (float)iVar3;
        fVar10 = (float)((param_2[1] - iVar6) * iVar4) / (float)(param_1[7] - iVar6) + fVar11;
        fVar9 = (float)((param_2[3] - iVar6) * iVar4) / (float)(param_1[7] - iVar6) + fVar11;
        if (*(char *)((int)param_1 + 0x41) == '\0') {
          param_2[5] = (int)fVar10;
        }
        else {
          param_2[5] = (int)(((float)iVar2 - fVar10) + fVar11);
          fVar9 = (float)(param_1[3] + param_1[1]) - fVar9;
        }
        param_2[7] = (int)fVar9;
        (*(code *)PTR_FUN_100ba26c)(param_2,param_1[0xe],param_1[0xf]);
        return iVar7;
      }
    } while (*(char *)((int)param_1 + 0x42) == '\0');
  }
  return 0;
}


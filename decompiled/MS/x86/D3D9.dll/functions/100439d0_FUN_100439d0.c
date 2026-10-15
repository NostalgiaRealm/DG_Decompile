/*
 * FUN_100439d0 at 100439d0
 * undefined __stdcall FUN_100439d0(int * param_1, int * param_2, uint param_3, int param_4, char param_5)
 * Address ranges: 100439d0-10043aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100439d0(int *param_1,int *param_2,uint param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  
  if (param_5 == '\0') {
    for (uVar9 = param_3 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      iVar1 = *param_1;
      sVar5 = *(short *)((int)param_1 + 2);
      iVar2 = param_1[1];
      sVar6 = *(short *)((int)param_1 + 6);
      iVar3 = param_1[2];
      sVar7 = *(short *)((int)param_1 + 10);
      iVar4 = param_1[3];
      sVar8 = *(short *)((int)param_1 + 0xe);
      param_1 = param_1 + 4;
      *(short *)param_2 = (short)iVar1 + (short)param_4;
      *(short *)((int)param_2 + 2) = sVar5 + (short)param_4;
      *(short *)(param_2 + 1) = (short)iVar2 + (short)param_4;
      *(short *)((int)param_2 + 6) = sVar6 + (short)param_4;
      *(short *)(param_2 + 2) = (short)iVar3 + (short)param_4;
      *(short *)((int)param_2 + 10) = sVar7 + (short)param_4;
      *(short *)(param_2 + 3) = (short)iVar4 + (short)param_4;
      *(short *)((int)param_2 + 0xe) = sVar8 + (short)param_4;
      param_2 = param_2 + 4;
    }
    uVar9 = 0;
    if ((param_3 & 7) != 0) {
      do {
        *(short *)((int)param_2 + uVar9 * 2) = *(short *)((int)param_1 + uVar9 * 2) + (short)param_4
        ;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (param_3 & 7));
    }
  }
  else {
    for (uVar9 = param_3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      iVar1 = *param_1;
      iVar2 = param_1[1];
      iVar3 = param_1[2];
      iVar4 = param_1[3];
      param_1 = param_1 + 4;
      *param_2 = iVar1 + param_4;
      param_2[1] = iVar2 + param_4;
      param_2[2] = iVar3 + param_4;
      param_2[3] = iVar4 + param_4;
      param_2 = param_2 + 4;
    }
    uVar9 = 0;
    if ((param_3 & 3) != 0) {
      do {
        param_2[uVar9] = param_1[uVar9] + param_4;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (param_3 & 3));
      return;
    }
  }
  return;
}


/*
 * FUN_18004b730 at 18004b730
 * undefined __fastcall FUN_18004b730(undefined8 param_1, int * param_2, int * param_3, uint param_4, int param_5, char param_6)
 * Address ranges: 18004b730-18004b81c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b730(undefined8 param_1,int *param_2,int *param_3,uint param_4,int param_5,
                  char param_6)

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
  ulonglong uVar10;
  
  if (param_6 == '\0') {
    for (uVar9 = param_4 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      iVar1 = *param_2;
      sVar5 = *(short *)((longlong)param_2 + 2);
      iVar2 = param_2[1];
      sVar6 = *(short *)((longlong)param_2 + 6);
      iVar3 = param_2[2];
      sVar7 = *(short *)((longlong)param_2 + 10);
      iVar4 = param_2[3];
      sVar8 = *(short *)((longlong)param_2 + 0xe);
      param_2 = param_2 + 4;
      *(short *)param_3 = (short)iVar1 + (short)param_5;
      *(short *)((longlong)param_3 + 2) = sVar5 + (short)param_5;
      *(short *)(param_3 + 1) = (short)iVar2 + (short)param_5;
      *(short *)((longlong)param_3 + 6) = sVar6 + (short)param_5;
      *(short *)(param_3 + 2) = (short)iVar3 + (short)param_5;
      *(short *)((longlong)param_3 + 10) = sVar7 + (short)param_5;
      *(short *)(param_3 + 3) = (short)iVar4 + (short)param_5;
      *(short *)((longlong)param_3 + 0xe) = sVar8 + (short)param_5;
      param_3 = param_3 + 4;
    }
    uVar10 = 0;
    if ((param_4 & 7) != 0) {
      do {
        uVar9 = (int)uVar10 + 1;
        *(short *)((longlong)param_3 + uVar10 * 2) =
             (short)param_5 + *(short *)((longlong)param_2 + uVar10 * 2);
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < (param_4 & 7));
      return;
    }
  }
  else {
    for (uVar9 = param_4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      iVar1 = *param_2;
      iVar2 = param_2[1];
      iVar3 = param_2[2];
      iVar4 = param_2[3];
      param_2 = param_2 + 4;
      *param_3 = iVar1 + param_5;
      param_3[1] = iVar2 + param_5;
      param_3[2] = iVar3 + param_5;
      param_3[3] = iVar4 + param_5;
      param_3 = param_3 + 4;
    }
    uVar10 = 0;
    if ((param_4 & 3) != 0) {
      do {
        uVar9 = (int)uVar10 + 1;
        param_3[uVar10] = param_2[uVar10] + param_5;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < (param_4 & 3));
    }
  }
  return;
}


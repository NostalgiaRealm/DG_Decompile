/*
 * FUN_100056d2 at 100056d2
 * undefined __stdcall FUN_100056d2(int param_1, int param_2, byte * param_3, byte * param_4, int param_5, int param_6, int param_7, int param_8)
 * Address ranges: 100056d2-100057ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100056d2(int param_1,int param_2,byte *param_3,byte *param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  pbVar1 = param_4;
  for (; param_6 != 0; param_6 = param_6 + -1) {
    if (*(int *)(pbVar1 + 4) == 3) {
      if (param_5 != 0) {
        param_4 = (byte *)param_5;
        iVar2 = param_1;
        iVar3 = param_2;
        do {
          *(undefined1 *)(iVar3 + (uint)*pbVar1) = *(undefined1 *)(iVar2 + (uint)*param_3);
          *(undefined1 *)(iVar3 + (uint)pbVar1[1]) = *(undefined1 *)(iVar2 + (uint)param_3[1]);
          *(undefined1 *)(iVar3 + (uint)pbVar1[2]) = *(undefined1 *)(iVar2 + (uint)param_3[2]);
          iVar2 = iVar2 + *(int *)(param_3 + 4);
          iVar3 = iVar3 + *(int *)(pbVar1 + 4);
          param_4 = param_4 + -1;
        } while (param_4 != (byte *)0x0);
      }
    }
    else if (param_5 != 0) {
      param_4 = (byte *)param_5;
      iVar2 = param_1;
      iVar3 = param_2;
      do {
        *(undefined1 *)(iVar3 + (uint)*pbVar1) = *(undefined1 *)(iVar2 + (uint)*param_3);
        *(undefined1 *)(iVar3 + (uint)pbVar1[1]) = *(undefined1 *)(iVar2 + (uint)param_3[1]);
        *(undefined1 *)(iVar3 + (uint)pbVar1[2]) = *(undefined1 *)(iVar2 + (uint)param_3[2]);
        *(undefined1 *)(iVar3 + (uint)pbVar1[3]) = *(undefined1 *)(iVar2 + (uint)param_3[3]);
        iVar2 = iVar2 + *(int *)(param_3 + 4);
        iVar3 = iVar3 + *(int *)(pbVar1 + 4);
        param_4 = param_4 + -1;
      } while (param_4 != (byte *)0x0);
    }
    param_1 = param_1 + param_7;
    param_2 = param_2 + param_8;
  }
  return;
}


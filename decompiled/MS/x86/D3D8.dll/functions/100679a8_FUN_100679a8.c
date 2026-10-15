/*
 * FUN_100679a8 at 100679a8
 * int * __stdcall FUN_100679a8(int * param_1, int * param_2, int * param_3, byte param_4, undefined4 param_5, byte param_6, undefined4 param_7, int * param_8, int * param_9)
 * Address ranges: 100679a8-10067a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100679a8(int *param_1,int *param_2,int *param_3,byte param_4,undefined4 param_5,
                  byte param_6,undefined4 param_7,int *param_8,int *param_9)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  LPRECT ptVar5;
  undefined1 local_40 [20];
  tagRECT local_2c [2];
  
  *param_1 = (int)(param_3 + 0x12);
  param_1[1] = (int)(param_2 + 0x12);
  iVar3 = param_3[0x16];
  if (iVar3 == 0) {
    iVar3 = param_3[0x15];
  }
  param_1[2] = iVar3;
  piVar2 = (int *)param_2[0x16];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)param_2[0x15];
  }
  param_1[3] = (int)piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x28))(piVar2,local_40);
  param_1[6] = *(int *)(iVar3 + 0x20);
  iVar3 = (**(code **)(*(int *)param_1[2] + 0x28))((int *)param_1[2],local_40);
  param_1[5] = *(int *)(iVar3 + 0x20);
  param_1[4] = 3;
  uVar4 = FUN_1005f018(param_2,param_3);
  *(char *)(param_1 + 0x12) = (char)uVar4;
  uVar1 = FUN_100306bf(param_3[0xd]);
  *(undefined1 *)((int)param_1 + 0x4b) = uVar1;
  ptVar5 = FUN_10077da6(local_2c,param_2,param_3,param_8,param_9,(byte)param_1[4]);
  piVar2 = param_1 + 9;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = ptVar5->left;
    ptVar5 = (LPRECT)&ptVar5->top;
    piVar2 = piVar2 + 1;
  }
  piVar2 = param_1 + 0xd;
  FUN_100678d4((int)param_1,param_4,piVar2,param_6,piVar2,param_1 + 9,piVar2);
  return param_1;
}


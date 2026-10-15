/*
 * FUN_100041f0 at 100041f0
 * undefined FUN_100041f0(void)
 * Address ranges: 100041f0-10004297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100041f0(undefined8 param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_20 [8];
  int local_18;
  int iStack_14;
  
  iVar1 = param_3[6];
  if (param_3[6] == 0) {
    iVar1 = param_4;
  }
  (*(code *)PTR_FUN_101341b8)(iVar1,auStack_20);
  iVar1 = *param_3;
  if (*param_3 == 0) {
    iVar1 = local_18;
  }
  uVar7 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)(param_3 + 6);
  uVar5 = *(undefined8 *)(param_3 + 4);
  iVar2 = param_3[1];
  if (param_3[1] == 0) {
    iVar2 = iStack_14;
  }
  iVar3 = param_3[0xc];
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = uVar7;
  *(undefined8 *)(param_2 + 6) = uVar6;
  *(undefined8 *)(param_2 + 4) = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 8) = uVar5;
  param_2[0xc] = iVar3;
  param_2[1] = iVar2;
  uVar4 = param_3[3];
  *param_2 = iVar1;
  if (3 < uVar4) {
    param_2[3] = 3;
  }
  return param_2;
}


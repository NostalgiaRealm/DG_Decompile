/*
 * FUN_10004b10 at 10004b10
 * undefined FUN_10004b10(void)
 * Address ranges: 10004b10-10004bcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10004b10(undefined8 param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  int local_18;
  int iStack_14;
  
  iVar1 = param_3[7];
  if (param_3[7] == 0) {
    iVar1 = param_4;
  }
  (*(code *)PTR_FUN_1016c1b8)(iVar1,auStack_20);
  iVar1 = *param_3;
  if (*param_3 == 0) {
    iVar1 = local_18;
  }
  uVar6 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)(param_3 + 6);
  uVar4 = *(undefined8 *)(param_3 + 4);
  iVar2 = param_3[1];
  if (param_3[1] == 0) {
    iVar2 = iStack_14;
  }
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = uVar6;
  *(undefined8 *)(param_2 + 6) = uVar5;
  *(undefined8 *)(param_2 + 4) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 8) = uVar4;
  *(undefined8 *)(param_2 + 0xc) = uVar3;
  param_2[1] = iVar2;
  iVar2 = param_3[2];
  *param_2 = iVar1;
  if (iVar2 == 0) {
    param_2[2] = 0x15;
  }
  if (3 < (uint)param_3[3]) {
    param_2[3] = 3;
  }
  return param_2;
}


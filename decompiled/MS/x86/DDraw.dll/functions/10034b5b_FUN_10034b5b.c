/*
 * FUN_10034b5b at 10034b5b
 * undefined4 __stdcall FUN_10034b5b(int param_1, int * param_2, int * param_3, undefined * param_4, undefined4 param_5)
 * Address ranges: 10034b5b-10034c6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10034b5b(int param_1,int *param_2,int *param_3,undefined *param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_ec [27];
  int local_80 [31];
  
  piVar1 = param_3;
  piVar5 = local_80;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar5 = piVar5 + 1;
  }
  FUN_10031887(local_80,local_ec);
  piVar1 = param_2;
  iVar3 = 0;
  do {
    iVar4 = 0;
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_10062380)[iVar3]) goto LAB_10034ba8;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_10034bbd;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10034bf7:
    iVar4 = 0;
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_100623a0)[iVar3]) goto LAB_10034c30;
  }
  if (param_2 == (int *)0x0) goto LAB_10034c58;
  puVar6 = &DAT_100623f0;
LAB_10034c1d:
  iVar3 = *param_2;
  param_2 = (int *)0x0;
  iVar3 = (**(code **)(iVar3 + 0x34))(puVar6,&param_2,0);
  if (iVar3 < 0) {
    return 0x80004005;
  }
  piVar1 = local_80;
  piVar5 = param_2;
  goto LAB_10034c60;
LAB_10034c30:
  do {
    if (*(int *)(param_1 + iVar4 * 4) != (&DAT_100623b0)[iVar4]) {
      return 0x80004005;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_10062400;
    goto LAB_10034c1d;
  }
LAB_10034c58:
  piVar1 = local_80;
  goto LAB_10034c5b;
  while (iVar4 = iVar4 + 1, iVar4 != 4) {
LAB_10034ba8:
    iVar3 = 0;
    if (*(int *)(param_1 + iVar4 * 4) != (&DAT_10062390)[iVar4]) goto LAB_10034bf7;
  }
LAB_10034bbd:
  if (param_2 == (int *)0x0) {
    piVar1 = local_ec;
LAB_10034c5b:
    piVar5 = (int *)0x0;
  }
  else {
    param_2 = (int *)0x0;
    iVar3 = (**(code **)(*piVar1 + 0x34))(&DAT_100623c0,&param_2,0);
    if (iVar3 < 0) {
      return 0x80004005;
    }
    piVar1 = local_ec;
    piVar5 = param_2;
  }
LAB_10034c60:
  uVar2 = (*(code *)param_4)(piVar5,piVar1,param_5);
  return uVar2;
}


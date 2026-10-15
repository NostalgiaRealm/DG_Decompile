/*
 * FUN_100ba7e0 at 100ba7e0
 * undefined FUN_100ba7e0(void)
 * Address ranges: 100ba7e0-100ba983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100ba7e0(int *param_1,int param_2,undefined8 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 *param_7,undefined4 *param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined1 param_13)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  cVar3 = '\0';
  if (param_7 == (undefined4 *)0x0) {
    uVar5 = 0;
    if (param_8 != (undefined4 *)0x0) {
      uVar5 = *param_8;
    }
  }
  else {
    uVar5 = *param_7;
  }
  if ((*(int *)(param_4 + 0x24) != 1) || (*(int *)(param_4 + 0x28) != 0)) {
    iVar4 = (int)param_3;
    if ((int)param_3 == 0) {
      iVar4 = param_2;
    }
    iVar4 = FUN_100ba670(param_1,iVar4,param_3,param_4,uVar5);
    param_1[4] = iVar4;
    if (iVar4 == 0) {
      return '\0';
    }
  }
  piVar1 = param_1 + 4;
  *(undefined4 *)(param_4 + 0x28) = 0;
  *(int *)(param_4 + 0x24) = 1;
  iVar4 = FUN_100ba670(param_1,param_2);
  piVar2 = param_1 + 3;
  *piVar2 = iVar4;
  if (iVar4 != 0) {
    cVar3 = FUN_100ba1c0(param_1,param_5,param_6,param_7,param_8,param_9,param_11,param_13);
    if (cVar3 != '\0') goto LAB_100ba908;
    FUN_100ba778(param_1,*piVar2);
    *piVar2 = 0;
  }
  if (*piVar1 != 0) {
    FUN_100ba778(param_1,*piVar1);
    *piVar1 = 0;
  }
LAB_100ba908:
  if (*piVar1 == 0) {
    if (*piVar2 != 0) {
      *piVar2 = *(int *)(*param_1 + param_1[1] * 0x28 + 0x30) + *piVar2;
    }
  }
  else {
    *piVar1 = *(int *)(*param_1 + param_1[1] * 0x28 + 0x30) + *piVar1;
  }
  return cVar3;
}


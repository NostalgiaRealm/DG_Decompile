/*
 * FUN_100dbab0 at 100dbab0
 * undefined FUN_100dbab0(void)
 * Address ranges: 100dbab0-100dbd27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100dbab0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  if (((*(uint *)(param_2 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar4 == 0) {
      FUN_100071d0(0);
    }
  }
  iVar4 = 0;
  if (*(char *)(param_2 + -0x6410) == '\0') goto LAB_100dbce0;
  if ((((param_5 & 1) == 0) || ((param_5 & 6) == 0)) || (*(int *)(param_2 + -0x668c) == 0)) {
LAB_100dbc84:
    iVar1 = param_2 + -0x66b4;
    uVar5 = FUN_100dad10(iVar1,param_5 & 1,(param_5 & 6) != 0);
    uVar6 = FUN_100d3bd0(iVar1,uVar5);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_100db290(iVar1), (uVar6 & 1) == 0)) goto LAB_100dbce0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + -0x668c) + 4);
    iVar2 = *(int *)(*(int *)(param_2 + -0x669c) + 4);
    if (((*(int *)(iVar1 + 100) == *(int *)(iVar2 + 100)) &&
        (*(int *)(iVar1 + 0x68) == *(int *)(iVar2 + 0x68))) &&
       (*(int *)(iVar1 + 0x74) == *(int *)(iVar2 + 0x74))) goto LAB_100dbc84;
    iVar1 = param_2 + -0x66b4;
    uVar6 = FUN_100d3bd0(iVar1,2);
    if (((uVar6 & 1) != 0) && (uVar6 = FUN_100db290(iVar1), (uVar6 & 1) != 0)) {
      iVar4 = FUN_10010a80(param_1,iVar1,param_3,param_4,param_5 & 0xfffffffe,param_6,param_7,
                           param_2 + 0x6cc);
      if (iVar4 < 0) goto LAB_100dbce0;
    }
    if (((*(int *)(*(int *)(param_2 + -0x669c) + 0x28) == 0x4c4c554e) ||
        (uVar6 = FUN_100d3bd0(iVar1,1), (uVar6 & 1) == 0)) ||
       (uVar6 = FUN_100db290(iVar1), (uVar6 & 1) == 0)) goto LAB_100dbce0;
    param_5 = 1;
  }
  iVar4 = FUN_10010a80(param_1,param_2 + -0x66b4,param_3,param_4,param_5,param_6,param_7,
                       param_2 + 0x6cc);
LAB_100dbce0:
  if (bVar3) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar4;
}


/*
 * FUN_100083f0 at 100083f0
 * undefined FUN_100083f0(void)
 * Address ranges: 100083f0-100085bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100083f0(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,uint param_5,
                undefined4 param_6,int param_7,undefined4 *param_8,uint *param_9,undefined4 param_10
                ,undefined4 *param_11)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = -0x7789f794;
  if (param_8 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_8 = 0;
  iVar2 = FUN_10003ae0(*(undefined4 *)(param_1 + 0xd90),*(int *)(param_1 + 0xdf0),
                       *(int *)(param_1 + 0xdc8),*(undefined4 *)(param_1 + 0xde0),param_7,param_5,3,
                       param_6,0);
  iVar6 = iVar2;
  if (iVar2 == 0x876086f) {
    *param_4 = 1;
    iVar6 = 0;
  }
  if (((param_5 >> 10 & 1) != 0) && (1 < *param_4)) {
    iVar6 = iVar7;
  }
  if (iVar6 < 0) {
    return iVar6;
  }
  uVar3 = FUN_1003eba0(param_2,param_3,1);
  uVar4 = *param_4;
  if (uVar4 == 0) {
    *param_4 = uVar3;
    uVar4 = uVar3;
  }
  cVar1 = FUN_1000bd80(param_1,param_2,param_3,uVar4,uVar3,param_6);
  iVar6 = 0;
  if (cVar1 == '\0') goto LAB_10008590;
  *param_9 = 0;
  if (param_7 == 0) {
    if (*(int *)(param_1 + 0xdc8) == 1) {
      uVar4 = FUN_100212a0(param_2,param_3,*param_4,1,param_6);
      *param_9 = uVar4;
      if ((ulonglong)(&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] < (ulonglong)uVar4) {
        iVar6 = -0x7789fe84;
      }
    }
LAB_10008574:
    uVar5 = FUN_10003020(param_6);
    iVar7 = iVar6;
  }
  else {
    if (param_7 != 3) goto LAB_10008574;
    uVar5 = 0x2a;
    iVar7 = iVar6;
  }
  *param_11 = uVar5;
LAB_10008590:
  if (iVar7 < 0) {
    iVar2 = iVar7;
  }
  return iVar2;
}


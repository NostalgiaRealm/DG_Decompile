/*
 * FUN_100087a0 at 100087a0
 * undefined FUN_100087a0(void)
 * Address ranges: 100087a0-10008963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100087a0(int param_1,undefined4 param_2,uint *param_3,uint param_4,undefined4 param_5,
                int param_6,undefined4 *param_7,uint *param_8,undefined4 *param_9)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_7 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_7 = 0;
  iVar2 = FUN_10003ae0(*(undefined4 *)(param_1 + 0xd90),*(int *)(param_1 + 0xdf0),
                       *(int *)(param_1 + 0xdc8),*(undefined4 *)(param_1 + 0xde0),param_6,param_4,5,
                       param_5,0);
  iVar6 = iVar2;
  if (iVar2 == 0x876086f) {
    iVar6 = 0;
  }
  if (((param_4 >> 10 & 1) != 0) && (1 < *param_3)) {
    iVar6 = -0x7789f794;
  }
  if (iVar6 < 0) {
    return iVar6;
  }
  uVar3 = FUN_1003eba0(param_2,param_2,1);
  uVar4 = *param_3;
  if (uVar4 == 0) {
    *param_3 = uVar3;
    uVar4 = uVar3;
  }
  cVar1 = FUN_1000bd80(param_1,param_2,param_2,uVar4,uVar3,param_5);
  iVar6 = 0;
  if (cVar1 == '\0') {
    return -0x7789f794;
  }
  *param_8 = 0;
  if (param_6 == 0) {
    if (*(int *)(param_1 + 0xdc8) == 1) {
      uVar4 = FUN_100212a0(param_2,param_2,*param_3,6,param_5);
      *param_8 = uVar4;
      if ((ulonglong)(&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] < (ulonglong)uVar4) {
        iVar6 = -0x7789fe84;
      }
    }
  }
  else if (param_6 == 3) {
    uVar5 = 0x2a;
    goto LAB_1000892c;
  }
  uVar5 = FUN_10003020(param_5);
LAB_1000892c:
  *param_9 = uVar5;
  if (iVar6 < 0) {
    iVar2 = iVar6;
  }
  return iVar2;
}


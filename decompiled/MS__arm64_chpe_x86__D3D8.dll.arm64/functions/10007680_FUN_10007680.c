/*
 * FUN_10007680 at 10007680
 * undefined FUN_10007680(void)
 * Address ranges: 10007680-1000781f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007680(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                undefined4 param_6,int param_7,undefined4 *param_8,uint *param_9,undefined4 param_10
                ,undefined4 *param_11)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_8 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_8 = 0;
  iVar2 = FUN_100036a0(*(undefined4 *)(param_1 + 0xacc),*(int *)(param_1 + 0xb2c),
                       *(int *)(param_1 + 0xb04),*(undefined4 *)(param_1 + 0xb1c),param_7,param_5,3,
                       param_6,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar3 = FUN_10034cd0(param_2,param_3,1);
  iVar6 = *param_4;
  if (iVar6 == 0) {
    *param_4 = iVar3;
    iVar6 = iVar3;
  }
  cVar1 = FUN_1000ad20(param_1,param_2,param_3,iVar6,iVar3,param_6);
  iVar3 = -0x7789f794;
  iVar6 = 0;
  if (cVar1 == '\0') goto LAB_100077ec;
  *param_9 = 0;
  if (param_7 == 0) {
    if (*(int *)(param_1 + 0xb04) == 1) {
      uVar4 = FUN_1001bce0(param_2,param_3,*param_4,1,param_6);
      *param_9 = uVar4;
      if ((ulonglong)(&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] < (ulonglong)uVar4) {
        iVar6 = -0x7789fe84;
      }
    }
LAB_100077d0:
    uVar5 = FUN_10002f00(param_6);
    iVar3 = iVar6;
  }
  else {
    if (param_7 != 3) goto LAB_100077d0;
    uVar5 = 0x1c;
    iVar3 = iVar6;
  }
  *param_11 = uVar5;
LAB_100077ec:
  if (-1 < iVar3) {
    return iVar2;
  }
  return iVar3;
}


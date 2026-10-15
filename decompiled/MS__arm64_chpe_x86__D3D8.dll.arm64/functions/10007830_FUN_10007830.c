/*
 * FUN_10007830 at 10007830
 * undefined FUN_10007830(void)
 * Address ranges: 10007830-100079d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007830(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,int param_8,undefined4 *param_9,
                undefined4 param_10,uint *param_11,undefined4 param_12,undefined4 *param_13)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = -0x7789f794;
  if (param_9 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_9 = 0;
  iVar2 = FUN_100036a0(*(undefined4 *)(param_1 + 0xacc),*(int *)(param_1 + 0xb2c),
                       *(int *)(param_1 + 0xb04),*(undefined4 *)(param_1 + 0xb1c),param_8,param_6,4,
                       param_7,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar3 = FUN_10034cd0(param_2,param_3,param_4);
  iVar6 = *param_5;
  if (iVar6 == 0) {
    *param_5 = iVar3;
    iVar6 = iVar3;
  }
  cVar1 = FUN_1000ae10(param_1,param_2,param_3,param_4,iVar6,iVar3,param_7);
  iVar6 = 0;
  if (cVar1 == '\0') goto LAB_100079a4;
  *param_11 = 0;
  if (param_8 == 0) {
    if (*(int *)(param_1 + 0xb04) == 1) {
      uVar4 = FUN_1001d560(param_2,param_3,param_4,*param_5,param_7);
      *param_11 = uVar4;
      if ((ulonglong)(&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] < (ulonglong)uVar4) {
        iVar6 = -0x7789fe84;
      }
    }
LAB_10007988:
    uVar5 = FUN_10002f00(param_7);
    iVar7 = iVar6;
  }
  else {
    if (param_8 != 3) goto LAB_10007988;
    uVar5 = 0x1c;
    iVar7 = iVar6;
  }
  *param_13 = uVar5;
LAB_100079a4:
  if (-1 < iVar7) {
    iVar7 = iVar2;
  }
  return iVar7;
}


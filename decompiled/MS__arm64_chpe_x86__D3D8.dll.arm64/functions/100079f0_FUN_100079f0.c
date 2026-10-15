/*
 * FUN_100079f0 at 100079f0
 * undefined FUN_100079f0(void)
 * Address ranges: 100079f0-10007b83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100079f0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                int param_6,undefined4 *param_7,uint *param_8,undefined4 *param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_7 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_7 = 0;
  iVar2 = FUN_100036a0(*(undefined4 *)(param_1 + 0xacc),*(int *)(param_1 + 0xb2c),
                       *(int *)(param_1 + 0xb04),*(undefined4 *)(param_1 + 0xb1c),param_6,param_4,5,
                       param_5,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar3 = FUN_10034cd0(param_2,param_2,1);
  iVar6 = *param_3;
  if (iVar6 == 0) {
    *param_3 = iVar3;
    iVar6 = iVar3;
  }
  cVar1 = FUN_1000ad20(param_1,param_2,param_2,iVar6,iVar3,param_5);
  iVar6 = 0;
  if (cVar1 == '\0') {
    return -0x7789f794;
  }
  *param_8 = 0;
  if (param_6 == 0) {
    if (*(int *)(param_1 + 0xb04) == 1) {
      uVar4 = FUN_1001bce0(param_2,param_2,*param_3,6,param_5);
      *param_8 = uVar4;
      if ((ulonglong)(&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] < (ulonglong)uVar4) {
        iVar6 = -0x7789fe84;
      }
    }
  }
  else if (param_6 == 3) {
    uVar5 = 0x1c;
    goto LAB_10007b50;
  }
  uVar5 = FUN_10002f00(param_5);
LAB_10007b50:
  *param_9 = uVar5;
  if (-1 < iVar6) {
    return iVar2;
  }
  return iVar6;
}


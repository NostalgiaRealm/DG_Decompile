/*
 * FUN_1004a240 at 1004a240
 * undefined FUN_1004a240(void)
 * Address ranges: 1004a240-1004a3c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004a240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  iVar2 = 0;
  FUN_100475d0(param_1,auStack_60,param_3,param_4);
  iVar1 = (*(code *)PTR_FUN_100ba248)(auStack_60);
  if (iVar1 == 0) {
    iVar2 = FUN_100491f0(param_1,param_2,param_3,auStack_60,param_5,param_6,0,0,0);
    if (-1 < iVar2) {
      uVar3 = FUN_10038010(*(int *)(param_1 + 0xfc),0);
      iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x11c) * 0x228;
      uStack_48 = *(undefined8 *)(iVar1 + 0x100be318);
      local_50 = *(undefined8 *)(&DAT_100be310 + iVar1);
      (*(code *)PTR_FUN_100ba1ec)(uVar3,auStack_70);
      (*(code *)PTR_FUN_100ba1ac)(uVar3,auStack_70);
      (*(code *)PTR_FUN_100ba1ac)(uVar3,auStack_68);
      (*(code *)PTR_FUN_100ba26c)(auStack_70,-(int)local_50,-(int)((ulonglong)local_50 >> 0x20));
      (*(code *)PTR_FUN_100ba244)(auStack_40,auStack_70,param_2);
      iVar1 = (*(code *)PTR_FUN_100ba248)(auStack_40);
      if (iVar1 == 0) {
        FUN_1004f930(param_1,0,0,0);
      }
    }
  }
  return iVar2;
}


/*
 * FUN_100475d0 at 100475d0
 * undefined FUN_100475d0(void)
 * Address ranges: 100475d0-100477fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100475d0(int param_1,int *param_2,int param_3,undefined8 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_60 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar6 = *param_4;
  iVar4 = *(int *)(*(int *)(param_1 + 0xfc) + 0x11c) * 0x228;
  uStack_48 = *(undefined8 *)(iVar4 + 0x100be318);
  local_50 = *(ulonglong *)(&DAT_100be310 + iVar4);
  *(undefined8 *)(param_2 + 2) = param_4[1];
  *(undefined8 *)param_2 = uVar6;
  (*(code *)PTR_FUN_100ba26c)(param_2,local_50 & 0xffffffff,local_50 >> 0x20);
  (*(code *)PTR_FUN_100ba244)(param_2,&local_50,param_2);
  iVar4 = (*(code *)PTR_FUN_100ba248)(param_2);
  if (iVar4 == 0) {
    iVar4 = FUN_10038010(*(int *)(param_1 + 0xfc),0);
    if (iVar4 != 0) {
      (*(code *)PTR_FUN_100ba1ec)(iVar4,auStack_40);
      (*(code *)PTR_FUN_100ba1ac)(iVar4,auStack_40);
      (*(code *)PTR_FUN_100ba1ac)(iVar4,auStack_38);
      (*(code *)PTR_FUN_100ba244)(auStack_40,&local_50,auStack_40);
    }
    iVar5 = (*(code *)PTR_FUN_100ba1d8)(auStack_40,param_2);
    if ((iVar5 == 0) || (iVar4 == 0)) {
      iVar4 = (*(code *)PTR_FUN_100ba1fc)(0,0,3);
      if (iVar4 != 0) {
        local_60[0] = 0;
        puVar1 = (uint *)(*(int *)(param_3 + 4) + 200);
        *puVar1 = *puVar1 | 0x100;
        FUN_1004ee50(param_3,local_60);
        iVar5 = local_60[0];
        if (local_60[0] != 0) {
          iVar2 = *param_2;
          iVar3 = param_2[1];
          (*(code *)__hybrid_CompilerIAT)
                    (local_60[0],iVar2 - (int)local_50,iVar3 - local_50._4_4_,param_2[2] - iVar2,
                     param_2[3] - iVar3,iVar4,iVar2,iVar3,0xcc0020);
          FUN_1004f220(param_3,iVar5);
        }
        (*(code *)PTR_FUN_100ba290)(0,iVar4);
        puVar1 = (uint *)(*(int *)(param_3 + 4) + 200);
        *puVar1 = *puVar1 & 0xfffffeff;
      }
    }
    (*(code *)PTR_FUN_100ba26c)(param_2,-(int)local_50,-local_50._4_4_);
  }
  return param_2;
}


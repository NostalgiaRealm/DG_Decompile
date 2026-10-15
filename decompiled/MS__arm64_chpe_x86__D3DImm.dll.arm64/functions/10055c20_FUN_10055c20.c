/*
 * FUN_10055c20 at 10055c20
 * undefined FUN_10055c20(void)
 * Address ranges: 10055c20-10055ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055c20(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [16];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_40);
  uVar2 = 0x80070057;
  if ((param_2 != 0 && param_2 < 9) && (*(char *)(*(int *)(param_1 + 0xa5c) + param_2 * 8) != '\0'))
  {
    FUN_10052980(param_1,param_2,param_3);
    uVar2 = 0;
  }
  FUN_10096790(auStack_40);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}


/*
 * FUN_100564a0 at 100564a0
 * undefined FUN_100564a0(void)
 * Address ranges: 100564a0-10056553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100564a0(int param_1,int param_2,int param_3)

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
  if ((param_3 != 0) && (param_2 != 0 && param_2 < 0x18)) {
    FUN_10012520(*(int *)(param_1 + 0x9cc) + *(int *)(&DAT_1009e680 + param_2 * 4) * 0x40,param_3);
    uVar2 = 0;
  }
  FUN_10096790(auStack_40);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}


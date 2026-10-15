/*
 * FUN_10058c80 at 10058c80
 * undefined FUN_10058c80(void)
 * Address ranges: 10058c80-10058d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10058c80(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x88760835;
  if (*(char *)(param_1 + 0x224) == '\0') {
    uVar2 = 0x88760834;
    if (((param_2 != 0) && (param_2 <= *(uint *)(param_1 + 0x218))) &&
       (*(int *)(*(int *)(param_1 + 0x214) + param_2 * 4 + -4) != 0)) {
      FUN_10051050(param_1,param_2 - 1);
      uVar2 = 0;
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}


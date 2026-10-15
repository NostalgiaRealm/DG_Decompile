/*
 * FUN_10055ce0 at 10055ce0
 * undefined FUN_10055ce0(void)
 * Address ranges: 10055ce0-10055d87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055ce0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if (((param_3 != (undefined4 *)0x0) && (param_2 != 0 && param_2 < 8 || param_2 == 8)) &&
     (*(char *)(*(int *)(param_1 + 0xa5c) + param_2 * 8) != '\0')) {
    uVar2 = 0;
    *param_3 = *(undefined4 *)(param_1 + param_2 * 4 + 0x14b0);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}


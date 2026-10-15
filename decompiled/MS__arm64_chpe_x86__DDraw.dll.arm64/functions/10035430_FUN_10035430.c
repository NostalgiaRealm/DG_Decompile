/*
 * FUN_10035430 at 10035430
 * undefined FUN_10035430(void)
 * Address ranges: 10035430-10035517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035430(int param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  (*(code *)PTR_FUN_100ba2d8)(param_2,1);
  if (((((&DAT_100be33a)[*(int *)(param_1 + 0x10c) * 0x228] != '\0') &&
       ((*(char *)(DAT_100be0c0 + 0x7e5) != '\0' || (*(char *)(DAT_100be0c0 + 0x784) == '\0')))) &&
      ((iVar1 = FUN_1008f3b8(DAT_100be0c0,param_2), iVar1 == 0 || (*(int *)(iVar1 + 0x1c) == 0))))
     && (uVar2 = FUN_10005fb0(param_1), (uVar2 & 1) == 0)) {
    FUN_10005d28(param_1,0);
  }
  *(undefined1 *)(param_1 + 0xf9) = 0;
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return;
}


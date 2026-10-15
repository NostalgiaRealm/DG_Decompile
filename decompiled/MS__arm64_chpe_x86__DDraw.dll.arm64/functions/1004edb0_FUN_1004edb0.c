/*
 * FUN_1004edb0 at 1004edb0
 * undefined FUN_1004edb0(void)
 * Address ranges: 1004edb0-1004ee3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004edb0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x887601c2;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = FUN_1004dde8(param_1,param_2);
    *(undefined1 *)(*(int *)(param_1 + 4) + 0xae) = 0;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}


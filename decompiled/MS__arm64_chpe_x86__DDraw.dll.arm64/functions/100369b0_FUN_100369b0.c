/*
 * FUN_100369b0 at 100369b0
 * undefined FUN_100369b0(void)
 * Address ranges: 100369b0-10036a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100369b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x88760082;
  if ((*(char *)(param_1 + 0x5c) != '\0') && (uVar2 = 0x80070057, param_2 != (undefined4 *)0x0)) {
    uVar2 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x4c);
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}


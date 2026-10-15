/*
 * FUN_10036e10 at 10036e10
 * undefined FUN_10036e10(void)
 * Address ranges: 10036e10-10036ec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10036e10(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x88760082;
  if (((*(char *)(param_1 + 0x5c) != '\0') && (uVar2 = 0x80070057, param_2 == 0)) &&
     ((param_3 == 0 || (iVar1 = (*(code *)PTR_FUN_100ba24c)(param_3), iVar1 != 0)))) {
    FUN_100914d0(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x4c) = param_3;
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}


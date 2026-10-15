/*
 * FUN_10071050 at 10071050
 * undefined FUN_10071050(void)
 * Address ranges: 10071050-100710b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071050(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1009f558;
  FUN_10071a88(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_1006e730(puVar1);
  } while (iVar2 != 0);
  FUN_100712f0(param_1);
  return;
}


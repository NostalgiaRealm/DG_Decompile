/*
 * FUN_100d8ba0 at 100d8ba0
 * undefined FUN_100d8ba0(void)
 * Address ranges: 100d8ba0-100d8c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d8ba0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1012a8f8;
  FUN_100dad58(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_100d5f30(puVar1);
  } while (iVar2 != 0);
  FUN_100da5c0(param_1);
  return;
}


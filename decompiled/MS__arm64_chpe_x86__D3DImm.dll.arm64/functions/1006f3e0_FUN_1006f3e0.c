/*
 * FUN_1006f3e0 at 1006f3e0
 * undefined FUN_1006f3e0(void)
 * Address ranges: 1006f3e0-1006f443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f3e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1009cef0;
  FUN_10070900(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_1006cb00(puVar1);
  } while (iVar2 != 0);
  FUN_1006fe50(param_1);
  return;
}


/*
 * FUN_1010b2e0 at 1010b2e0
 * undefined FUN_1010b2e0(void)
 * Address ranges: 1010b2e0-1010b343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010b2e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1015fff8;
  FUN_1010d498(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_10108120(puVar1);
  } while (iVar2 != 0);
  FUN_1010cd00(param_1);
  return;
}


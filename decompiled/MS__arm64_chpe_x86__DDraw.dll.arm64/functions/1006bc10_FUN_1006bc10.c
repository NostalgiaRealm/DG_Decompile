/*
 * FUN_1006bc10 at 1006bc10
 * undefined FUN_1006bc10(void)
 * Address ranges: 1006bc10-1006bc73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bc10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_100b2dc8;
  FUN_1006c6a8(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_10069320(puVar1);
  } while (iVar2 != 0);
  FUN_1006bf10(param_1);
  return;
}


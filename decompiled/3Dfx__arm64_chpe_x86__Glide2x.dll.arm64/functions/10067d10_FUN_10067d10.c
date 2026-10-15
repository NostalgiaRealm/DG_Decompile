/*
 * FUN_10067d10 at 10067d10
 * undefined FUN_10067d10(void)
 * Address ranges: 10067d10-10067d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067d10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_100952fc;
  FUN_10068748(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_100653f0(puVar1);
  } while (iVar2 != 0);
  FUN_10067fb0(param_1);
  return;
}


/*
 * FUN_1006b9b0 at 1006b9b0
 * undefined FUN_1006b9b0(void)
 * Address ranges: 1006b9b0-1006ba13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b9b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_10099178;
  FUN_1006c3e8(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_10069090(puVar1);
  } while (iVar2 != 0);
  FUN_1006bc50(param_1);
  return;
}


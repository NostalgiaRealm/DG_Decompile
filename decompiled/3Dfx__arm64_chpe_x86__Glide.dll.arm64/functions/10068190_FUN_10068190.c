/*
 * FUN_10068190 at 10068190
 * undefined FUN_10068190(void)
 * Address ranges: 10068190-100681f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068190(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1009532c;
  FUN_10068bc8(param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    iVar2 = iVar2 + -1;
    FUN_10065870(puVar1);
  } while (iVar2 != 0);
  FUN_10068430(param_1);
  return;
}


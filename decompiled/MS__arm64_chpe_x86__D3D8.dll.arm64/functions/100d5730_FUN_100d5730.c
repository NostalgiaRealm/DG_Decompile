/*
 * FUN_100d5730 at 100d5730
 * undefined FUN_100d5730(void)
 * Address ranges: 100d5730-100d57cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d5730(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x94;
  *param_1 = &PTR_FUN_1012a8a0;
  FUN_100fed00(*puVar1);
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_100fed00(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_100fed00(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x34;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_100fed00(*puVar1);
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_1012a848;
  return;
}


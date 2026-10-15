/*
 * FUN_1007a320 at 1007a320
 * undefined FUN_1007a320(void)
 * Address ranges: 1007a320-1007a3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a320(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x94;
  *param_1 = &PTR_FUN_1009f640;
  FUN_10083420(*puVar1);
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_10083420(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_10083420(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x34;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_10083420(*puVar1);
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_1009f5e8;
  return;
}


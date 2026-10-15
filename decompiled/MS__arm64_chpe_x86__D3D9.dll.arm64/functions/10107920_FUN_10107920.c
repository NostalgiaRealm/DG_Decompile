/*
 * FUN_10107920 at 10107920
 * undefined FUN_10107920(void)
 * Address ranges: 10107920-101079bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10107920(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x94;
  *param_1 = &PTR_FUN_1015ffa0;
  FUN_101322d0(*puVar1);
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_101322d0(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_101322d0(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x34;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_101322d0(*puVar1);
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_1015ff48;
  return;
}


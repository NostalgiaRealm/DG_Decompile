/*
 * FUN_10068b20 at 10068b20
 * undefined FUN_10068b20(void)
 * Address ranges: 10068b20-10068bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068b20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x94;
  *param_1 = &PTR_FUN_100b2d70;
  FUN_100914d0(*puVar1);
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_100914d0(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_100914d0(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x34;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_100914d0(*puVar1);
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_100b2d18;
  return;
}


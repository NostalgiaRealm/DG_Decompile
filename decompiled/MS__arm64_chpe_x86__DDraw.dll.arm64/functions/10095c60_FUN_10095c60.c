/*
 * FUN_10095c60 at 10095c60
 * undefined FUN_10095c60(void)
 * Address ranges: 10095c60-10095cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095c60(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0x20;
  puVar1 = &DAT_100c2650;
  do {
    iVar2 = iVar2 + -1;
    FUN_100914d0(*(undefined4 *)(puVar1 + -2));
    FUN_100914d0(*(undefined4 *)((int)puVar1 + -0x1c));
    FUN_100914d0(*(undefined4 *)(puVar1 + -5));
    puVar1 = puVar1 + -0x45;
  } while (iVar2 != 0);
  return;
}


/*
 * FUN_101365e0 at 101365e0
 * undefined FUN_101365e0(void)
 * Address ranges: 101365e0-10136627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101365e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x20;
  puVar1 = &DAT_10171370;
  do {
    iVar2 = iVar2 + -1;
    FUN_101322d0(puVar1[-3]);
    FUN_101322d0(puVar1[-6]);
    puVar1 = puVar1 + -8;
  } while (iVar2 != 0);
  return;
}


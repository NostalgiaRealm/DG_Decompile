/*
 * FUN_10136630 at 10136630
 * undefined FUN_10136630(void)
 * Address ranges: 10136630-1013668b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10136630(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0x20;
  puVar1 = &DAT_10175880;
  do {
    iVar2 = iVar2 + -1;
    FUN_101322d0(*(undefined4 *)(puVar1 + -0x10));
    FUN_101322d0(*(undefined4 *)(puVar1 + -0x1c));
    FUN_101322d0(*(undefined4 *)(puVar1 + -0x28));
    puVar1 = puVar1 + -0x228;
  } while (iVar2 != 0);
  return;
}


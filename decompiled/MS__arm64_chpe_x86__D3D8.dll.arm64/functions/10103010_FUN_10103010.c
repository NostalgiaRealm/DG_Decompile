/*
 * FUN_10103010 at 10103010
 * undefined FUN_10103010(void)
 * Address ranges: 10103010-1010306b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10103010(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0x20;
  puVar1 = &DAT_1013ccc0;
  do {
    iVar2 = iVar2 + -1;
    FUN_100fed00(*(undefined4 *)(puVar1 + -0x10));
    FUN_100fed00(*(undefined4 *)(puVar1 + -0x1c));
    FUN_100fed00(*(undefined4 *)(puVar1 + -0x28));
    puVar1 = puVar1 + -0x228;
  } while (iVar2 != 0);
  return;
}


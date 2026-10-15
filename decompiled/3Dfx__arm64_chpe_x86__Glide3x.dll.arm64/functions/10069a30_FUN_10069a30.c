/*
 * FUN_10069a30 at 10069a30
 * undefined FUN_10069a30(void)
 * Address ranges: 10069a30-10069a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10069a30(void)

{
  int iVar1;
  
  iVar1 = FUN_1007dc70(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_1006bb40(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined8 *)(iVar1 + 0xd88) = 0;
    *(undefined8 *)(iVar1 + 0xd90) = 0;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd78) = 0;
    *(undefined8 *)(iVar1 + 0xd80) = 0;
  }
  return iVar1;
}


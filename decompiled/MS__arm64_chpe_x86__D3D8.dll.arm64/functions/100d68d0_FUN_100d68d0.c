/*
 * FUN_100d68d0 at 100d68d0
 * undefined FUN_100d68d0(void)
 * Address ranges: 100d68d0-100d693f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d68d0(void)

{
  int iVar1;
  
  iVar1 = FUN_100febf0(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_100da4b0(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined8 *)(iVar1 + 0xd88) = 0;
    *(undefined8 *)(iVar1 + 0xd90) = 0;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd78) = 0;
    *(undefined8 *)(iVar1 + 0xd80) = 0;
  }
  return iVar1;
}


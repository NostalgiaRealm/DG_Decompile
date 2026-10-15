/*
 * FUN_10069c90 at 10069c90
 * undefined FUN_10069c90(void)
 * Address ranges: 10069c90-10069cff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10069c90(void)

{
  int iVar1;
  
  iVar1 = FUN_100913c0(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_1006be00(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined8 *)(iVar1 + 0xd88) = 0;
    *(undefined8 *)(iVar1 + 0xd90) = 0;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd78) = 0;
    *(undefined8 *)(iVar1 + 0xd80) = 0;
  }
  return iVar1;
}


/*
 * FUN_10065d90 at 10065d90
 * undefined FUN_10065d90(void)
 * Address ranges: 10065d90-10065dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10065d90(void)

{
  int iVar1;
  
  iVar1 = FUN_10079f50(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_10067ea0(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined8 *)(iVar1 + 0xd88) = 0;
    *(undefined8 *)(iVar1 + 0xd90) = 0;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd78) = 0;
    *(undefined8 *)(iVar1 + 0xd80) = 0;
  }
  return iVar1;
}


/*
 * FUN_10108ad0 at 10108ad0
 * undefined FUN_10108ad0(void)
 * Address ranges: 10108ad0-10108b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10108ad0(void)

{
  int iVar1;
  
  iVar1 = FUN_101321c0(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_1010cbf0(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined8 *)(iVar1 + 0xd88) = 0;
    *(undefined8 *)(iVar1 + 0xd90) = 0;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd78) = 0;
    *(undefined8 *)(iVar1 + 0xd80) = 0;
  }
  return iVar1;
}


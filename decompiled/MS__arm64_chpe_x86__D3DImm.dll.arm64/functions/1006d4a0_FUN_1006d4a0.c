/*
 * FUN_1006d4a0 at 1006d4a0
 * undefined FUN_1006d4a0(void)
 * Address ranges: 1006d4a0-1006d50f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006d4a0(void)

{
  int iVar1;
  
  iVar1 = FUN_10081cb0(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_1006fd40(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined8 *)(iVar1 + 0xd88) = 0;
    *(undefined8 *)(iVar1 + 0xd90) = 0;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd78) = 0;
    *(undefined8 *)(iVar1 + 0xd80) = 0;
  }
  return iVar1;
}


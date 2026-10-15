/*
 * FUN_100f4f60 at 100f4f60
 * undefined FUN_100f4f60(void)
 * Address ranges: 100f4f60-100f4fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100f4f60(void)

{
  int iVar1;
  
  iVar1 = FUN_100febf0(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_100da4b0(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined4 *)(iVar1 + 0xd78) = 0xffffffff;
    *(undefined8 *)(iVar1 + 0xd84) = 0xffffffffffffffff;
    *(undefined4 *)(iVar1 + 0xd94) = 0xffffffff;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd7c) = 0;
    *(undefined8 *)(iVar1 + 0xd8c) = 0;
  }
  return iVar1;
}


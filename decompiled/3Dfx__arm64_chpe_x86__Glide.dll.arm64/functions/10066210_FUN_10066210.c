/*
 * FUN_10066210 at 10066210
 * undefined FUN_10066210(void)
 * Address ranges: 10066210-1006627f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10066210(void)

{
  int iVar1;
  
  iVar1 = FUN_1007a3d0(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_10068320(iVar1);
    *(undefined8 *)(iVar1 + 0xd68) = 0;
    *(undefined8 *)(iVar1 + 0xd88) = 0;
    *(undefined8 *)(iVar1 + 0xd90) = 0;
    *(undefined8 *)(iVar1 + 0xd70) = 0;
    *(undefined8 *)(iVar1 + 0xd78) = 0;
    *(undefined8 *)(iVar1 + 0xd80) = 0;
  }
  return iVar1;
}


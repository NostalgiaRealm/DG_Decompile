/*
 * FUN_10076610 at 10076610
 * undefined FUN_10076610(void)
 * Address ranges: 10076610-1007668f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10076610(void)

{
  int iVar1;
  
  iVar1 = FUN_10079f50(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_10067ea0(iVar1);
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


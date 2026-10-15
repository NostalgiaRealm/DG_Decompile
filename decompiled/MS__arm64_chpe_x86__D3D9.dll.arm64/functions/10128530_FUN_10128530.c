/*
 * FUN_10128530 at 10128530
 * undefined FUN_10128530(void)
 * Address ranges: 10128530-101285af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10128530(void)

{
  int iVar1;
  
  iVar1 = FUN_101321c0(0xd98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_1010cbf0(iVar1);
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


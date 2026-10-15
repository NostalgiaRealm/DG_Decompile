/*
 * FUN_10010cf8 at 10010cf8
 * undefined FUN_10010cf8(void)
 * Address ranges: 10010cf8-10010da7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10010cf8(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((((*(int *)(param_2 + 4) - 0xdU < 2) || (*(int *)(param_2 + 0xc) - 0xdU < 2)) ||
       (*(int *)(param_2 + 0x14) - 0xdU < 2)) ||
      ((*(int *)(param_2 + 0x1c) - 0xdU < 2 || (*(int *)(param_2 + 0x2c) - 0xdU < 2)))) ||
     ((*(int *)(param_2 + 0x34) - 0xdU < 2 ||
      ((*(int *)(param_2 + 0x3c) - 0xdU < 2 || (uVar1 = 0, *(int *)(param_2 + 0x44) - 0xdU < 2))))))
  {
    uVar1 = 1;
  }
  return uVar1;
}


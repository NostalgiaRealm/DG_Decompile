/*
 * FUN_100916dc at 100916dc
 * undefined2 __stdcall FUN_100916dc(int param_1)
 * Address ranges: 100916dc-100916f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_100916dc(int param_1)

{
  undefined2 uVar1;
  
  if ((*(uint *)(param_1 + -0x24) & 0x400) == 0) {
    uVar1 = *(undefined2 *)(param_1 + -0x48);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


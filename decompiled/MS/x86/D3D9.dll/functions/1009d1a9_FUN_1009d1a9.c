/*
 * FUN_1009d1a9 at 1009d1a9
 * undefined4 __stdcall FUN_1009d1a9(int param_1, uint * param_2)
 * Address ranges: 1009d1a9-1009d1d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009d1a9(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    uVar1 = FUN_10090a86(*(int *)(param_1 + 0x24) + 0x66b4,0x100d1310,param_2);
  }
  return uVar1;
}


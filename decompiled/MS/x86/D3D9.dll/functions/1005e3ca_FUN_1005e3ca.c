/*
 * FUN_1005e3ca at 1005e3ca
 * undefined __stdcall FUN_1005e3ca(int param_1, int param_2)
 * Address ranges: 1005e3ca-1005e3f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e3ca(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x220 + param_2 * 4) == 0) {
    uVar1 = FUN_100c2e34(param_1,4,'\x01');
    *(uint *)(param_1 + 0x220 + param_2 * 4) = uVar1;
  }
  return;
}


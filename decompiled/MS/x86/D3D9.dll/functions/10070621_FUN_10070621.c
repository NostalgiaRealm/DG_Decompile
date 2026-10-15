/*
 * FUN_10070621 at 10070621
 * undefined __stdcall FUN_10070621(int param_1, int param_2)
 * Address ranges: 10070621-10070651
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070621(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 300 + param_2 * 4) == 0) {
    uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
    *(uint *)(param_1 + 300 + param_2 * 4) = uVar1;
  }
  return;
}


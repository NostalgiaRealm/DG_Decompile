/*
 * FUN_1005abc9 at 1005abc9
 * undefined __stdcall FUN_1005abc9(int param_1, int param_2)
 * Address ranges: 1005abc9-1005abf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005abc9(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 300 + param_2 * 4) == 0) {
    uVar1 = FUN_100a05ed(param_1 + 0x18,4,'\x01');
    *(uint *)(param_1 + 300 + param_2 * 4) = uVar1;
  }
  return;
}


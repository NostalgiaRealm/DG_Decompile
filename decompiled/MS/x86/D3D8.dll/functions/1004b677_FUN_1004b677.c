/*
 * FUN_1004b677 at 1004b677
 * undefined __stdcall FUN_1004b677(int * param_1, int * param_2)
 * Address ranges: 1004b677-1004b6c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b677(int *param_1,int *param_2)

{
  uint uVar1;
  
  if (param_1[0x82] == 0) {
    uVar1 = FUN_100a05ed((int)param_1,4,'\x01');
    param_1[0x82] = uVar1;
    FUN_100a138c(param_1,param_2,0x2036);
  }
  return;
}


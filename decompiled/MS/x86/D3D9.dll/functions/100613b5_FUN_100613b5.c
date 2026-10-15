/*
 * FUN_100613b5 at 100613b5
 * int __stdcall FUN_100613b5(int * param_1, int * param_2)
 * Address ranges: 100613b5-1006141f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100613b5(int *param_1,int *param_2)

{
  uint uVar1;
  
  if (param_1[0xc1] == 0) {
    uVar1 = FUN_100c2e34((int)param_1,1,'\x01');
    param_1[0xc1] = uVar1;
    FUN_100c3be1(param_1,param_2,0x37);
  }
  return param_1[0xc1];
}


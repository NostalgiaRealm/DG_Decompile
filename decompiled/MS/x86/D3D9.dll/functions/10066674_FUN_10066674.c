/*
 * FUN_10066674 at 10066674
 * uint __stdcall FUN_10066674(int * param_1, int param_2, uint param_3)
 * Address ranges: 10066674-10066750
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10066674(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (param_3 == 0) {
    param_3 = FUN_100c2e34((int)piVar1,4,'\x01');
  }
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0x32);
  return param_3;
}


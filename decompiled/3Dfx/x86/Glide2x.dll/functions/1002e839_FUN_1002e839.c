/*
 * FUN_1002e839 at 1002e839
 * undefined __fastcall FUN_1002e839(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 1002e839-1002e8e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e839(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  if ((param_2[0x19] == 0) && (*param_2 != 0x40)) {
    FUN_10047b30((int)param_2,2,'\0');
    uVar1 = FUN_10047b30((int)param_2,1,'\x01');
    param_2[0x19] = uVar1;
    FUN_100486df(param_2,param_3,0x38);
    FUN_100486df(param_2,param_3,0x6c);
  }
  return;
}


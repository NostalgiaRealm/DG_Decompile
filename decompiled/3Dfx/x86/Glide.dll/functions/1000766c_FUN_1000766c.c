/*
 * FUN_1000766c at 1000766c
 * bool __fastcall FUN_1000766c(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
 * Address ranges: 1000766c-10007691
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall
FUN_1000766c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  char cVar1;
  
  if (param_6 == 1) {
    cVar1 = (**(code **)(*param_2 + 0x2c))(param_3,param_4,0,param_5);
    return cVar1 != '\0';
  }
  return false;
}


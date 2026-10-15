/*
 * FUN_10082ce7 at 10082ce7
 * bool __fastcall FUN_10082ce7(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
 * Address ranges: 10082ce7-10082d0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall
FUN_10082ce7(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  char cVar1;
  
  if (param_6 == 1) {
    cVar1 = (**(code **)(*param_2 + 0x2c))(param_3,param_4,0,param_5);
    return cVar1 != '\0';
  }
  return false;
}


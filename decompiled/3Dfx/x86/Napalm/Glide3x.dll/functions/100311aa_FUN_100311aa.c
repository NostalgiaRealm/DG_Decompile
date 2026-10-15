/*
 * FUN_100311aa at 100311aa
 * bool __fastcall FUN_100311aa(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
 * Address ranges: 100311aa-100311cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall
FUN_100311aa(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  char cVar1;
  
  if (param_6 == 1) {
    cVar1 = (**(code **)(*param_2 + 0x2c))(param_3,param_4,0,param_5);
    return cVar1 != '\0';
  }
  return false;
}


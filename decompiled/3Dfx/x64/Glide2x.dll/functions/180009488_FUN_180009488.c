/*
 * FUN_180009488 at 180009488
 * bool __fastcall FUN_180009488(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5, int param_6)
 * Address ranges: 180009488-1800094d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180009488(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  
  if (param_6 == 1) {
    cVar1 = (**(code **)(*param_2 + 0x58))(param_2,param_3,param_4,0,param_5);
    bVar2 = cVar1 != '\0';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


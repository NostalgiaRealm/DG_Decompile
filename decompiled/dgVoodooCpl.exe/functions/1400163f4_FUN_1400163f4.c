/*
 * FUN_1400163f4 at 1400163f4
 * bool __fastcall FUN_1400163f4(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5, int param_6)
 * Address ranges: 1400163f4-14001643d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1400163f4(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
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


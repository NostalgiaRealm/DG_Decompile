/*
 * FUN_140017950 at 140017950
 * bool __cdecl FUN_140017950(byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined4 * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140017950-1400179e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140017950(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  undefined1 local_40 [16];
  
  local_40[0] = 0;
  iVar2 = FUN_1400248b0(param_1,(byte *)"%d x %d %c",param_2,param_3,local_40,param_6,param_7,
                        param_8);
  if (iVar2 == 2) {
    bVar1 = true;
  }
  else {
    *param_5 = 1;
    iVar2 = FUN_1400248b0(param_1,(byte *)"%d x %d @ %d %c",param_2,param_3,param_4,local_40,param_7
                          ,param_8);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}


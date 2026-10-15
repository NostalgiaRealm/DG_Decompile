/*
 * FUN_14000e4c0 at 14000e4c0
 * bool __cdecl FUN_14000e4c0(longlong param_1, undefined8 param_2, undefined8 param_3, LPARAM param_4, undefined8 param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 14000e4c0-14000e4eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_14000e4c0(longlong param_1,undefined8 param_2,undefined8 param_3,LPARAM param_4,
                  undefined8 param_5,int *param_6,longlong param_7,undefined4 *param_8)

{
  bool bVar1;
  
  bVar1 = (int)param_2 == 0x402;
  if (bVar1) {
    FUN_14000a740(param_1 - 0x70,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return bVar1;
}


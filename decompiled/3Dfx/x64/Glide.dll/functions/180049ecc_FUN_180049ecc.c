/*
 * FUN_180049ecc at 180049ecc
 * bool __fastcall FUN_180049ecc(longlong param_1, ulonglong param_2, longlong * param_3, int param_4, int param_5, undefined8 * param_6)
 * Address ranges: 180049ecc-180049f30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180049ecc(longlong param_1,ulonglong param_2,longlong *param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  longlong local_58;
  longlong local_50;
  
  FUN_180049da4(param_1,&local_58,param_3,param_5 - param_4,param_6);
  if (local_50 != 0) {
    FUN_180049e0c(param_1,param_2,(longlong)param_3,(longlong)&local_58,param_4);
  }
  return local_50 != 0;
}


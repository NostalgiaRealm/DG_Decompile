/*
 * FUN_180049a24 at 180049a24
 * bool __fastcall FUN_180049a24(longlong param_1, ulonglong param_2, longlong * param_3, int param_4, int param_5, undefined8 * param_6)
 * Address ranges: 180049a24-180049a88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180049a24(longlong param_1,ulonglong param_2,longlong *param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  longlong local_58;
  longlong local_50;
  
  FUN_1800498fc(param_1,&local_58,param_3,param_5 - param_4,param_6);
  if (local_50 != 0) {
    FUN_180049964(param_1,param_2,(longlong)param_3,(longlong)&local_58,param_4);
  }
  return local_50 != 0;
}


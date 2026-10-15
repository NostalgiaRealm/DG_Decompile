/*
 * FUN_1800e4dcc at 1800e4dcc
 * bool __fastcall FUN_1800e4dcc(longlong param_1, ulonglong param_2, longlong * param_3, int param_4, int param_5, undefined8 * param_6)
 * Address ranges: 1800e4dcc-1800e4e30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800e4dcc(longlong param_1,ulonglong param_2,longlong *param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  longlong local_58;
  longlong local_50;
  
  FUN_1800e4ca4(param_1,&local_58,param_3,param_5 - param_4,param_6);
  if (local_50 != 0) {
    FUN_1800e4d0c(param_1,param_2,(longlong)param_3,(longlong)&local_58,param_4);
  }
  return local_50 != 0;
}


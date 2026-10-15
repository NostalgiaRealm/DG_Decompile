/*
 * FUN_18004c030 at 18004c030
 * bool __fastcall FUN_18004c030(longlong param_1, ulonglong param_2, longlong * param_3, int param_4, int param_5, undefined8 * param_6)
 * Address ranges: 18004c030-18004c094
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18004c030(longlong param_1,ulonglong param_2,longlong *param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  longlong local_58;
  longlong local_50;
  
  FUN_18004bf08(param_1,&local_58,param_3,param_5 - param_4,param_6);
  if (local_50 != 0) {
    FUN_18004bf70(param_1,param_2,(longlong)param_3,(longlong)&local_58,param_4);
  }
  return local_50 != 0;
}


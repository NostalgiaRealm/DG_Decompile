/*
 * FUN_18001d554 at 18001d554
 * undefined8 * __fastcall FUN_18001d554(longlong * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d554-18001d5fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18001d554(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_18001d3b8((longlong)param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_18001ca30((longlong)param_1,'\x01');
  *param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  lVar1 = param_1[0x579];
  lVar2 = param_1[0x573];
  *(int *)(param_2 + 5) = (int)param_1[0x574] - (int)param_1[0x57a];
  *(int *)(param_2 + 1) = (int)param_1[0x570] - (int)param_1[0x576];
  param_2[3] = param_1[0x572] - param_1[0x578];
  param_2[4] = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar1 >> 0x20),
                        (int)lVar2 - (int)lVar1);
  FUN_18001c9b8((longlong)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x636] + 0x620));
  return param_2;
}


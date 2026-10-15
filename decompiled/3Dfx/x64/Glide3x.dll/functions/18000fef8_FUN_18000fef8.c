/*
 * FUN_18000fef8 at 18000fef8
 * undefined8 * __fastcall FUN_18000fef8(longlong * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000fef8-18000ffa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18000fef8(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_18000fd5c((longlong)param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_18000f41c((longlong)param_1,'\x01');
  *param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  lVar1 = param_1[0x58c];
  lVar2 = param_1[0x586];
  *(int *)(param_2 + 5) = (int)param_1[0x587] - (int)param_1[0x58d];
  *(int *)(param_2 + 1) = (int)param_1[0x583] - (int)param_1[0x589];
  param_2[3] = param_1[0x585] - param_1[0x58b];
  param_2[4] = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar1 >> 0x20),
                        (int)lVar2 - (int)lVar1);
  FUN_18000f3a4((longlong)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x666] + 0x620));
  return param_2;
}


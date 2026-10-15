/*
 * FUN_18008fcf0 at 18008fcf0
 * ulonglong __fastcall FUN_18008fcf0(longlong param_1, undefined8 param_2, int param_3, uint param_4, char param_5, undefined8 * param_6, undefined4 * param_7)
 * Address ranges: 18008fcf0-18008fd73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18008fcf0(longlong param_1,undefined8 param_2,int param_3,uint param_4,char param_5,
                       undefined8 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined7 extraout_var;
  
  FUN_1800dfe48(*(longlong *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  cVar1 = FUN_18008f558((longlong *)(param_1 + -0xe0),(int)param_2,param_3,param_4,param_5,param_6,
                        param_7);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + -0x90) + 0x620));
  return CONCAT71(extraout_var,cVar1) & 0xffffffff;
}


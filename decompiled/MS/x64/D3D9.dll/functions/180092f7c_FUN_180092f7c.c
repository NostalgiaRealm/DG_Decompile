/*
 * FUN_180092f7c at 180092f7c
 * undefined1 __fastcall FUN_180092f7c(longlong param_1, undefined8 param_2, int param_3, longlong param_4, uint param_5, uint * param_6)
 * Address ranges: 180092f7c-18009301e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180092f7c(longlong param_1,undefined8 param_2,int param_3,longlong param_4,uint param_5,
             uint *param_6)

{
  undefined1 uVar1;
  ulonglong uVar3;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x169) == '\0') {
    uVar3 = FUN_180090478(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar1 = (undefined1)uVar3;
  }
  else {
    FUN_1800dfe48(*(longlong *)(param_1 + -0x90),param_2,param_1 + -0xe0);
    uVar2 = FUN_18008ffd8((longlong *)(param_1 + -0xe0),(int)param_2,param_3,param_4,param_5,
                          (int *)param_6);
    uVar1 = (undefined1)uVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + -0x90) + 0x620));
  }
  return uVar1;
}


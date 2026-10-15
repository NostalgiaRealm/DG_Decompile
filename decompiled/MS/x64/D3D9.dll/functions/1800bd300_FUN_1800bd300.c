/*
 * FUN_1800bd300 at 1800bd300
 * ulonglong __fastcall FUN_1800bd300(longlong param_1, uint param_2, uint param_3, int param_4, undefined8 * param_5)
 * Address ranges: 1800bd300-1800bd345
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800bd300(longlong param_1,uint param_2,uint param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x5a00)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
    uVar2 = FUN_1800c2160(-(ulonglong)(lVar1 != 0) & lVar1 - 8U,param_3,param_4,param_5);
  }
  return uVar2;
}


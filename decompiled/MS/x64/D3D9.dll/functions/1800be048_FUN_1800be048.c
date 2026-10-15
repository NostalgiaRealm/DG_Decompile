/*
 * FUN_1800be048 at 1800be048
 * undefined8 __fastcall FUN_1800be048(longlong param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 1800be048-1800be083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800be048(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x5a00)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
    uVar2 = FUN_1800c1cac(-(ulonglong)(lVar1 != 0) & lVar1 - 8U,(longlong *)&DAT_1800fd6e0,param_3);
  }
  return uVar2;
}


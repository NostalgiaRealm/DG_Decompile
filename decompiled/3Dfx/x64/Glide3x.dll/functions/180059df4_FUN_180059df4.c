/*
 * FUN_180059df4 at 180059df4
 * ulonglong __fastcall FUN_180059df4(longlong param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 180059df4-180059e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180059df4(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = 0;
  if (param_4 == 1) {
    lVar3 = lVar1 + 0x1e20;
  }
  else if (param_4 == 2) {
    lVar3 = lVar1 + 0x1eb0;
  }
  else {
    if (param_4 != 3) goto LAB_180059e39;
    lVar3 = lVar1 + 8000;
  }
  lVar3 = lVar3 + (ulonglong)param_2 * 0x1ac0;
LAB_180059e39:
  puVar2 = FUN_180044a2c(-(ulonglong)(lVar1 != 0) & lVar1 + 0x6d0U,param_2,lVar3,param_3,0);
  return -(ulonglong)(puVar2 != (undefined8 *)0x0) & (ulonglong)(puVar2 + 8);
}


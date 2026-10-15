/*
 * FUN_18008d228 at 18008d228
 * undefined __fastcall FUN_18008d228(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18008d228-18008d29c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18008d228(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 local_1008 [4088];
  undefined8 uStack_10;
  
  uStack_10 = 0x18008d238;
  FUN_1800aa0d0(param_1,param_3,local_1008);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar1 + 0x180))
            (plVar1,*(undefined8 *)(param_1 + 0x1d0b8 + (ulonglong)param_2 * 8),0,0,local_1008,0x400
             ,0x400);
  return;
}


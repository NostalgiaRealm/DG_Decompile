/*
 * FUN_180014888 at 180014888
 * undefined __fastcall FUN_180014888(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 180014888-1800148c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014888(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0xe30);
  }
  FUN_180016afc(plVar1,param_1,0,param_4,(RECT *)0x0,(RECT *)0x0,0,(HWND)0x0);
  return;
}


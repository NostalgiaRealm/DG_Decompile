/*
 * FUN_140001ec8 at 140001ec8
 * undefined8 __fastcall FUN_140001ec8(longlong param_1, int param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 140001ec8-140001f45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140001ec8(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  HWND hWnd;
  undefined8 uVar2;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  iVar1 = GetScrollPos(hWnd,2);
  uVar2 = FUN_14000ed90(param_1,0x41e,iVar1 - (param_2 * 10) / 0x78,
                        CONCAT31((int3)((uint)param_4 >> 8),1));
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    uVar2 = FUN_14000f1e0(*(longlong **)(param_1 + 0x68),(int)uVar2);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


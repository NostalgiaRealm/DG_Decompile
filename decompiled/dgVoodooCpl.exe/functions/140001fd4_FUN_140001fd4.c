/*
 * FUN_140001fd4 at 140001fd4
 * undefined4 __fastcall FUN_140001fd4(longlong param_1, int param_2)
 * Address ranges: 140001fd4-140002060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140001fd4(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  tagSCROLLINFO local_28;
  
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
  local_28.cbSize = 0x1c;
  local_28.fMask = 6;
  GetScrollInfo(pHVar3,2,&local_28);
  uVar1 = FUN_14000ed90(param_1 + -0x70,param_2,local_28.nPos - local_28.nPage,0);
  if (*(longlong *)(param_1 + -8) != 0) {
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
    iVar2 = GetScrollPos(pHVar3,2);
    uVar1 = FUN_14000f1e0(*(longlong **)(param_1 + -8),iVar2);
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


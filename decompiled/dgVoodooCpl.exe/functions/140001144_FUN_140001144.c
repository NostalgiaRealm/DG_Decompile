/*
 * FUN_140001144 at 140001144
 * ulonglong __fastcall FUN_140001144(longlong param_1, int param_2)
 * Address ranges: 140001144-140001176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140001144(longlong param_1,int param_2)

{
  BOOL BVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  if (param_2 == 1) {
    (**(code **)(*(longlong *)(param_1 + -0x68) + 0x70))();
    BVar1 = EndDialog(*(HWND *)(param_1 + -0x50),1);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  else {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  return uVar2;
}


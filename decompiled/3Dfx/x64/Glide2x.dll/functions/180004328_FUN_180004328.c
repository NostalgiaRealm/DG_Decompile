/*
 * FUN_180004328 at 180004328
 * ulonglong __fastcall FUN_180004328(longlong param_1)
 * Address ranges: 180004328-1800043a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180004328(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  bool bVar3;
  DWORD local_res8 [2];
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x3b0));
  bVar3 = BVar1 == 1;
  if (bVar3) {
    local_res8[0] = 0;
    GetWindowThreadProcessId(*(HWND *)(param_1 + 0x3b0),local_res8);
    bVar3 = local_res8[0] == *(uint *)(param_1 + 0x3b8);
    uVar2 = (ulonglong)(*(uint *)(param_1 + 0x3b8) & 0xffffff00);
  }
  else {
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),bVar3);
  }
  if ((*(longlong *)(param_1 + 0x3b0) == 0) || (bVar3)) {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    uVar2 = FUN_18000423c(param_1,'\x01');
  }
  return uVar2;
}


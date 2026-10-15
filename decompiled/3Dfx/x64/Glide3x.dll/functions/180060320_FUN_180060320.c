/*
 * FUN_180060320 at 180060320
 * undefined __fastcall FUN_180060320(longlong param_1)
 * Address ranges: 180060320-180060357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060320(longlong param_1)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = GetHandleInformation(*(HANDLE *)(param_1 + 0x78),local_res8);
  if (BVar1 == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  return;
}


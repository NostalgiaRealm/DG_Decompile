/*
 * FUN_18005e770 at 18005e770
 * undefined __fastcall FUN_18005e770(longlong param_1)
 * Address ranges: 18005e770-18005e7a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e770(longlong param_1)

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


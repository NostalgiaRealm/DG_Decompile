/*
 * FUN_18005ec10 at 18005ec10
 * undefined __fastcall FUN_18005ec10(longlong param_1)
 * Address ranges: 18005ec10-18005ec47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ec10(longlong param_1)

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


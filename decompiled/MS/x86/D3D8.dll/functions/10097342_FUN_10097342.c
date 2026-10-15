/*
 * FUN_10097342 at 10097342
 * undefined __fastcall FUN_10097342(int param_1)
 * Address ranges: 10097342-10097378
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10097342(int param_1)

{
  ushort uVar1;
  HMODULE hInstance;
  
  if (*(short *)(param_1 + 4) != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    hInstance = GetModuleHandleW((LPCWSTR)0x0);
    UnregisterClassW((LPCWSTR)(uint)uVar1,hInstance);
    if (*(int *)(param_1 + 8) != 0) {
      FreeLibrary(*(HMODULE *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}


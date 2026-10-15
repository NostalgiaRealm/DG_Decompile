/*
 * FUN_14000d1a4 at 14000d1a4
 * undefined8 __fastcall FUN_14000d1a4(void)
 * Address ranges: 14000d1a4-14000d328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000d1a4(void)

{
  BOOL BVar1;
  undefined4 local_1e98;
  undefined4 local_1e94;
  tagWNDCLASSEXW local_1e88;
  undefined8 local_1e38 [965];
  undefined8 uStack_10;
  
  uStack_10 = 0x14000d1b8;
  DAT_14002c2e0 = LoadLibraryW(L"comctl32.dll");
  if (DAT_14002c2e0 != (HMODULE)0x0) {
    _DAT_14002c2f0 = GetProcAddress(DAT_14002c2e0,"InitCommonControlsEx");
    if (_DAT_14002c2f0 != (FARPROC)0x0) {
      local_1e98 = 8;
      local_1e94 = 0x426f;
      (*_DAT_14002c2f0)(&local_1e98);
    }
  }
  DAT_14002c2d0 = LoadLibraryW(L"user32.dll");
  if (DAT_14002c2d0 != (HMODULE)0x0) {
    DAT_14002c2d8 = GetProcAddress(DAT_14002c2d0,"EnableNonClientDpiScaling");
    DAT_14002c2e8 = GetProcAddress(DAT_14002c2d0,"SetDialogDpiChangeBehavior");
  }
  local_1e88.cbSize = 0x50;
  FUN_14002511c((undefined1 *)&local_1e88.style,0,0x4c);
  BVar1 = GetClassInfoExW((HINSTANCE)0x0,L"#32770",&local_1e88);
  if (BVar1 != 0) {
    DAT_14002c2f8 = local_1e88.lpfnWndProc;
    local_1e88.lpfnWndProc = FUN_14000d970;
    RegisterClassExW(&local_1e88);
  }
  FUN_14000c958(local_1e38);
  FUN_14000f410((longlong)local_1e38);
  if (DAT_14002c2d0 != (HMODULE)0x0) {
    DAT_14002c2d8 = (FARPROC)0x0;
    DAT_14002c2e8 = (FARPROC)0x0;
    FreeLibrary(DAT_14002c2d0);
    DAT_14002c2d0 = (HMODULE)0x0;
  }
  if (DAT_14002c2e0 != (HMODULE)0x0) {
    _DAT_14002c2f0 = (FARPROC)0x0;
    FreeLibrary(DAT_14002c2e0);
    DAT_14002c2e0 = (HMODULE)0x0;
  }
  FUN_14000cff0(local_1e38);
  return 1;
}


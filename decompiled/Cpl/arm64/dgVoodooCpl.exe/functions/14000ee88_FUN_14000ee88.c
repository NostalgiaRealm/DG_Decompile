/*
 * FUN_14000ee88 at 14000ee88
 * undefined8 __cdecl FUN_14000ee88(void)
 * Address ranges: 14000ee88-14000f02f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000ee88(void)

{
  longlong lVar1;
  BOOL BVar2;
  longlong extraout_x15;
  
  FUN_140001280();
  lVar1 = extraout_x15 * -0x10;
  DAT_14002c2e0 = LoadLibraryW(L"comctl32.dll");
  if (DAT_14002c2e0 != (HMODULE)0x0) {
    DAT_14002c2f0 = GetProcAddress(DAT_14002c2e0,"InitCommonControlsEx");
    if (DAT_14002c2f0 != (FARPROC)0x0) {
      *(undefined8 *)(&stack0xffffffffffffffc0 + lVar1) = 0x426f00000008;
      (*DAT_14002c2f0)();
    }
  }
  DAT_14002c2d0 = LoadLibraryW(L"user32.dll");
  if (DAT_14002c2d0 != (HMODULE)0x0) {
    DAT_14002c2d8 = GetProcAddress(DAT_14002c2d0,"EnableNonClientDpiScaling");
    DAT_14002c2e8 = GetProcAddress(DAT_14002c2d0,"SetDialogDpiChangeBehavior");
  }
  *(undefined4 *)(&stack0xffffffffffffffc8 + lVar1) = 0x50;
  *(undefined8 *)(&stack0xffffffffffffffd4 + lVar1) = 0;
  *(undefined8 *)(&stack0xffffffffffffffcc + lVar1) = 0;
  *(undefined8 *)(&stack0xffffffffffffffe4 + lVar1) = 0;
  *(undefined8 *)(&stack0xffffffffffffffdc + lVar1) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff4 + lVar1) = 0;
  *(undefined8 *)(&stack0xffffffffffffffec + lVar1) = 0;
  *(undefined8 *)(&stack0x00000004 + lVar1) = 0;
  *(undefined8 *)(&stack0xfffffffffffffffc + lVar1) = 0;
  *(undefined8 *)(&stack0x0000000c + lVar1) = 0;
  *(undefined4 *)(&stack0x00000014 + lVar1) = 0;
  BVar2 = GetClassInfoExW((HINSTANCE)0x0,L"#32770",(LPWNDCLASSEXW)(&stack0xffffffffffffffc8 + lVar1)
                         );
  if (BVar2 != 0) {
    DAT_14002c2f8 = *(undefined8 *)(&stack0xffffffffffffffd0 + lVar1);
    *(code **)(&stack0xffffffffffffffd0 + lVar1) = FUN_14000f500;
    RegisterClassExW((WNDCLASSEXW *)(&stack0xffffffffffffffc8 + lVar1));
  }
  FUN_14000e710((undefined8 *)(&stack0x00000018 + lVar1));
  FUN_140010b90((longlong)(&stack0x00000018 + lVar1));
  if (DAT_14002c2d0 != (HMODULE)0x0) {
    DAT_14002c2d8 = (FARPROC)0x0;
    DAT_14002c2e8 = (FARPROC)0x0;
    FreeLibrary(DAT_14002c2d0);
    DAT_14002c2d0 = (HMODULE)0x0;
  }
  if (DAT_14002c2e0 != (HMODULE)0x0) {
    DAT_14002c2f0 = (FARPROC)0x0;
    FreeLibrary(DAT_14002c2e0);
    DAT_14002c2e0 = (HMODULE)0x0;
  }
  FUN_14000ecf8((undefined8 *)(&stack0x00000018 + lVar1));
  return 1;
}


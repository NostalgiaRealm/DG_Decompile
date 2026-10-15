/*
 * FUN_1800df97c at 1800df97c
 * undefined __fastcall FUN_1800df97c(undefined8 param_1, undefined8 * param_2)
 * Address ranges: 1800df97c-1800dfa3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800df97c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)((longlong)param_2 + 0x3c) == 3) {
    if (*(short *)(param_2 + 0x193) != 0) {
      ChangeDisplaySettingsExW
                ((LPCWSTR)((longlong)param_2 + 0xc54),(DEVMODEW *)((longlong)param_2 + 0xc54),
                 (HWND)0x0,0,(LPVOID)0x0);
    }
    SetWindowLongPtrW((HWND)*param_2,-0x10,param_2[0x1a8]);
    SetWindowLongPtrW((HWND)*param_2,-0x14,param_2[0x1a9]);
    SetWindowPos((HWND)*param_2,(HWND)0x0,*(int *)(param_2 + 0x1a6),
                 *(int *)((longlong)param_2 + 0xd34),
                 *(int *)(param_2 + 0x1a7) - *(int *)(param_2 + 0x1a6),
                 *(int *)((longlong)param_2 + 0xd3c) - *(int *)((longlong)param_2 + 0xd34),0x214);
  }
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],0,0);
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  return;
}


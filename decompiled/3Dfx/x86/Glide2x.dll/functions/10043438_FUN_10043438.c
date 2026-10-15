/*
 * FUN_10043438 at 10043438
 * undefined __stdcall FUN_10043438(undefined4 * param_1)
 * Address ranges: 10043438-100434c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043438(undefined4 *param_1)

{
  if (param_1[0xd] == 3) {
    if (*(short *)(param_1 + 0x324) != 0) {
      ChangeDisplaySettingsExW
                ((LPCWSTR)(param_1 + 0x313),(DEVMODEW *)(param_1 + 0x313),(HWND)0x0,0,(LPVOID)0x0);
    }
    SetWindowLongW((HWND)*param_1,-0x10,param_1[0x34e]);
    SetWindowLongW((HWND)*param_1,-0x14,param_1[0x34f]);
    SetWindowPos((HWND)*param_1,(HWND)0x0,param_1[0x34a],param_1[0x34b],
                 param_1[0x34c] - param_1[0x34a],param_1[0x34d] - param_1[0x34b],0x214);
  }
  (**(code **)(*(int *)param_1[1] + 0x28))((int *)param_1[1],0,0);
  param_1[0xd] = 0;
  return;
}


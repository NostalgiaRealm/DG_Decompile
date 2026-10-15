/*
 * FUN_180003e94 at 180003e94
 * undefined __fastcall FUN_180003e94(longlong param_1)
 * Address ranges: 180003e94-180003f6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180003e94(longlong param_1)

{
  HMODULE hInstance;
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x10 + uVar2 * 0x18))();
      FreeLibrary(*(HMODULE *)(*(longlong *)(param_1 + 8) + uVar2 * 0x18));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  FUN_18005d720(*(LPVOID *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x148) != 0) {
    do {
      uVar1 = (int)uVar2 + 1;
      *(undefined8 *)
       ((ulonglong)DAT_18006b01c +
       (ulonglong)(uint)((int)uVar2 * DAT_18006b018) + *(longlong *)(param_1 + 0x108)) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 8 + uVar2 * 0x18);
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x148));
  }
  if (*(short *)(param_1 + 0x6c) != 0) {
    hInstance = GetModuleHandleW((LPCWSTR)0x0);
    UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(param_1 + 0x6c),hInstance);
    if (*(HMODULE *)(param_1 + 0x70) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180003f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(*(LPVOID *)(param_1 + 0xa8),0,0x8000);
  return;
}


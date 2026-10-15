/*
 * FUN_180006738 at 180006738
 * undefined __cdecl FUN_180006738(undefined8 * param_1)
 * Address ranges: 180006738-18000688b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006738(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  HMODULE hInstance;
  ulonglong uVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar2 = FUN_1800608a0((uint *)(param_1 + 0xd)), iVar2 == 0)
     ) {
    uVar4 = FUN_180006898((longlong)param_1,0);
    uVar5 = 0;
    if (*(int *)(param_1 + 2) != 0) {
      do {
        (**(code **)(param_1[1] + uVar5 * 0x18 + 0x10))(uVar4);
        uVar3 = FreeLibrary(*(HMODULE *)(param_1[1] + uVar5 * 0x18));
        uVar4 = (ulonglong)uVar3;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 2));
    }
    thunk_FUN_18005fbc8((LPVOID)param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    uVar4 = 0;
    if (*(int *)(param_1 + 0x29) != 0) {
      do {
        lVar1 = uVar4 * 0x18;
        iVar2 = (int)uVar4;
        uVar3 = iVar2 + 1;
        uVar4 = (ulonglong)uVar3;
        *(undefined8 *)(param_1[0x21] + (ulonglong)(uint)(iVar2 * 0x2c) + 0x1c) =
             *(undefined8 *)(param_1[0x28] + lVar1 + 8);
      } while (uVar3 < *(uint *)(param_1 + 0x29));
    }
    if (*(short *)((longlong)param_1 + 0x6c) != 0) {
      hInstance = GetModuleHandleW((LPCWSTR)0x0);
      UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)param_1 + 0x6c),hInstance);
      if ((HMODULE)param_1[0xe] != (HMODULE)0x0) {
        FreeLibrary((HMODULE)param_1[0xe]);
        param_1[0xe] = 0;
      }
    }
    VirtualFree((LPVOID)param_1[0x15],0,0x8000);
    FUN_180005ee0(param_1);
    FUN_18005fbc8(param_1);
  }
  return;
}


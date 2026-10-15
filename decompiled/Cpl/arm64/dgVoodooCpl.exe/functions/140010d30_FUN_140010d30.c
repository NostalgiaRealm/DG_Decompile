/*
 * FUN_140010d30 at 140010d30
 * undefined __cdecl FUN_140010d30(undefined8 * param_1)
 * Address ranges: 140010d30-140010e1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010d30(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  DeleteObject((HGDIOBJ)param_1[6]);
  param_1[6] = 0;
  uVar2 = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    do {
      DeleteObject(*(HGDIOBJ *)(param_1[0xc] + uVar2 * 0x20 + 0x18));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0x6c));
  }
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  thunk_FUN_140024830((LPVOID)param_1[10]);
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    do {
      DeleteObject(*(HGDIOBJ *)(param_1[0xf] + uVar2 * 0x20 + 0x18));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0x84));
  }
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  thunk_FUN_140024830((LPVOID)param_1[0xf]);
  thunk_FUN_140024830((LPVOID)param_1[0xc]);
  thunk_FUN_140024830((LPVOID)param_1[10]);
  return;
}


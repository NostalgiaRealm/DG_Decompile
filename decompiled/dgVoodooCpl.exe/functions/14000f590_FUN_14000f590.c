/*
 * FUN_14000f590 at 14000f590
 * undefined __fastcall FUN_14000f590(undefined8 * param_1)
 * Address ranges: 14000f590-14000f663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f590(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  DeleteObject((HGDIOBJ)param_1[6]);
  uVar1 = 0;
  param_1[6] = 0;
  uVar3 = uVar1;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    do {
      DeleteObject(*(HGDIOBJ *)(param_1[0xc] + 0x18 + uVar3 * 0x20));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x6c));
  }
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  FUN_140024260((LPVOID)param_1[10]);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    do {
      DeleteObject(*(HGDIOBJ *)(param_1[0xf] + 0x18 + uVar1 * 0x20));
      uVar2 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x84));
  }
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  FUN_140024260((LPVOID)param_1[0xf]);
  FUN_140024260((LPVOID)param_1[0xc]);
  FUN_140024260((LPVOID)param_1[10]);
  return;
}


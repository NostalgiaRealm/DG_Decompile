/*
 * FUN_1800e6718 at 1800e6718
 * undefined __fastcall FUN_1800e6718(longlong param_1, longlong * param_2)
 * Address ranges: 1800e6718-1800e677c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e6718(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_1800e78b0(*(longlong **)(param_1 + 0x10),*(longlong *)(*param_2 + uVar2 * 8));
      FUN_1800fbcf0((LPVOID)**(undefined8 **)(*param_2 + uVar2 * 8));
      FUN_1800fbcf0(*(LPVOID *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  FUN_1800fbcf0((LPVOID)*param_2);
  FUN_1800fbcf0(param_2);
  return;
}


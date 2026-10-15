/*
 * FUN_1800410c0 at 1800410c0
 * undefined __fastcall FUN_1800410c0(longlong param_1, longlong * param_2)
 * Address ranges: 1800410c0-180041124
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800410c0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_18004205c(*(longlong **)(param_1 + 0x10),*(longlong *)(*param_2 + uVar2 * 8));
      FUN_18005dbc0((LPVOID)**(undefined8 **)(*param_2 + uVar2 * 8));
      FUN_18005dbc0(*(LPVOID *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  FUN_18005dbc0((LPVOID)*param_2);
  FUN_18005dbc0(param_2);
  return;
}


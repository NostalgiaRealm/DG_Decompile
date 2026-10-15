/*
 * FUN_180040c18 at 180040c18
 * undefined __fastcall FUN_180040c18(longlong param_1, longlong * param_2)
 * Address ranges: 180040c18-180040c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040c18(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_180041bb4(*(longlong **)(param_1 + 0x10),*(longlong *)(*param_2 + uVar2 * 8));
      FUN_18005d720((LPVOID)**(undefined8 **)(*param_2 + uVar2 * 8));
      FUN_18005d720(*(LPVOID *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  FUN_18005d720((LPVOID)*param_2);
  FUN_18005d720(param_2);
  return;
}


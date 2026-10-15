/*
 * FUN_1800568b8 at 1800568b8
 * undefined __cdecl FUN_1800568b8(longlong * param_1, longlong * param_2)
 * Address ranges: 1800568b8-180056937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800568b8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong auStack_50 [8];
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2,auStack_50);
    lVar2 = FUN_180056938(param_1,auStack_50);
    if (lVar2 != 0) {
      uVar3 = 0;
      do {
        if (*(longlong **)(lVar2 + 0x20 + uVar3 * 0x30) == param_2) {
          *(undefined1 *)(uVar3 * 0x30 + lVar2 + 0x28) = 0;
          return;
        }
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < 0x14);
    }
  }
  return;
}


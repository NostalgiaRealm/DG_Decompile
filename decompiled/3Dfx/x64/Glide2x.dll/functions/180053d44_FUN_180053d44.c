/*
 * FUN_180053d44 at 180053d44
 * undefined __fastcall FUN_180053d44(longlong * param_1, longlong * param_2)
 * Address ranges: 180053d44-180053da2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053d44(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_48 [16];
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2,local_48);
    lVar1 = FUN_180053da4(param_1,local_48);
    if (lVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(longlong **)(lVar1 + 0x20 + uVar3 * 0x30) == param_2) {
          *(undefined1 *)(lVar1 + 0x28 + uVar3 * 0x30) = 0;
          return;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 0x14);
    }
  }
  return;
}


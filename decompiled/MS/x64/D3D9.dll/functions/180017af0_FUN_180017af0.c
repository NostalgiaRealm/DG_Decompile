/*
 * FUN_180017af0 at 180017af0
 * undefined __fastcall FUN_180017af0(longlong param_1, longlong param_2)
 * Address ranges: 180017af0-180017b42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017af0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      uVar3 = 0;
      if (*(short *)(param_1 + 0x3c) != 0) {
        do {
          uVar1 = uVar3 + uVar2 * 0x10;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + (ulonglong)uVar1 * 8) + 8) + 0xf0) =
               0;
        } while (uVar3 < *(ushort *)(param_1 + 0x3c));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x80));
  }
  return;
}


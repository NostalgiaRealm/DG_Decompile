/*
 * FUN_180017a68 at 180017a68
 * undefined __fastcall FUN_180017a68(longlong param_1, longlong * param_2)
 * Address ranges: 180017a68-180017aed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017a68(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 0x89) = 0;
  if (*(int *)(*param_2 + 0x54) == 1) {
    uVar3 = 1;
    if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x3c);
    }
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x89) = 1;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        uVar2 = 0;
        if (uVar3 != 0) {
          do {
            if (*(int *)(*(longlong *)(param_2[uVar2 + uVar1 * 0x10] + 8) + 0xf0) != 1) {
              *(undefined1 *)(param_1 + 0x89) = 0;
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x80));
    }
  }
  return;
}


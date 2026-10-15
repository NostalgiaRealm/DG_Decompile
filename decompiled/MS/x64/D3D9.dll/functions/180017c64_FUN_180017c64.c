/*
 * FUN_180017c64 at 180017c64
 * undefined __fastcall FUN_180017c64(longlong param_1)
 * Address ranges: 180017c64-180017cf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017c64(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar4 = 1;
    if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x3c);
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        uVar5 = 0;
        if (uVar4 != 0) {
          do {
            uVar1 = uVar5 + uVar3 * 0x10;
            uVar5 = uVar5 + 1;
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 8) + 8);
            *(undefined8 *)(lVar2 + 0xf8) = 0;
            *(undefined8 *)(lVar2 + 0x28) = 0;
            *(uint *)(lVar2 + 0x48) = *(uint *)(lVar2 + 0x48) | 0x28;
          } while (uVar5 < uVar4);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x80));
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1800fbdd4(*(LPVOID *)(*(longlong *)(param_1 + 0x60) + -8));
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


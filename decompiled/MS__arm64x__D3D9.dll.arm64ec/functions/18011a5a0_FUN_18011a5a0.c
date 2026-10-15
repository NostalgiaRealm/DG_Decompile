/*
 * FUN_18011a5a0 at 18011a5a0
 * undefined FUN_18011a5a0(void)
 * Address ranges: 18011a5a0-18011a63f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011a5a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar3 = 1;
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        uVar5 = 0;
        if (uVar3 != 0) {
          do {
            uVar1 = uVar5 + uVar2 * 0x10;
            uVar5 = uVar5 + 1;
            lVar4 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 8) + 8);
            *(undefined8 *)(lVar4 + 0xf8) = 0;
            *(undefined8 *)(lVar4 + 0x28) = 0;
            *(uint *)(lVar4 + 0x48) = *(uint *)(lVar4 + 0x48) | 0x28;
          } while (uVar5 < uVar3);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x80));
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + -8));
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


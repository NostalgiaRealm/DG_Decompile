/*
 * FUN_1801c1640 at 1801c1640
 * undefined FUN_1801c1640(void)
 * Address ranges: 1801c1640-1801c16c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c1640(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  lVar2 = FUN_18021f2d0();
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar2 + 0x80);
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        if (*(undefined ***)(*(longlong *)(lVar2 + 0x78) + uVar3 * 8) == &PTR_PTR_180248b78) {
          if ((int)uVar3 != -1) {
            while (uVar1 = (int)uVar3 + 1, uVar1 < uVar4) {
              *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + uVar3 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)uVar1 * 8);
              uVar3 = (ulonglong)uVar1;
              uVar4 = *(uint *)(lVar2 + 0x80);
            }
            *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
          }
          break;
        }
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < uVar4);
    }
    FUN_18021fa28();
  }
  return;
}


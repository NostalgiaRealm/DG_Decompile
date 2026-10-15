/*
 * FUN_1800a8548 at 1800a8548
 * undefined FUN_1800a8548(void)
 * Address ranges: 1800a8548-1800a85cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a8548(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  lVar2 = FUN_1800ff988();
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar2 + 0x80);
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        if (*(undefined ***)(*(longlong *)(lVar2 + 0x78) + uVar3 * 8) == &PTR_PTR_18024c5a0) {
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
    FUN_180100178();
  }
  return;
}


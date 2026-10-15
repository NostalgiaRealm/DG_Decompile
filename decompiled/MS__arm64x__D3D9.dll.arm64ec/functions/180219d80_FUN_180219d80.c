/*
 * FUN_180219d80 at 180219d80
 * undefined FUN_180219d80(void)
 * Address ranges: 180219d80-180219e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180219d80(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  lVar6 = 0;
  do {
    if (*(longlong *)(param_2 + 0xdb8 + lVar6 * 8) != 0) {
      FUN_18021d418(param_1 + (ulonglong)uVar3 * 0x1ac0 + 0x21b8);
      *(undefined8 *)(param_2 + 0xdb8 + lVar6 * 8) = 0;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 2);
  uVar3 = *(uint *)(param_2 + 0xdc8);
  if (uVar3 != 0xffffffff) {
    lVar6 = *(longlong *)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x2230);
    thunk_FUN_1802236f8(lVar6 + 0x28);
    uVar2 = uVar3 & 0xffff;
    uVar1 = uVar2 + 2;
    if (uVar2 < uVar1) {
      lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + (ulonglong)(uVar3 >> 0x10) * 0x10 + 8);
      do {
        uVar4 = -1L << ((ulonglong)uVar2 & 0x3f);
        uVar3 = (uVar2 & 0xffffffc0) + 0x40;
        if (uVar1 < uVar3) {
          uVar4 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar4;
        }
        *(ulonglong *)(lVar5 + (ulonglong)(uVar2 >> 6) * 8) =
             *(ulonglong *)(lVar5 + (ulonglong)(uVar2 >> 6) * 8) & (uVar4 ^ 0xffffffffffffffff);
        uVar2 = uVar3;
      } while (uVar3 < uVar1);
    }
    thunk_FUN_18022370c(lVar6 + 0x28);
    *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
  }
  return;
}


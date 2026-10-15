/*
 * FUN_1801624a8 at 1801624a8
 * undefined FUN_1801624a8(void)
 * Address ranges: 1801624a8-18016255f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801624a8(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  uVar1 = *param_2;
  thunk_FUN_1802236f8(param_1 + 0xc0);
  uVar2 = *(uint *)(param_1 + 0xa8);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar7 = uVar5 + uVar6 >> 1;
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar7 * 0x2e0);
      uVar3 = uVar7;
      if (uVar4 <= uVar1) {
        if (uVar1 <= uVar4) break;
        uVar6 = uVar7 + 1;
        uVar7 = uVar7 + 1;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar6);
    if (uVar7 != uVar2) {
      uVar4 = (ulonglong)uVar7 * 0x2e0;
      lVar8 = *(longlong *)(param_1 + 0xa0);
      if (*(ulonglong *)(lVar8 + uVar4) == (ulonglong)uVar1) {
        uVar9 = 0xffffffff;
        if (lVar8 + (uVar4 | 0x10) != 0) {
          uVar9 = *(undefined4 *)(lVar8 + uVar4 + 0x29c);
        }
        goto LAB_180162548;
      }
    }
  }
  uVar9 = 0xffffffff;
LAB_180162548:
  thunk_FUN_18022370c(param_1 + 0xc0);
  return uVar9;
}


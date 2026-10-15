/*
 * FUN_1800e6f1c at 1800e6f1c
 * undefined __fastcall FUN_1800e6f1c(longlong param_1, uint param_2)
 * Address ranges: 1800e6f1c-1800e6f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e6f1c(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if ((param_2 != 0xffffffff) && (uVar1 = *(uint *)(param_1 + 0x10), uVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar9 = (ulonglong)param_2;
    uVar7 = 0;
    uVar8 = uVar1;
    do {
      uVar5 = uVar8 + uVar7 >> 1;
      uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar3 <= uVar9) {
        if (uVar9 <= uVar3) break;
        uVar7 = uVar5 + 1;
        uVar4 = uVar8;
        uVar5 = uVar7;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar7);
    if (((uVar5 != uVar1) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar9)) &&
       (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10), plVar6 != (longlong *)0x0)) {
      *(undefined1 *)(*plVar6 + 0x20) = 0;
    }
  }
  return;
}


/*
 * FUN_180057e80 at 180057e80
 * undefined __fastcall FUN_180057e80(longlong param_1, ulonglong param_2, uint param_3)
 * Address ranges: 180057e80-180057f0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057e80(longlong param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_3 != 0xffffffff) {
    lVar9 = (param_2 & 0xffffffff) * 0x1ac0;
    uVar1 = *(uint *)(lVar9 + 0x2340 + *(longlong *)(param_1 + 8));
    if (uVar1 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x2338 + *(longlong *)(param_1 + 8));
      uVar8 = (ulonglong)param_3;
      uVar7 = 0;
      uVar6 = uVar1;
      do {
        uVar4 = uVar6 + uVar7 >> 1;
        uVar2 = *(ulonglong *)(lVar9 + (ulonglong)uVar4 * 0x18);
        uVar3 = uVar4;
        if (uVar2 <= uVar8) {
          if (uVar8 <= uVar2) break;
          uVar7 = uVar4 + 1;
          uVar3 = uVar6;
          uVar4 = uVar7;
        }
        uVar6 = uVar3;
      } while (uVar6 != uVar7);
      if (((uVar4 != uVar1) && (*(ulonglong *)(lVar9 + (ulonglong)uVar4 * 0x18) == uVar8)) &&
         (plVar5 = (longlong *)(lVar9 + (ulonglong)uVar4 * 0x18 + 0x10), plVar5 != (longlong *)0x0))
      {
        *(undefined1 *)(*plVar5 + 0x20) = 0;
      }
    }
  }
  return;
}


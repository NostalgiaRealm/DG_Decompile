/*
 * FUN_1800bde60 at 1800bde60
 * undefined8 __fastcall FUN_1800bde60(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800bde60-1800bdf0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bde60(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar1 = *(uint *)(param_1 + -0x5908);
  if (uVar1 != 0) {
    lVar10 = *(longlong *)(param_1 + -0x5910);
    uVar11 = (ulonglong)param_2;
    uVar7 = 0;
    uVar9 = uVar1;
    do {
      uVar5 = uVar9 + uVar7 >> 1;
      uVar3 = *(ulonglong *)(lVar10 + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar3 <= uVar11) {
        if (uVar11 <= uVar3) break;
        uVar7 = uVar5 + 1;
        uVar4 = uVar9;
        uVar5 = uVar7;
      }
      uVar9 = uVar4;
    } while (uVar9 != uVar7);
    if (((uVar5 != uVar1) && (*(ulonglong *)(lVar10 + (ulonglong)uVar5 * 0x18) == uVar11)) &&
       (plVar6 = (longlong *)(lVar10 + (ulonglong)uVar5 * 0x18 + 0x10), plVar6 != (longlong *)0x0))
    {
      lVar10 = *plVar6;
      goto LAB_1800bded1;
    }
  }
  lVar10 = param_1 + -0x5900;
LAB_1800bded1:
  lVar8 = 0;
  do {
    uVar2 = *(undefined4 *)(lVar10 + lVar8 * 4);
    *(char *)(param_3 + lVar8 * 4) = (char)((uint)uVar2 >> 0x10);
    *(char *)(param_3 + 2 + lVar8 * 4) = (char)uVar2;
    *(char *)(param_3 + 1 + lVar8 * 4) = (char)((uint)uVar2 >> 8);
    *(char *)(param_3 + 3 + lVar8 * 4) = (char)((uint)uVar2 >> 0x18);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x100);
  return 0;
}


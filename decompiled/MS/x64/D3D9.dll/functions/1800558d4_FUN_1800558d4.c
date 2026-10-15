/*
 * FUN_1800558d4 at 1800558d4
 * undefined __fastcall FUN_1800558d4(longlong * param_1)
 * Address ranges: 1800558d4-18005597f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800558d4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xf888));
  bVar6 = FUN_180057064(lVar2 + 0xf808,uVar3);
  if ((!bVar6) && (uVar1 = *(uint *)(lVar2 + 0xf840), uVar1 != 0)) {
    lVar4 = *(longlong *)(lVar2 + 0xf838);
    uVar10 = 0;
    uVar7 = uVar1;
    do {
      uVar8 = uVar7 + uVar10 >> 1;
      uVar9 = (ulonglong)uVar8;
      uVar5 = *(ulonglong *)(lVar4 + uVar9 * 0x38);
      if (uVar5 <= uVar3) {
        if (uVar3 <= uVar5) break;
        uVar10 = uVar8 + 1;
        uVar9 = (ulonglong)uVar10;
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
    } while (uVar7 != uVar10);
    if ((((uint)uVar9 != uVar1) && (*(ulonglong *)(uVar9 * 0x38 + lVar4) == uVar3)) &&
       (plVar11 = (longlong *)(lVar4 + 0x10 + uVar9 * 0x38), plVar11 != (longlong *)0x0)) {
      FUN_1800574a8(lVar2 + 0xf808,uVar3,*plVar11,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180055979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xf888));
  return;
}


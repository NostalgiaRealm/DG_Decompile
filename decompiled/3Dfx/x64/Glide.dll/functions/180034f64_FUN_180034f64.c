/*
 * FUN_180034f64 at 180034f64
 * undefined8 __fastcall FUN_180034f64(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180034f64-1800350da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180034f64(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 extraout_RAX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (*(ulonglong *)(param_1 + 0x28) == *(ulonglong *)(param_1 + 0x48)) {
    uVar7 = *(ulonglong *)(param_1 + 0x48) & 0xffffffffffffff00;
  }
  else {
    FUN_18001d3b8(*(longlong *)(param_1 + 0x60),param_2,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x48);
    FUN_180034f14(param_1);
    FUN_18001c5d8(*(longlong *)(param_1 + 0x60));
    lVar10 = *(longlong *)(param_1 + 0x60);
    if (((*(char *)(lVar10 + 0x3170) != '\0') || (*(char *)(param_1 + 0x38) != '\0')) ||
       (lVar6 = *(longlong *)(param_1 + 0xa0), lVar6 == 0)) {
      lVar6 = FUN_18003514c(param_1 + 0xa8,lVar10 + 0x2bf0,*(uint *)(lVar10 + 0x228));
      lVar10 = *(longlong *)(param_1 + 0x60);
      *(longlong *)(param_1 + 0xa0) = lVar6;
      *(undefined1 *)(param_1 + 0x38) = 0;
      if (lVar6 == 0) {
        lVar6 = *(longlong *)
                 (param_1 + 0x68 +
                 (longlong)*(int *)(&DAT_180060fb8 + (ulonglong)*(uint *)(lVar10 + 0x228) * 4) * 8);
      }
    }
    uVar7 = *(ulonglong *)(param_1 + 0x80);
    uVar9 = *(ulonglong *)(param_1 + 0x88);
    FUN_18001c51c(lVar10,*(int *)(param_1 + 0x54),uVar9,uVar7,lVar6);
    uVar11 = 0;
    do {
      uVar8 = (ulonglong)uVar11;
      cVar5 = FUN_18002324c(*(longlong *)(param_1 + 0x60),uVar11);
      FUN_18001c27c(*(longlong *)(param_1 + 0x60),uVar8,uVar9,uVar7);
      FUN_18001c050(*(longlong *)(param_1 + 0x60));
      uVar7 = 0;
      uVar9 = lVar2 - lVar1 >> 2 & 0xffffffff;
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
      (**(code **)(*plVar4 + 0x60))(plVar4,lVar3 - lVar2 >> 2 & 0xffffffff);
      uVar11 = uVar11 + 1;
    } while (cVar5 != '\0');
    FUN_180036358(param_1);
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    FUN_180034e30(param_1,(byte)param_2,(byte)param_3);
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0) + 0x620));
    uVar7 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  return uVar7;
}


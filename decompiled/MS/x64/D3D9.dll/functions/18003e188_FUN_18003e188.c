/*
 * FUN_18003e188 at 18003e188
 * undefined4 __fastcall FUN_18003e188(longlong param_1, uint * param_2)
 * Address ranges: 18003e188-18003e22f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18003e188(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar5;
  
  uVar9 = (ulonglong)*param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    uVar10 = 0;
    uVar7 = uVar1;
    do {
      uVar4 = uVar7 + uVar10 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = *(ulonglong *)(lVar2 + uVar5 * 0x2f0);
      if (uVar3 <= uVar9) {
        if (uVar9 <= uVar3) break;
        uVar10 = uVar4 + 1;
        uVar5 = (ulonglong)uVar10;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar10);
    if (((uint)uVar5 != uVar1) && (lVar6 = uVar5 * 0x2f0, *(ulonglong *)(lVar6 + lVar2) == uVar9)) {
      uVar8 = 0xffffffff;
      if (lVar2 + 0x10 + lVar6 != 0) {
        uVar8 = *(undefined4 *)(lVar6 + 0x2ac + lVar2);
      }
      goto LAB_18003e215;
    }
  }
  uVar8 = 0xffffffff;
LAB_18003e215:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return uVar8;
}


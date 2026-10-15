/*
 * FUN_1800580c0 at 1800580c0
 * undefined4 __fastcall FUN_1800580c0(longlong param_1, uint * param_2)
 * Address ranges: 1800580c0-180058168
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800580c0(longlong param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar6;
  
  uVar9 = (ulonglong)*param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  uVar2 = *(uint *)(param_1 + 0xa8);
  if (uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar7 = uVar2;
    do {
      uVar5 = uVar7 + uVar10 >> 1;
      uVar6 = (ulonglong)uVar5;
      uVar4 = *(ulonglong *)(lVar3 + uVar6 * 0x2e0);
      if (uVar4 <= uVar9) {
        if (uVar9 <= uVar4) break;
        uVar10 = uVar5 + 1;
        uVar6 = (ulonglong)uVar10;
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar10);
    if ((uint)uVar6 != uVar2) {
      puVar1 = (ulonglong *)(uVar6 * 0x2e0 + lVar3);
      if (*puVar1 == uVar9) {
        uVar8 = 0xffffffff;
        if ((uVar6 * 0x2e0 | 0x10) + lVar3 != 0) {
          uVar8 = *(undefined4 *)((longlong)puVar1 + 0x29c);
        }
        goto LAB_18005814e;
      }
    }
  }
  uVar8 = 0xffffffff;
LAB_18005814e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  return uVar8;
}


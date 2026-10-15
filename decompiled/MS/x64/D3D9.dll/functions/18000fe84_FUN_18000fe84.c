/*
 * FUN_18000fe84 at 18000fe84
 * LPVOID __fastcall FUN_18000fe84(longlong param_1, uint param_2)
 * Address ranges: 18000fe84-18000ff2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_18000fe84(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  LPVOID pvVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [6];
  undefined4 local_28 [2];
  LPVOID local_20;
  LPVOID local_18;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xc0);
    uVar9 = (ulonglong)param_2;
    uVar6 = 0;
    uVar8 = uVar1;
    do {
      uVar4 = uVar8 + uVar6 >> 1;
      uVar2 = *(ulonglong *)(lVar5 + (ulonglong)uVar4 * 0x28);
      uVar3 = uVar4;
      if (uVar2 <= uVar9) {
        if (uVar9 <= uVar2) break;
        uVar6 = uVar4 + 1;
        uVar3 = uVar8;
        uVar4 = uVar6;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar6);
    if ((uVar4 != uVar1) && (*(ulonglong *)(lVar5 + (ulonglong)uVar4 * 0x28) == uVar9)) {
      pvVar7 = (LPVOID)(lVar5 + 0x10 + (ulonglong)uVar4 * 0x28);
      goto LAB_18000feeb;
    }
  }
  pvVar7 = (LPVOID)0x0;
LAB_18000feeb:
  if (pvVar7 == (LPVOID)0x0) {
    local_28[0] = 0;
    local_res10[0] = param_2;
    local_20 = pvVar7;
    local_18 = pvVar7;
    lVar5 = FUN_180012120((longlong *)(param_1 + 0xb8),local_res10,local_28);
    pvVar7 = (LPVOID)(lVar5 + 8);
    FUN_1800fbcf0(local_20);
  }
  return pvVar7;
}


/*
 * FUN_18001bbd0 at 18001bbd0
 * undefined __fastcall FUN_18001bbd0(longlong param_1, uint param_2)
 * Address ranges: 18001bbd0-18001bc94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001bbd0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint local_res10 [6];
  ulonglong uVar5;
  
  uVar7 = 0;
  while (local_res10[0] = param_2, *(int *)(*(longlong *)(param_1 + 0x358) + uVar7 * 4) != -1) {
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    if (7 < uVar6) {
      if (uVar6 != 8) {
        return;
      }
      FUN_180004454((longlong *)(param_1 + 0x358),local_res10);
      return;
    }
  }
  *(uint *)(*(longlong *)(param_1 + 0x358) + uVar7 * 4) = param_2;
  uVar6 = *(uint *)(param_1 + 0x328);
  if (uVar6 != 0) {
    lVar1 = *(longlong *)(param_1 + 800);
    uVar8 = 0;
    uVar9 = (ulonglong)param_2;
    uVar3 = uVar6;
    do {
      uVar4 = uVar3 + (int)uVar8 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar2 = *(ulonglong *)(lVar1 + uVar5 * 0x78);
      if (uVar2 <= uVar9) {
        if (uVar9 <= uVar2) break;
        uVar5 = (ulonglong)(uVar4 + 1);
        uVar8 = uVar5;
        uVar4 = uVar3;
      }
      uVar3 = uVar4;
    } while (uVar3 != (uint)uVar8);
    if ((((uint)uVar5 != uVar6) && (*(ulonglong *)(uVar5 * 0x78 + lVar1) == uVar9)) &&
       (lVar1 + 0xc + uVar5 * 0x78 != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))(*(longlong **)(param_1 + 0x28),uVar7);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),uVar7,1);
  return;
}


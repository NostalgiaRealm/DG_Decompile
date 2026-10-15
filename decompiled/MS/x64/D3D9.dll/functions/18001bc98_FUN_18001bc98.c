/*
 * FUN_18001bc98 at 18001bc98
 * undefined __fastcall FUN_18001bc98(longlong param_1, uint param_2)
 * Address ranges: 18001bc98-18001bdbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001bc98(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar4;
  ulonglong uVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  uVar9 = (ulonglong)param_2;
  uVar6 = 0;
  while (*(uint *)(lVar1 + uVar6 * 4) != param_2) {
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    if (7 < uVar5) {
      if (uVar5 == 8) {
        uVar5 = *(uint *)(param_1 + 0x360);
        uVar6 = 8;
        if (8 < uVar5) {
          do {
            uVar7 = (int)uVar6 + 1;
            uVar9 = (ulonglong)uVar7;
            if (*(uint *)(lVar1 + uVar6 * 4) == param_2) {
              if (uVar7 < uVar5) {
                do {
                  iVar2 = (int)uVar9;
                  lVar1 = uVar9 * 4;
                  uVar5 = iVar2 + 1;
                  uVar9 = (ulonglong)uVar5;
                  *(undefined4 *)(*(longlong *)(param_1 + 0x358) + (ulonglong)(iVar2 - 1) * 4) =
                       *(undefined4 *)(*(longlong *)(param_1 + 0x358) + lVar1);
                } while (uVar5 < *(uint *)(param_1 + 0x360));
              }
              *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -1;
              return;
            }
            uVar6 = uVar9;
          } while (uVar7 < uVar5);
        }
      }
      return;
    }
  }
  if (*(uint *)(param_1 + 0x360) < 9) {
    *(undefined4 *)(lVar1 + uVar6 * 4) = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),uVar6,0);
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x360) - 1;
  *(uint *)(param_1 + 0x360) = uVar5;
  *(undefined4 *)(lVar1 + uVar6 * 4) = *(undefined4 *)(lVar1 + (ulonglong)uVar5 * 4);
  uVar5 = *(uint *)(param_1 + 0x328);
  if (uVar5 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 800);
  uVar8 = 0;
  uVar7 = uVar5;
  do {
    uVar3 = uVar7 + uVar8 >> 1;
    uVar4 = (ulonglong)uVar3;
    uVar6 = *(ulonglong *)(lVar1 + uVar4 * 0x78);
    if (uVar6 <= uVar9) {
      if (uVar9 <= uVar6) break;
      uVar8 = uVar3 + 1;
      uVar4 = (ulonglong)uVar8;
      uVar3 = uVar7;
    }
    uVar7 = uVar3;
  } while (uVar7 != uVar8);
  if ((uint)uVar4 == uVar5) {
    return;
  }
  if (*(ulonglong *)(uVar4 * 0x78 + lVar1) != uVar9) {
    return;
  }
  if (lVar1 + 0xc + uVar4 * 0x78 == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))();
  return;
}


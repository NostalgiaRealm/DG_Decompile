/*
 * FUN_180057064 at 180057064
 * bool __fastcall FUN_180057064(longlong param_1, ulonglong param_2)
 * Address ranges: 180057064-1800570f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180057064(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  ulonglong local_res10 [3];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 == 0) {
LAB_1800570e6:
    puVar6 = (uint *)0x0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x70);
    uVar8 = 0;
    uVar7 = uVar1;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar3 <= param_2) {
        if (param_2 <= uVar3) break;
        uVar8 = uVar5 + 1;
        uVar4 = uVar7;
        uVar5 = uVar8;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if ((uVar5 == uVar1) || (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) != param_2))
    goto LAB_1800570e6;
    puVar6 = (uint *)(lVar2 + 0x10 + (ulonglong)uVar5 * 0x18);
    bVar9 = true;
    if (puVar6 == (uint *)0x0) goto LAB_1800570eb;
    *(undefined1 *)((ulonglong)*puVar6 * 0x40 + 0x3d + *(longlong *)(param_1 + 0x40)) = 1;
    local_res10[0] = param_2;
    FUN_180057844(param_1 + 0x68,local_res10);
  }
  bVar9 = puVar6 == (uint *)0x0;
LAB_1800570eb:
  return !bVar9;
}


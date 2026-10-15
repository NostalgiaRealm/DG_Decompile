/*
 * FUN_1800b0868 at 1800b0868
 * undefined __fastcall FUN_1800b0868(longlong param_1, uint param_2, longlong param_3, longlong * param_4, longlong * param_5)
 * Address ranges: 1800b0868-1800b09d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b0868(longlong param_1,uint param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res10 [2];
  
  uVar5 = (ulonglong)param_2;
  if (param_3 == *(longlong *)(param_1 + 0x13b8 + uVar5 * 8)) {
    return;
  }
  FUN_1800fa780(local_res10);
  bVar3 = (byte)param_2;
  if (param_4 == (longlong *)0x0) {
    if (param_5 == (longlong *)0x0) {
      bVar2 = false;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
                (*(longlong **)(param_1 + 0x28),uVar5,0,0,0);
      param_4 = (longlong *)0x0;
      goto LAB_1800b0922;
    }
    lVar9 = param_5[0x1c];
    iVar4 = (int)param_5[0x1f];
    param_4 = param_5;
  }
  else {
    lVar9 = param_4[0xb];
    iVar4 = *(int *)((longlong)param_4 + 0x74);
  }
  bVar2 = iVar4 == 0x28 || iVar4 == 0x29;
  (**(code **)(*param_4 + 8))(param_4);
  *(uint *)(param_4 + 7) = *(uint *)(param_4 + 7) | 1 << (bVar3 + 0x10 & 0x1f);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
            (*(longlong **)(param_1 + 0x28),uVar5,0,lVar9,0);
LAB_1800b0922:
  lVar9 = *(longlong *)(param_1 + 0x13b8 + uVar5 * 8);
  if (lVar9 != 0) {
    puVar1 = (uint *)(lVar9 + 0x38);
    *puVar1 = *puVar1 & ~(1 << (bVar3 + 0x10 & 0x1f));
    (**(code **)(**(longlong **)(param_1 + 0x13b8 + uVar5 * 8) + 0x10))();
  }
  *(longlong **)(param_1 + 0x13b8 + uVar5 * 8) = param_4;
  if ((param_4 == (longlong *)0x0) || (*(char *)((longlong)param_4 + 0x3e) == '\0')) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  uVar6 = 1 << (bVar3 & 0x1f);
  uVar8 = ~uVar6;
  *(uint *)(param_1 + 0x67fc) = iVar4 << (bVar3 & 0x1f) | uVar8 & *(uint *)(param_1 + 0x67fc);
  uVar7 = uVar6 | *(uint *)(param_1 + 0x6800);
  if (!bVar2) {
    uVar7 = uVar8 & *(uint *)(param_1 + 0x6800);
  }
  *(uint *)(param_1 + 0x6800) = uVar7;
  uVar7 = uVar6 | *(uint *)(param_1 + 0x6804);
  if (!bVar2) {
    uVar7 = uVar8 & *(uint *)(param_1 + 0x6804);
  }
  *(uint *)(param_1 + 0x6804) = uVar7;
  FUN_1800fa7bc();
  return;
}


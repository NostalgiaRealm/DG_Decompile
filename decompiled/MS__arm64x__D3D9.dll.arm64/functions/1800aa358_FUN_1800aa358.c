/*
 * FUN_1800aa358 at 1800aa358
 * undefined FUN_1800aa358(void)
 * Address ranges: 1800aa358-1800aa4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa358(longlong param_1,uint param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)param_2;
  lVar2 = param_1 + uVar6 * 8;
  if (param_3 == *(longlong *)(lVar2 + 0x13b8)) {
    return;
  }
  if (param_4 == (longlong *)0x0) {
    if (param_5 == (longlong *)0x0) {
      bVar1 = false;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
                (*(longlong **)(param_1 + 0x28),uVar6,0,0,0);
      param_5 = (longlong *)0x0;
      goto LAB_1800aa430;
    }
    lVar7 = param_5[0x1c];
    iVar3 = (int)param_5[0x1f];
  }
  else {
    lVar7 = param_4[0xb];
    iVar3 = *(int *)((longlong)param_4 + 0x74);
    param_5 = param_4;
  }
  bVar1 = iVar3 - 0x28U < 2;
  (**(code **)(*param_5 + 8))(param_5);
  *(uint *)(param_5 + 7) = 1 << (ulonglong)(param_2 + 0x10 & 0x1f) | *(uint *)(param_5 + 7);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
            (*(longlong **)(param_1 + 0x28),uVar6,0,lVar7,0);
LAB_1800aa430:
  lVar7 = *(longlong *)(lVar2 + 0x13b8);
  if (lVar7 != 0) {
    *(uint *)(lVar7 + 0x38) =
         *(uint *)(lVar7 + 0x38) & (1 << (ulonglong)(param_2 + 0x10 & 0x1f) ^ 0xffffffffU);
    (**(code **)(**(longlong **)(lVar2 + 0x13b8) + 0x10))();
  }
  *(longlong **)(lVar2 + 0x13b8) = param_5;
  if ((param_5 == (longlong *)0x0) || (*(char *)((longlong)param_5 + 0x3e) == '\0')) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  uVar4 = 1 << (ulonglong)(param_2 & 0x1f);
  *(uint *)(&DAT_000067fc + param_1) =
       iVar3 << (ulonglong)(param_2 & 0x1f) |
       *(uint *)(&DAT_000067fc + param_1) & (uVar4 ^ 0xffffffff);
  if (bVar1) {
    uVar5 = *(uint *)(param_1 + 0x6800) | uVar4;
    uVar4 = *(uint *)(param_1 + 0x6804) | uVar4;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x6800) & (uVar4 ^ 0xffffffff);
    uVar4 = *(uint *)(param_1 + 0x6804) & (uVar4 ^ 0xffffffff);
  }
  *(uint *)(param_1 + 0x6800) = uVar5;
  *(uint *)(param_1 + 0x6804) = uVar4;
  return;
}


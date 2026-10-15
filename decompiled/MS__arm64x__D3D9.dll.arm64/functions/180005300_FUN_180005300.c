/*
 * FUN_180005300 at 180005300
 * undefined FUN_180005300(void)
 * Address ranges: 180005300-18000564f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005300(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong local_58;
  uint local_50;
  
  local_50 = 0;
  uVar6 = (ulonglong)param_2;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar6 * 8);
  local_58 = *(ulonglong *)(lVar7 + 0xacd8);
  uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
  uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
  uVar2 = (uint)uVar5;
  while ((1 - (uVar2 >> 6) & 0xff) == 0) {
    local_50 = local_50 + 0x40;
    if (0xf < local_50) goto LAB_180005458;
    local_58 = *(ulonglong *)(lVar7 + 0xacd8 + (ulonglong)(local_50 >> 6) * 8);
    uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    uVar2 = (uint)uVar5;
  }
  *(byte *)((longlong)&local_58 + (uVar5 >> 3)) =
       *(byte *)((longlong)&local_58 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
  iVar3 = local_50 + (int)uVar5;
  if (iVar3 != -1) {
    do {
      uVar2 = local_50;
      plVar1 = *(longlong **)(lVar7 + 0x5310 + (longlong)iVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      uVar4 = (uint)uVar5;
      while ((1 - (uVar4 >> 6) & 0xff) == 0) {
        uVar2 = uVar2 + 0x40;
        local_50 = uVar2;
        if (0xf < uVar2) goto LAB_180005458;
        local_58 = *(ulonglong *)(lVar7 + 0xacd8 + (ulonglong)(uVar2 >> 6) * 8);
        uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        uVar4 = (uint)uVar5;
      }
      *(byte *)((longlong)&local_58 + (uVar5 >> 3)) =
           *(byte *)((longlong)&local_58 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
      iVar3 = local_50 + (int)uVar5;
    } while (iVar3 != -1);
  }
LAB_180005458:
  local_50 = 0;
  local_58 = *(ulonglong *)(lVar7 + 0xacf0);
  uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
  uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
  uVar2 = (uint)uVar5;
  while ((1 - (uVar2 >> 6) & 0xff) == 0) {
    local_50 = local_50 + 0x40;
    if (0xf < local_50) goto LAB_180005580;
    local_58 = *(ulonglong *)(lVar7 + 0xacf0 + (ulonglong)(local_50 >> 6) * 8);
    uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    uVar2 = (uint)uVar5;
  }
  *(byte *)((longlong)&local_58 + (uVar5 >> 3)) =
       *(byte *)((longlong)&local_58 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
  iVar3 = local_50 + (int)uVar5;
  if (iVar3 != -1) {
    do {
      uVar2 = local_50;
      plVar1 = *(longlong **)(lVar7 + 0xab60 + (longlong)iVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
      }
      uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      uVar4 = (uint)uVar5;
      while ((1 - (uVar4 >> 6) & 0xff) == 0) {
        uVar2 = uVar2 + 0x40;
        local_50 = uVar2;
        if (0xf < uVar2) goto LAB_180005580;
        local_58 = *(ulonglong *)(lVar7 + 0xacf0 + (ulonglong)(uVar2 >> 6) * 8);
        uVar5 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        uVar4 = (uint)uVar5;
      }
      *(byte *)((longlong)&local_58 + (uVar5 >> 3)) =
           *(byte *)((longlong)&local_58 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
      iVar3 = local_50 + (int)uVar5;
    } while (iVar3 != -1);
  }
LAB_180005580:
  if ((*(char *)(lVar7 + 0xacfa) != '\0') && (*(longlong **)(lVar7 + 0xab58) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar7 + 0xab58) + 0x10))();
  }
  FUN_180102fc0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar6 * 8) + 8),0);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar6 * 8);
  if (lVar7 != 0) {
    thunk_FUN_180102fc0(*(undefined8 *)(lVar7 + 0x4ab8));
    *(undefined8 *)(lVar7 + 0x4ac8) = 0;
    *(undefined8 *)(lVar7 + 0x4ab8) = 0;
    *(undefined8 *)(lVar7 + 0x4ac0) = 0;
    FUN_180102fc0(lVar7,0xad40);
  }
  uVar2 = *(uint *)(param_1 + 0x400);
  if (param_2 == uVar2 - 1) {
    if (param_2 < uVar2) {
      while (uVar4 = param_2 + 1, uVar4 < uVar2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)param_2 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)uVar4 * 8);
        param_2 = uVar4;
        uVar2 = *(uint *)(param_1 + 0x400);
      }
      *(uint *)(param_1 + 0x400) = uVar2 - 1;
    }
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)param_2 * 8) = 0;
  }
  return;
}


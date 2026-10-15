/*
 * FUN_18010a8c8 at 18010a8c8
 * undefined FUN_18010a8c8(void)
 * Address ranges: 18010a8c8-18010ac57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010a8c8(longlong param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong local_50;
  uint local_48;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_48 = 0;
  uVar6 = (ulonglong)param_2;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar6 * 8);
  local_50 = *(ulonglong *)(lVar7 + 0xacd8);
  uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
  uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
  uVar2 = (uint)uVar5;
  while ((1 - (uVar2 >> 6) & 0xff) == 0) {
    local_48 = local_48 + 0x40;
    if (0xf < local_48) goto LAB_18010aa40;
    local_50 = *(ulonglong *)(lVar7 + 0xacd8 + (ulonglong)(local_48 >> 6) * 8);
    uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    uVar2 = (uint)uVar5;
  }
  *(byte *)((longlong)&local_50 + (uVar5 >> 3)) =
       *(byte *)((longlong)&local_50 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
  iVar3 = local_48 + (int)uVar5;
  if (iVar3 != -1) {
    do {
      uVar2 = local_48;
      if (*(longlong *)(lVar7 + 0x5310 + (longlong)iVar3 * 8) != 0) {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11)();
      }
      uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      uVar4 = (uint)uVar5;
      while ((1 - (uVar4 >> 6) & 0xff) == 0) {
        uVar2 = uVar2 + 0x40;
        local_48 = uVar2;
        if (0xf < uVar2) goto LAB_18010aa40;
        local_50 = *(ulonglong *)(lVar7 + 0xacd8 + (ulonglong)(uVar2 >> 6) * 8);
        uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        uVar4 = (uint)uVar5;
      }
      *(byte *)((longlong)&local_50 + (uVar5 >> 3)) =
           *(byte *)((longlong)&local_50 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
      iVar3 = local_48 + (int)uVar5;
    } while (iVar3 != -1);
  }
LAB_18010aa40:
  local_48 = 0;
  local_50 = *(ulonglong *)(lVar7 + 0xacf0);
  uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
  uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
  uVar2 = (uint)uVar5;
  while ((1 - (uVar2 >> 6) & 0xff) == 0) {
    local_48 = local_48 + 0x40;
    if (0xf < local_48) goto LAB_18010ab78;
    local_50 = *(ulonglong *)(lVar7 + 0xacf0 + (ulonglong)(local_48 >> 6) * 8);
    uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    uVar2 = (uint)uVar5;
  }
  *(byte *)((longlong)&local_50 + (uVar5 >> 3)) =
       *(byte *)((longlong)&local_50 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
  iVar3 = local_48 + (int)uVar5;
  if (iVar3 != -1) {
    do {
      uVar2 = local_48;
      if (*(longlong *)(lVar7 + 0xab60 + (longlong)iVar3 * 8) != 0) {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)();
      }
      uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      uVar4 = (uint)uVar5;
      while ((1 - (uVar4 >> 6) & 0xff) == 0) {
        uVar2 = uVar2 + 0x40;
        local_48 = uVar2;
        if (0xf < uVar2) goto LAB_18010ab78;
        local_50 = *(ulonglong *)(lVar7 + 0xacf0 + (ulonglong)(uVar2 >> 6) * 8);
        uVar5 = (local_50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_50 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        uVar4 = (uint)uVar5;
      }
      *(byte *)((longlong)&local_50 + (uVar5 >> 3)) =
           *(byte *)((longlong)&local_50 + (uVar5 >> 3)) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
      iVar3 = local_48 + (int)uVar5;
    } while (iVar3 != -1);
  }
LAB_18010ab78:
  if ((*(char *)(lVar7 + 0xacfa) != '\0') && (*(longlong *)(lVar7 + 0xab58) != 0)) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
  }
  FUN_1802229d8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar6 * 8) + 8),0);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar6 * 8);
  if (lVar7 != 0) {
    FUN_1802229d8(*(undefined8 *)(lVar7 + 0x4ab8));
    *(undefined8 *)(lVar7 + 0x4ac8) = 0;
    *(undefined8 *)(lVar7 + 0x4ab8) = 0;
    *(undefined8 *)(lVar7 + 0x4ac0) = 0;
    FUN_1802229d8(lVar7,0xad40);
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


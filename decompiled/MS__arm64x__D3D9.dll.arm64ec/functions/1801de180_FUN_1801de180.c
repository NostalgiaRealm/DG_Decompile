/*
 * FUN_1801de180 at 1801de180
 * undefined FUN_1801de180(void)
 * Address ranges: 1801de180-1801de44b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801de180(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  code *extraout_x11;
  ulonglong local_48;
  uint local_40;
  
  if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar4 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar4 == 0) {
      FUN_1801085c8();
    }
  }
  if ((*(char *)(param_1[5] + 0xacf9) != '\0') && (*(longlong *)(param_1[5] + 0x4fb0) != 0)) {
    FUN_1801e40e8();
  }
  if ((*(char *)(param_1[5] + 0xacf8) != '\0') && (*(longlong *)(param_1[5] + 0x4fa8) != 0)) {
    FUN_1801dcdf0();
  }
  if (*(longlong *)(param_1[5] + 0x4fb8) != 0) {
    FUN_1801e3bf8();
  }
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  local_40 = 0;
  lVar5 = param_1[5] + 0xad38;
  local_48 = *(ulonglong *)(param_1[5] + 0xad38);
  uVar8 = (local_48 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_48 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
  uVar6 = (uint)uVar8;
  while ((1 - (uVar6 >> 6) & 0xff) == 0) {
    local_40 = local_40 + 0x40;
    if (4 < local_40) goto LAB_1801de370;
    local_48 = *(ulonglong *)(lVar5 + (ulonglong)(local_40 >> 6) * 8);
    uVar8 = (local_48 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_48 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
    uVar6 = (uint)uVar8;
  }
  *(byte *)((longlong)&local_48 + (uVar8 >> 3)) =
       *(byte *)((longlong)&local_48 + (uVar8 >> 3)) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
  iVar4 = local_40 + (int)uVar8;
  uVar6 = local_40;
  while (local_40 = uVar6, iVar4 != -1) {
    if (*(longlong *)(param_1[5] + (longlong)iVar4 * 8 + 0x4fc0) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11)();
    }
    uVar8 = (local_48 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_48 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
    uVar7 = (uint)uVar8;
    while ((1 - (uVar7 >> 6) & 0xff) == 0) {
      uVar6 = uVar6 + 0x40;
      local_40 = uVar6;
      if (4 < uVar6) goto LAB_1801de370;
      local_48 = *(ulonglong *)(lVar5 + (ulonglong)(uVar6 >> 6) * 8);
      uVar8 = (local_48 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_48 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      uVar7 = (uint)uVar8;
    }
    *(byte *)((longlong)&local_48 + (uVar8 >> 3)) =
         *(byte *)((longlong)&local_48 + (uVar8 >> 3)) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
    uVar6 = local_40;
    iVar4 = local_40 + (int)uVar8;
  }
LAB_1801de370:
  lVar5 = param_1[3];
  uVar6 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(lVar5 + 27000);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if (*(undefined8 **)(*(longlong *)(lVar5 + 0x6970) + uVar8 * 8) == param_1) {
        if ((int)uVar8 != -1) {
          while (uVar1 = (int)uVar8 + 1, uVar1 < uVar7) {
            *(undefined8 *)(*(longlong *)(lVar5 + 0x6970) + uVar8 * 8) =
                 *(undefined8 *)(*(longlong *)(lVar5 + 0x6970) + (ulonglong)uVar1 * 8);
            uVar8 = (ulonglong)uVar1;
            uVar7 = *(uint *)(lVar5 + 27000);
          }
          *(int *)(lVar5 + 27000) = *(int *)(lVar5 + 27000) + -1;
        }
        break;
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < uVar7);
  }
  if (((uVar6 != 0) && (uVar6 <= *(uint *)(lVar5 + 0x400))) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x3f8) + (ulonglong)(uVar6 - 1) * 8) != 0)) {
    FUN_18010a8c8();
  }
  *param_1 = &PTR_FUN_18022edd8;
  FUN_1802229d8(param_1,0x30);
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return;
}


/*
 * FUN_1801e54c8 at 1801e54c8
 * undefined FUN_1801e54c8(void)
 * Address ranges: 1801e54c8-1801e576f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e54c8(longlong param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  longlong local_50;
  
  if (*(char *)(param_1 + -2) == '\0') {
    return 0x8876086c;
  }
  if (((*(uint *)(*(longlong *)(param_1 + -0x40) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_180258900 + 0x30) == 0)) {
    iVar6 = 0;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    iVar6 = 1;
    iVar2 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar2 == 0) {
      FUN_1801085c8();
      local_5c = 1;
      goto LAB_1801e5528;
    }
  }
  local_5c = iVar6;
LAB_1801e5528:
  if (*(int *)(param_1 + -0x1c) != 3) {
    lVar7 = *(longlong *)(param_1 + -0x40);
    local_50 = lVar7 + 0x4000;
    if ((*(char *)(lVar7 + 0x6819) == '\0') || (*(int *)(param_1 + -0x1c) != 0)) {
      if (*(longlong *)(param_1 + -0x98) != 0) {
        *(uint *)(param_1 + -0x78) = *(uint *)(param_1 + -0x78) | 1;
      }
      puVar1 = __hybrid_os_arm64x_dispatch_icall;
      lVar8 = *(longlong *)(param_1 + -0x38);
      uVar5 = *(uint *)(lVar8 + 0x38);
      *(undefined1 *)(lVar8 + 0x3e) = 1;
      uVar4 = uVar5 & 0xffff;
      if (uVar4 != 0) {
        uVar3 = (uVar5 & 0xaaaa) >> 1 | (uVar5 & 0x5555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        local_60 = uVar4;
        uVar3 = (uint)LZCOUNT((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) << 0x10);
        if ((1 - (uVar3 >> 5) & 0xff) != 0) {
          local_58 = uVar5;
          local_54 = uVar4;
          *(byte *)((longlong)&local_60 + (longlong)((int)uVar3 >> 3)) =
               *(byte *)((longlong)&local_60 + (longlong)((int)uVar3 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
          while( true ) {
            auVar9 = (*(code *)puVar1)();
            (*extraout_x11)(auVar9._0_8_,auVar9._8_8_,0,*(undefined8 *)(lVar8 + 0xe0),0,0,0,0);
            uVar4 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
            uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar3 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
            uVar5 = local_58;
            uVar4 = local_54;
            if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)&local_60 + (longlong)((int)uVar3 >> 3)) =
                 *(byte *)((longlong)&local_60 + (longlong)((int)uVar3 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
          }
        }
        *(uint *)(lVar7 + 0xd18) = *(uint *)(lVar7 + 0xd18) | uVar4;
      }
      uVar5 = uVar5 >> 0x10;
      if (uVar5 != 0) {
        uVar4 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        local_60 = uVar5;
        uVar4 = (uint)LZCOUNT((uVar4 >> 8 | (uVar4 & 0xff00ff) << 8) << 0x10);
        if ((1 - (uVar4 >> 5) & 0xff) != 0) {
          local_54 = uVar5;
          *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) =
               *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          while( true ) {
            auVar9 = (*(code *)puVar1)();
            (*extraout_x11_00)(auVar9._0_8_,auVar9._8_8_,0,*(undefined8 *)(lVar8 + 0xe0),0);
            uVar4 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
            uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
            uVar5 = local_54;
            if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) =
                 *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          }
        }
        *(uint *)(local_50 + 0x27fc) = *(uint *)(local_50 + 0x27fc) | uVar5;
      }
    }
  }
  *(undefined1 *)(param_1 + -2) = 0;
  if (local_5c == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
  return 0;
}


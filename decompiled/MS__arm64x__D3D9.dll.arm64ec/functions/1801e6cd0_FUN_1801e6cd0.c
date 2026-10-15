/*
 * FUN_1801e6cd0 at 1801e6cd0
 * undefined FUN_1801e6cd0(void)
 * Address ranges: 1801e6cd0-1801e6f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e6cd0(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  longlong local_50;
  
  if (*(ushort *)(param_1 + -0xdc) <= param_2) {
    return 0x8876086c;
  }
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x100) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x100) + -0x59c0);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    iVar9 = 0;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    iVar9 = 1;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
      local_5c = 1;
      goto LAB_1801e6d4c;
    }
  }
  local_5c = iVar9;
LAB_1801e6d4c:
  lVar7 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0xd8);
  if (*(int *)(lVar7 + 0xa4) != 3) {
    lVar8 = *(longlong *)(lVar7 + 0x80);
    local_50 = lVar8 + 0x4000;
    if ((*(char *)(lVar8 + 0x6819) == '\0') || (*(int *)(lVar7 + 0xa4) != 0)) {
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        *(uint *)(lVar7 + 0x48) = *(uint *)(lVar7 + 0x48) | 1;
      }
      puVar2 = __hybrid_os_arm64x_dispatch_icall;
      lVar10 = *(longlong *)(lVar7 + 0x88);
      uVar6 = *(uint *)(lVar10 + 0x38);
      *(undefined1 *)(lVar10 + 0x3e) = 1;
      uVar5 = uVar6 & 0xffff;
      if (uVar5 != 0) {
        uVar4 = (uVar6 & 0xaaaa) >> 1 | (uVar6 & 0x5555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        local_60 = uVar5;
        uVar4 = (uint)LZCOUNT((uVar4 >> 8 | (uVar4 & 0xff00ff) << 8) << 0x10);
        if ((1 - (uVar4 >> 5) & 0xff) != 0) {
          local_58 = uVar6;
          local_54 = uVar5;
          *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) =
               *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          while( true ) {
            auVar11 = (*(code *)puVar2)();
            (*extraout_x11)(auVar11._0_8_,auVar11._8_8_,0,*(undefined8 *)(lVar10 + 0xe0),0,0,0,0);
            uVar5 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
            uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            uVar4 = (uint)LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
            uVar6 = local_58;
            uVar5 = local_54;
            if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) =
                 *(byte *)((longlong)&local_60 + (longlong)((int)uVar4 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          }
        }
        *(uint *)(lVar8 + 0xd18) = *(uint *)(lVar8 + 0xd18) | uVar5;
      }
      uVar6 = uVar6 >> 0x10;
      if (uVar6 != 0) {
        uVar5 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        local_60 = uVar6;
        uVar5 = (uint)LZCOUNT((uVar5 >> 8 | (uVar5 & 0xff00ff) << 8) << 0x10);
        if ((1 - (uVar5 >> 5) & 0xff) != 0) {
          local_54 = uVar6;
          *(byte *)((longlong)&local_60 + (longlong)((int)uVar5 >> 3)) =
               *(byte *)((longlong)&local_60 + (longlong)((int)uVar5 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
          while( true ) {
            auVar11 = (*(code *)puVar2)();
            (*extraout_x11_00)(auVar11._0_8_,auVar11._8_8_,0,*(undefined8 *)(lVar10 + 0xe0),0);
            uVar5 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
            uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            uVar5 = (uint)LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
            uVar6 = local_54;
            if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)&local_60 + (longlong)((int)uVar5 >> 3)) =
                 *(byte *)((longlong)&local_60 + (longlong)((int)uVar5 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
          }
        }
        *(uint *)(local_50 + 0x27fc) = *(uint *)(local_50 + 0x27fc) | uVar6;
      }
    }
  }
  *(undefined1 *)(lVar7 + 0xbe) = 0;
  if (local_5c == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
  return 0;
}


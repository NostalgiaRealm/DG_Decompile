/*
 * FUN_1801e3a28 at 1801e3a28
 * undefined FUN_1801e3a28(void)
 * Address ranges: 1801e3a28-1801e3bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801e3a28(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  code *extraout_x11;
  
  puVar7 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x50) != 0) {
    puVar7 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x59c0);
  }
  if (((*puVar7 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
    }
  }
  if (*(longlong *)(param_1 + -0x78) != 0) {
    if ((*(longlong *)(param_1 + -0x30) == 0) ||
       (((*(uint *)(param_1 + -0x40) >> 9 & 1) == 0 && (*(char *)(param_1 + -5) == '\0')))) {
      *(undefined8 *)(param_1 + -0x78) = 0;
      FUN_1801042d0(param_1 + -100);
      lVar6 = *(longlong *)(param_1 + -0x50);
      uVar5 = 0;
      do {
        lVar1 = uVar5 * 8;
        if (lVar6 != 0) {
          lVar1 = lVar6 + uVar5 * 8 + -0x6838;
        }
        if (*(longlong *)(lVar1 + 0x66c8) == param_1 + -0x90) {
          puVar7 = (uint *)&DAT_00006808;
          if (lVar6 != 0) {
            puVar7 = (uint *)(lVar6 + -0x30);
          }
          uVar4 = *puVar7 | 1 << (ulonglong)((uint)uVar5 & 0x1f);
          goto LAB_1801e3b80;
        }
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < 0x10);
    }
    else {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      *(undefined8 *)(param_1 + -0x78) = 0;
      if (*(uint *)(param_1 + -0xc) != 0xffffffff) {
        puVar7 = (uint *)&DAT_000067dc;
        if (*(longlong *)(param_1 + -0x50) != 0) {
          puVar7 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x5c);
        }
        uVar4 = *puVar7 & (1 << (ulonglong)(*(uint *)(param_1 + -0xc) & 0x1f) ^ 0xffffffffU);
LAB_1801e3b80:
        *puVar7 = uVar4;
      }
    }
  }
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}


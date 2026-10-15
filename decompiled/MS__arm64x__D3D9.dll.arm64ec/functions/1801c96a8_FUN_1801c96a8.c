/*
 * FUN_1801c96a8 at 1801c96a8
 * undefined FUN_1801c96a8(void)
 * Address ranges: 1801c96a8-1801c97b3;1801c97c8-1801c99c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c96a8(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar4 = true;
    iVar5 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar5 == 0) {
      FUN_1801085c8();
    }
  }
  uVar10 = 0x8876086c;
  if (*(char *)(param_1 + -0x642c) != '\0') goto LAB_1801c9990;
  uVar2 = *(uint *)(param_1 + -0x6438);
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar9 * 8) == 0) {
        if ((int)uVar9 != -1) goto LAB_1801c97e8;
        break;
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < uVar2);
  }
  uVar1 = *(uint *)(param_1 + -0x6434);
  if (uVar2 == uVar1) {
    uVar2 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar2 = 0x10;
    }
    lVar8 = CONCAT44(0,uVar2) << 3;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = FUN_1802229a8(lVar8);
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar8,*(longlong *)(param_1 + -0x6440),
                          (ulonglong)*(uint *)(param_1 + -0x6434) << 3);
    }
    uVar9 = 0xffffffff;
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6438) * 8)
         = 0;
    uVar9 = (ulonglong)*(uint *)(param_1 + -0x6438);
    *(uint *)(param_1 + -0x6438) = *(uint *)(param_1 + -0x6438) + 1;
  }
  if ((int)uVar9 == -1) {
LAB_1801c9900:
    iVar5 = -1;
  }
  else {
LAB_1801c97e8:
    iVar5 = (int)uVar9;
    puVar6 = (undefined4 *)FUN_1802229a8(0xad40);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      lVar8 = 0x10a;
      puVar7 = (undefined8 *)(puVar6 + 0x1de);
      do {
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        lVar8 = lVar8 + -1;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x3f800000;
        *(undefined4 *)(puVar7 + 5) = 0x3f800000;
        *(undefined4 *)((longlong)puVar7 + 0x14) = 0x3f800000;
        *(undefined4 *)puVar7 = 0x3f800000;
        puVar7 = puVar7 + 8;
      } while (lVar8 != 0);
      *(undefined8 *)(puVar6 + 0x12b2) = 0;
      *(undefined8 *)(puVar6 + 0x12ae) = 0;
      *(undefined8 *)(puVar6 + 0x12b0) = 0;
      *(undefined8 *)(puVar6 + 0x2b1c) = 0;
      *(undefined8 *)(puVar6 + 0x2b1a) = 0;
      *(undefined8 *)(puVar6 + 0x2b20) = 0;
      *(undefined8 *)(puVar6 + 0x2b1e) = 0;
      *(undefined8 *)(puVar6 + 0x2b24) = 0;
      *(undefined8 *)(puVar6 + 0x2b22) = 0;
      *(undefined8 *)(puVar6 + 0x2b28) = 0;
      *(undefined8 *)(puVar6 + 0x2b26) = 0;
      *(undefined8 *)(puVar6 + 0x2b2a) = 0;
      *(undefined8 *)(puVar6 + 0x2b2e) = 0;
      *(undefined8 *)(puVar6 + 0x2b2c) = 0;
      *(undefined8 *)(puVar6 + 0x2b32) = 0;
      *(undefined8 *)(puVar6 + 0x2b30) = 0;
      *(undefined8 *)(puVar6 + 0x2b34) = 0;
      *(undefined8 *)(puVar6 + 0x2b36) = 0;
      *(undefined8 *)(puVar6 + 0x2b38) = 0;
      *(undefined2 *)(puVar6 + 0x2b3a) = 0;
      *(undefined8 *)(puVar6 + 0x2b3c) = 0;
      puVar6[0x2b3e] = 0;
      *(undefined2 *)(puVar6 + 0x2b3f) = 0;
      *(undefined1 *)((longlong)puVar6 + 0xacfe) = 0;
      *(undefined8 *)(puVar6 + 0x2b42) = 0;
      *(undefined8 *)(puVar6 + 0x2b40) = 0;
      *(undefined8 *)(puVar6 + 0x2b46) = 0;
      *(undefined8 *)(puVar6 + 0x2b44) = 0;
      *(undefined8 *)(puVar6 + 0x2b4a) = 0;
      *(undefined8 *)(puVar6 + 0x2b48) = 0;
      *(undefined8 *)(puVar6 + 0x2b4c) = 0;
      *(undefined8 *)(puVar6 + 0x2b4e) = 0;
      *(undefined8 *)(puVar6 + 0x13dc) = 0;
      *(undefined8 *)(puVar6 + 0x13da) = 0;
      *(undefined8 *)(puVar6 + 0x13e0) = 0;
      *(undefined8 *)(puVar6 + 0x13de) = 0;
      *(undefined8 *)(puVar6 + 0x13e4) = 0;
      *(undefined8 *)(puVar6 + 0x13e2) = 0;
      *(undefined8 *)(puVar6 + 0x13e8) = 0;
      *(undefined8 *)(puVar6 + 0x13e6) = 0;
    }
    *(undefined4 **)(*(longlong *)(param_1 + -0x6440) + uVar9 * 8) = puVar6;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar9 * 8);
    if (lVar8 == 0) goto LAB_1801c9900;
    FUN_180222c50(lVar8,0,0xad40);
  }
  *(int *)(param_1 + -0x6430) = iVar5;
  if (iVar5 == -1) {
    uVar10 = 0x8007000e;
  }
  else {
    *(undefined1 *)(param_1 + -0x642c) = 1;
    FUN_180222c50(param_1 + -0x658,0,0x400);
    uVar10 = 0;
    *(undefined8 *)(param_1 + -0x250) = 0;
    *(undefined8 *)(param_1 + -600) = 0;
    *(undefined8 *)(param_1 + -0x240) = 0;
    *(undefined8 *)(param_1 + -0x248) = 0;
    *(undefined8 *)(param_1 + -0x230) = 0;
    *(undefined8 *)(param_1 + -0x238) = 0;
    *(undefined8 *)(param_1 + -0x220) = 0;
    *(undefined8 *)(param_1 + -0x228) = 0;
    *(undefined8 *)(param_1 + -0x210) = 0;
    *(undefined8 *)(param_1 + -0x218) = 0;
    *(undefined8 *)(param_1 + -0x200) = 0;
    *(undefined8 *)(param_1 + -0x208) = 0;
    *(undefined8 *)(param_1 + -0x1f0) = 0;
    *(undefined8 *)(param_1 + -0x1f8) = 0;
    *(undefined8 *)(param_1 + -0x1e0) = 0;
    *(undefined8 *)(param_1 + -0x1e8) = 0;
    *(undefined8 *)(param_1 + -0x1d0) = 0;
    *(undefined8 *)(param_1 + -0x1d8) = 0;
    *(undefined8 *)(param_1 + -0x1c0) = 0;
    *(undefined8 *)(param_1 + -0x1c8) = 0;
    *(undefined8 *)(param_1 + -0x1b0) = 0;
    *(undefined8 *)(param_1 + -0x1b8) = 0;
    *(undefined8 *)(param_1 + -0x1a0) = 0;
    *(undefined8 *)(param_1 + -0x1a8) = 0;
    *(undefined8 *)(param_1 + -400) = 0;
    *(undefined8 *)(param_1 + -0x198) = 0;
    *(undefined8 *)(param_1 + -0x180) = 0;
    *(undefined8 *)(param_1 + -0x188) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
LAB_1801c9990:
  if (bVar4) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar10;
}


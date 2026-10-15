/*
 * FUN_1800aff50 at 1800aff50
 * undefined FUN_1800aff50(void)
 * Address ranges: 1800aff50-1800b026f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800aff50(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar6 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar6 == 0) {
      FUN_180003398();
    }
  }
  uVar11 = 0x8876086c;
  if (*(char *)(param_1 + -0x642c) != '\0') goto LAB_1800b0230;
  uVar3 = *(uint *)(param_1 + -0x6438);
  if (uVar3 != 0) {
    uVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar10 * 8) == 0) {
        if ((int)uVar10 != -1) goto LAB_1800b008c;
        break;
      }
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar1;
    } while (uVar1 < uVar3);
  }
  uVar1 = *(uint *)(param_1 + -0x6434);
  plVar2 = (longlong *)(param_1 + -0x6440);
  if (uVar3 == uVar1) {
    uVar3 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar3 = 0x10;
    }
    lVar9 = CONCAT44(0,uVar3) << 3;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,uVar3);
    if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
      lVar9 = -1;
    }
    lVar9 = thunk_FUN_180102f80(lVar9);
    if (lVar9 != 0) {
      thunk_FUN_180001218(lVar9,*plVar2,(ulonglong)*(uint *)(param_1 + -0x6434) << 3);
      thunk_FUN_180102fc0(*plVar2);
      *plVar2 = lVar9;
      *(uint *)(param_1 + -0x6434) = uVar3;
      goto LAB_1800b006c;
    }
    uVar10 = 0xffffffff;
  }
  else {
LAB_1800b006c:
    *(undefined8 *)(*plVar2 + (ulonglong)*(uint *)(param_1 + -0x6438) * 8) = 0;
    uVar10 = (ulonglong)*(uint *)(param_1 + -0x6438);
    *(uint *)(param_1 + -0x6438) = *(uint *)(param_1 + -0x6438) + 1;
  }
  if ((int)uVar10 == -1) {
LAB_1800b01a4:
    iVar6 = -1;
  }
  else {
LAB_1800b008c:
    iVar6 = (int)uVar10;
    puVar7 = (undefined4 *)FUN_180102f80(0xad40);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      lVar9 = 0x10a;
      puVar8 = (undefined8 *)(puVar7 + 0x1de);
      do {
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        lVar9 = lVar9 + -1;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x3f800000;
        *(undefined4 *)(puVar8 + 5) = 0x3f800000;
        *(undefined4 *)((longlong)puVar8 + 0x14) = 0x3f800000;
        *(undefined4 *)puVar8 = 0x3f800000;
        puVar8 = puVar8 + 8;
      } while (lVar9 != 0);
      *(undefined8 *)(puVar7 + 0x12b2) = 0;
      *(undefined8 *)(puVar7 + 0x12ae) = 0;
      *(undefined8 *)(puVar7 + 0x12b0) = 0;
      *(undefined8 *)(puVar7 + 0x2b1c) = 0;
      *(undefined8 *)(puVar7 + 0x2b1a) = 0;
      *(undefined8 *)(puVar7 + 0x2b20) = 0;
      *(undefined8 *)(puVar7 + 0x2b1e) = 0;
      *(undefined8 *)(puVar7 + 0x2b24) = 0;
      *(undefined8 *)(puVar7 + 0x2b22) = 0;
      *(undefined8 *)(puVar7 + 0x2b28) = 0;
      *(undefined8 *)(puVar7 + 0x2b26) = 0;
      *(undefined8 *)(puVar7 + 0x2b2a) = 0;
      *(undefined8 *)(puVar7 + 0x2b2e) = 0;
      *(undefined8 *)(puVar7 + 0x2b2c) = 0;
      *(undefined8 *)(puVar7 + 0x2b32) = 0;
      *(undefined8 *)(puVar7 + 0x2b30) = 0;
      *(undefined8 *)(puVar7 + 0x2b34) = 0;
      *(undefined8 *)(puVar7 + 0x2b36) = 0;
      *(undefined8 *)(puVar7 + 0x2b38) = 0;
      *(undefined2 *)(puVar7 + 0x2b3a) = 0;
      *(undefined8 *)(puVar7 + 0x2b3c) = 0;
      puVar7[0x2b3e] = 0;
      *(undefined2 *)(puVar7 + 0x2b3f) = 0;
      *(undefined1 *)((longlong)puVar7 + 0xacfe) = 0;
      *(undefined8 *)(puVar7 + 0x2b42) = 0;
      *(undefined8 *)(puVar7 + 0x2b40) = 0;
      *(undefined8 *)(puVar7 + 0x2b46) = 0;
      *(undefined8 *)(puVar7 + 0x2b44) = 0;
      *(undefined8 *)(puVar7 + 0x2b4a) = 0;
      *(undefined8 *)(puVar7 + 0x2b48) = 0;
      *(undefined8 *)(puVar7 + 0x2b4c) = 0;
      *(undefined8 *)(puVar7 + 0x2b4e) = 0;
      *(undefined8 *)(puVar7 + 0x13dc) = 0;
      *(undefined8 *)(puVar7 + 0x13da) = 0;
      *(undefined8 *)(puVar7 + 0x13e0) = 0;
      *(undefined8 *)(puVar7 + 0x13de) = 0;
      *(undefined8 *)(puVar7 + 0x13e4) = 0;
      *(undefined8 *)(puVar7 + 0x13e2) = 0;
      *(undefined8 *)(puVar7 + 0x13e8) = 0;
      *(undefined8 *)(puVar7 + 0x13e6) = 0;
    }
    *(undefined4 **)(*(longlong *)(param_1 + -0x6440) + uVar10 * 8) = puVar7;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar10 * 8);
    if (lVar9 == 0) goto LAB_1800b01a4;
    func_0x000180222c50(lVar9,0,0xad40);
  }
  *(int *)(param_1 + -0x6430) = iVar6;
  if (iVar6 == -1) {
    uVar11 = 0x8007000e;
  }
  else {
    *(undefined1 *)(param_1 + -0x642c) = 1;
    func_0x000180222c50(param_1 + -0x658,0,0x400);
    uVar11 = 0;
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
LAB_1800b0230:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar11;
}


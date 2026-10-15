/*
 * FUN_180080ef8 at 180080ef8
 * undefined FUN_180080ef8(void)
 * Address ranges: 180080ef8-18008116f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180080ef8(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  puVar1 = (uint *)&DAT_00000040;
  if (param_2 != 0) {
    puVar1 = (uint *)(param_2 + -0xa0);
  }
  uVar4 = *puVar1;
  puVar9 = (undefined8 *)FUN_180102f80(0x290);
  if (puVar9 != (undefined8 *)0x0) {
    bVar8 = param_2 != 0;
    puVar2 = (undefined4 *)&DAT_00000178;
    if (bVar8) {
      puVar2 = (undefined4 *)(param_2 + 0x98);
    }
    uVar5 = *puVar2;
    puVar1 = (uint *)&DAT_00000174;
    if (bVar8) {
      puVar1 = (uint *)(param_2 + 0x94);
    }
    uVar6 = *puVar1;
    puVar1 = (uint *)&DAT_00000170;
    if (bVar8) {
      puVar1 = (uint *)(param_2 + 0x90);
    }
    uVar7 = *puVar1;
    puVar1 = (uint *)&DAT_00000028;
    if (bVar8) {
      puVar1 = (uint *)(param_2 + -0xb8);
    }
    uVar11 = (ulonglong)*puVar1;
    puVar1 = (uint *)&DAT_00000024;
    if (bVar8) {
      puVar1 = (uint *)(param_2 + -0xbc);
    }
    uVar10 = (ulonglong)*puVar1;
    puVar2 = (undefined4 *)&DAT_00000044;
    if (param_3 != 0) {
      puVar2 = (undefined4 *)(param_3 + -0x9c);
    }
    puVar3 = (undefined4 *)&DAT_0000002c;
    if (param_3 != 0) {
      puVar3 = (undefined4 *)(param_3 + -0xb4);
    }
    FUN_180088fe8(puVar9,param_1,*(undefined4 *)(param_1 + 0x28),uVar10,uVar11,*puVar3,1,*puVar2,
                  uVar4 & 1 | (uint)((uVar4 & 8) != 0) << 3,0);
    *(undefined4 *)(puVar9 + 0x1d) = 1;
    puVar9[0x1f] = 0;
    puVar9[0x1e] = 0;
    puVar9[0x21] = 0;
    puVar9[0x20] = 0;
    *puVar9 = &PTR_FUN_180234d78;
    puVar9[0x1c] = &PTR_FUN_180234cd0;
    puVar9[0x22] = param_1;
    lVar12 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(puVar9 + 0x24) = *(uint *)(puVar9 + 4);
    puVar9[0x27] = 0;
    puVar9[0x28] = 0;
    puVar9[0x29] = 0;
    puVar9[0x2a] = 0;
    puVar9[0x23] = lVar12;
    puVar9[0x25] = lVar12 + (ulonglong)*(uint *)(puVar9 + 4) * 0x18c0 + 0x6b0;
    puVar9[0x26] = 0;
    puVar9[0x2c] = 0;
    puVar9[0x2b] = 0;
    lVar13 = puVar9[10];
    *(undefined4 *)(puVar9 + 0x2d) = 0x100;
    *puVar9 = &PTR_FUN_180234e98;
    uVar4 = *(uint *)(puVar9 + 4);
    *(uint *)(puVar9 + 0x2e) = uVar7;
    *(uint *)((longlong)puVar9 + 0x174) = uVar6;
    puVar9[0x1c] = &PTR_LAB_180234fa8;
    *(undefined4 *)(puVar9 + 0x2f) = uVar5;
    puVar9[0x30] = lVar13;
    *(uint *)(puVar9 + 0x31) = uVar4;
    puVar9[0x34] = 0;
    puVar9[0x35] = 0;
    puVar9[0x36] = 0;
    puVar9[0x37] = 0;
    lVar12 = lVar13 + (ulonglong)uVar4 * 0x18c0 + 0x6b0;
    puVar9[0x38] = lVar13;
    puVar9[0x32] = lVar12;
    puVar9[0x33] = 0;
    puVar9[0x3a] = lVar12;
    puVar9[0x3b] = 0;
    puVar9[0x42] = lVar12;
    puVar9[0x43] = 0;
    *(uint *)(puVar9 + 0x39) = uVar4;
    puVar9[0x3c] = 0;
    puVar9[0x3d] = 0;
    puVar9[0x3e] = 0;
    puVar9[0x3f] = 0;
    puVar9[0x40] = lVar13;
    *(bool *)(puVar9 + 0x49) = *(uint *)((longlong)puVar9 + 0x2c) < 0xe;
    *(uint *)(puVar9 + 0x41) = uVar4;
    puVar9[0x44] = 0;
    puVar9[0x45] = 0;
    puVar9[0x46] = 0;
    puVar9[0x47] = 0;
    *(undefined2 *)((longlong)puVar9 + 0x249) = 0;
    *(float *)(puVar9 + 0x48) = (float)uVar7 / (float)(uVar10 & 0xffffffff);
    *(float *)((longlong)puVar9 + 0x244) = (float)uVar6 / (float)(uVar11 & 0xffffffff);
    puVar9[0x4b] = 0;
    puVar9[0x4a] = 0;
    puVar9[0x4d] = 0;
    puVar9[0x4c] = 0;
    puVar9[0x4f] = 0;
    puVar9[0x4e] = 0;
    puVar9[0x51] = 0;
    puVar9[0x50] = 0;
    *(undefined4 *)(puVar9 + 0x1d) = 2;
    uVar11 = FUN_180084650(puVar9);
    if ((uVar11 & 1) != 0) {
      FUN_180088628(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar9 + 0x1c;
    }
    FUN_180085f18(puVar9);
    FUN_180102fc0(puVar9,0x290);
  }
  return (undefined8 *)0x0;
}


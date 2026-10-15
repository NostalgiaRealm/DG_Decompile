/*
 * FUN_18008d398 at 18008d398
 * undefined FUN_18008d398(void)
 * Address ranges: 18008d398-18008d617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18008d398(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  puVar2 = (uint *)&DAT_00000040;
  if (param_2 != 0) {
    puVar2 = (uint *)(param_2 + -0xc0);
  }
  uVar5 = *puVar2;
  puVar10 = (undefined8 *)FUN_180102f80(0x290);
  if (puVar10 != (undefined8 *)0x0) {
    bVar9 = param_2 != 0;
    puVar3 = (undefined4 *)&DAT_000001a0;
    if (bVar9) {
      puVar3 = (undefined4 *)(param_2 + 0xa0);
    }
    uVar6 = *puVar3;
    puVar2 = (uint *)&DAT_0000019c;
    if (bVar9) {
      puVar2 = (uint *)(param_2 + 0x9c);
    }
    uVar7 = *puVar2;
    puVar2 = (uint *)&DAT_00000198;
    if (bVar9) {
      puVar2 = (uint *)(param_2 + 0x98);
    }
    uVar8 = *puVar2;
    puVar2 = (uint *)&DAT_00000028;
    if (bVar9) {
      puVar2 = (uint *)(param_2 + -0xd8);
    }
    uVar12 = (ulonglong)*puVar2;
    puVar2 = (uint *)&DAT_00000024;
    if (bVar9) {
      puVar2 = (uint *)(param_2 + -0xdc);
    }
    uVar11 = (ulonglong)*puVar2;
    puVar3 = (undefined4 *)&DAT_00000044;
    if (param_3 != 0) {
      puVar3 = (undefined4 *)(param_3 + -0xbc);
    }
    puVar4 = (undefined4 *)&DAT_0000002c;
    if (param_3 != 0) {
      puVar4 = (undefined4 *)(param_3 + -0xd4);
    }
    FUN_1800994a8(puVar10,param_1,*(undefined4 *)(param_1 + 0x28),uVar11,uVar12,*puVar4,1,*puVar3,
                  uVar5 & 1 | (uint)((uVar5 & 8) != 0) << 3,0);
    puVar10[0x23] = 0;
    puVar10[0x22] = 0;
    puVar10[0x25] = 0;
    puVar10[0x24] = 0;
    uVar5 = *(uint *)(puVar10 + 4);
    lVar13 = puVar10[10];
    *(undefined2 *)((longlong)puVar10 + 0x18c) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x192) = 0;
    puVar10[0x26] = param_1;
    puVar10[0x27] = 0;
    *(uint *)(puVar10 + 0x29) = uVar5;
    puVar10[0x28] = lVar13;
    lVar1 = lVar13 + (ulonglong)uVar5 * 0x1ac0 + 0x900;
    *(longlong *)((longlong)puVar10 + 0x14c) = lVar1;
    *(undefined8 *)((longlong)puVar10 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x15c) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x164) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x16c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar10 + 0x174) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar10 + 0x17c) = 0xffffffff;
    *(undefined8 *)((longlong)puVar10 + 0x184) = 0;
    *(undefined2 *)(puVar10 + 0x32) = 0x100;
    *puVar10 = &PTR_FUN_180235650;
    puVar10[0x20] = &PTR_FUN_180235790;
    puVar10[0x36] = lVar1;
    puVar10[0x37] = 0;
    puVar10[0x40] = lVar1;
    puVar10[0x41] = 0;
    *(longlong *)((longlong)puVar10 + 0x1a4) = lVar13;
    *(uint *)((longlong)puVar10 + 0x1ac) = uVar5;
    puVar10[0x38] = 0;
    puVar10[0x39] = 0;
    puVar10[0x3a] = 0xffffffffffffffff;
    puVar10[0x3b] = 0xffffffffffffffff;
    *(bool *)((longlong)puVar10 + 0x24c) = *(uint *)((longlong)puVar10 + 0x2c) < 0xe;
    *(undefined2 *)(puVar10 + 0x3e) = 0;
    puVar10[0x3c] = 0xffffffff;
    puVar10[0x3d] = 0;
    *(longlong *)((longlong)puVar10 + 500) = lVar13;
    *(uint *)((longlong)puVar10 + 0x1fc) = uVar5;
    puVar10[0x42] = 0;
    puVar10[0x43] = 0;
    puVar10[0x44] = 0xffffffffffffffff;
    puVar10[0x45] = 0xffffffffffffffff;
    *(undefined2 *)(puVar10 + 0x48) = 0;
    puVar10[0x46] = 0xffffffff;
    puVar10[0x47] = 0;
    *(undefined2 *)((longlong)puVar10 + 0x24d) = 0;
    *(uint *)(puVar10 + 0x33) = uVar8;
    *(uint *)((longlong)puVar10 + 0x19c) = uVar7;
    *(undefined4 *)(puVar10 + 0x34) = uVar6;
    *(float *)((longlong)puVar10 + 0x244) = (float)uVar8 / (float)(uVar11 & 0xffffffff);
    *(float *)(puVar10 + 0x49) = (float)uVar7 / (float)(uVar12 & 0xffffffff);
    puVar10[0x4b] = 0;
    puVar10[0x4a] = 0;
    puVar10[0x4d] = 0;
    puVar10[0x4c] = 0;
    puVar10[0x4f] = 0;
    puVar10[0x4e] = 0;
    puVar10[0x51] = 0;
    puVar10[0x50] = 0;
    *(undefined4 *)(puVar10 + 0x21) = 2;
    uVar12 = FUN_180094468(puVar10);
    if ((uVar12 & 1) != 0) {
      FUN_180098440(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar10 + 0x20;
    }
    FUN_180095bb0(puVar10);
    FUN_180102fc0(puVar10,0x290);
  }
  return (undefined8 *)0x0;
}


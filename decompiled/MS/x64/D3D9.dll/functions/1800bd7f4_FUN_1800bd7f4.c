/*
 * FUN_1800bd7f4 at 1800bd7f4
 * undefined8 __fastcall FUN_1800bd7f4(longlong param_1, ulonglong param_2, undefined4 * param_3)
 * Address ranges: 1800bd7f4-1800bd98d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bd7f4(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint local_res10 [6];
  ulonglong uVar8;
  
  uVar10 = param_2 & 0xffffffff;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar5 = false;
  }
  else {
    bVar5 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar12 = 0x8876086c;
  if ((param_3 != (undefined4 *)0x0) && (uVar2 = *(uint *)(param_1 + -0x6510), uVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + -0x6518);
    uVar13 = 0;
    uVar9 = uVar2;
    do {
      uVar7 = uVar9 + uVar13 >> 1;
      uVar8 = (ulonglong)uVar7;
      uVar4 = *(ulonglong *)(lVar3 + uVar8 * 0x78);
      if (uVar4 <= uVar10) {
        if (uVar10 <= uVar4) break;
        uVar13 = uVar7 + 1;
        uVar8 = (ulonglong)uVar13;
        uVar7 = uVar9;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar13);
    if ((((uint)uVar8 != uVar2) && (lVar11 = uVar8 * 0x78, *(ulonglong *)(lVar11 + lVar3) == uVar10)
        ) && (puVar14 = (undefined4 *)(lVar3 + 0xc + lVar11), puVar14 != (undefined4 *)0x0)) {
      FUN_1800fa780(local_res10);
      *param_3 = *puVar14;
      puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar3);
      uVar12 = puVar1[1];
      *(undefined8 *)(param_3 + 1) = *puVar1;
      *(undefined8 *)(param_3 + 3) = uVar12;
      puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar3);
      uVar12 = puVar1[1];
      *(undefined8 *)(param_3 + 5) = *puVar1;
      *(undefined8 *)(param_3 + 7) = uVar12;
      puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar3);
      uVar12 = puVar1[1];
      *(undefined8 *)(param_3 + 9) = *puVar1;
      *(undefined8 *)(param_3 + 0xb) = uVar12;
      *(undefined8 *)(param_3 + 0xd) = *(undefined8 *)(lVar11 + 0x40 + lVar3);
      param_3[0xf] = *(undefined4 *)(lVar11 + 0x48 + lVar3);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar11 + 0x4c + lVar3);
      param_3[0x12] = *(undefined4 *)(lVar11 + 0x54 + lVar3);
      param_3[0x13] = *(undefined4 *)(lVar11 + 0x58 + lVar3);
      param_3[0x14] = *(undefined4 *)(lVar11 + 0x5c + lVar3);
      param_3[0x15] = *(undefined4 *)(lVar11 + 0x60 + lVar3);
      param_3[0x16] = *(undefined4 *)(lVar11 + 100 + lVar3);
      param_3[0x17] = *(undefined4 *)(lVar11 + 0x68 + lVar3);
      param_3[0x18] = *(undefined4 *)(lVar11 + 0x6c + lVar3);
      param_3[0x19] = *(undefined4 *)(lVar11 + 0x70 + lVar3);
      FUN_1800fa7bc();
      uVar12 = 0;
    }
  }
  if (bVar5) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar12;
}


/*
 * FUN_1801c17e0 at 1801c17e0
 * undefined FUN_1801c17e0(void)
 * Address ranges: 1801c17e0-1801c19bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c17e0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar8 = FUN_1801042d0((longlong)param_1 + 0xa4);
  if (*(int *)(param_1 + 0x14) + iVar8 == 0) {
    puVar3 = (uint *)&DAT_00000e78;
    if (param_1[3] != 0) {
      puVar3 = (uint *)(param_1[3] + -0x59c0);
    }
    if (((*puVar3 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar6 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar6 = true;
      iVar8 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar8 == 0) {
        FUN_1801085c8();
      }
    }
    lVar12 = param_1[3];
    bVar7 = lVar12 != 0;
    lVar1 = 0;
    if (bVar7) {
      lVar1 = lVar12 + -0x6838;
    }
    plVar2 = (longlong *)&DAT_00000ed0;
    if (bVar7) {
      plVar2 = (longlong *)(lVar12 + -0x5968);
    }
    puVar3 = (uint *)&DAT_00000ed8;
    if (bVar7) {
      puVar3 = (uint *)(lVar12 + -0x5960);
    }
    if (*puVar3 != 0) {
      uVar10 = 0;
      do {
        uVar9 = (uint)uVar10;
        if (*(undefined8 **)(*plVar2 + uVar10 * 8) == param_1) {
          if (uVar9 != 0xffffffff) {
            puVar4 = (uint *)&DAT_00000ea8;
            if (lVar12 != 0) {
              puVar4 = (uint *)(lVar12 + -0x5990);
            }
            (&DAT_18024ea60)[(ulonglong)*puVar4 * 0x4b] =
                 (&DAT_18024ea60)[(ulonglong)*puVar4 * 0x4b] +
                 (ulonglong)*(uint *)((longlong)param_1 + 0x84);
            uVar11 = *puVar3;
            if (uVar9 < uVar11) {
              while (uVar9 = (int)uVar10 + 1, uVar9 < uVar11) {
                *(undefined8 *)(*plVar2 + uVar10 * 8) =
                     *(undefined8 *)(*plVar2 + (ulonglong)uVar9 * 8);
                uVar10 = (ulonglong)uVar9;
                uVar11 = *puVar3;
              }
              *puVar3 = uVar11 - 1;
            }
            puVar5 = (undefined8 *)0x0;
            if (param_1 != (undefined8 *)0x0) {
              puVar5 = param_1 + 0x12;
            }
            FUN_180105cb0(lVar1,puVar5);
          }
          break;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
      } while (uVar9 + 1 < *puVar3);
    }
    FUN_18011a5a0(param_1);
    FUN_180119e68(param_1);
    param_1[0x12] = &PTR_FUN_180229728;
    param_1[0x13] = &PTR_FUN_18022e310;
    *param_1 = &PTR_D3DPERF_GetStatus_native_180229eb0;
    FUN_180116678(param_1 + 1);
    FUN_1802229d8(param_1,0x418);
    if (bVar6) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return;
}


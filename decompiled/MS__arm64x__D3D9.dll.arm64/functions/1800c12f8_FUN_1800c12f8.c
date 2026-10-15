/*
 * FUN_1800c12f8 at 1800c12f8
 * undefined FUN_1800c12f8(void)
 * Address ranges: 1800c12f8-1800c1523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c12f8(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  
  lVar13 = *(longlong *)(param_1 + -0x38);
  iVar6 = FUN_180001590(param_1 + 8);
  if (*(int *)(param_1 + 0xc) + iVar6 == 0) {
    puVar14 = (undefined8 *)(param_1 + -0x78);
    puVar2 = (uint *)&DAT_00000e78;
    if (*(longlong *)(param_1 + -0x38) != 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar5 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar5 = true;
      iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar7 == 0) {
        FUN_180003398();
      }
    }
    lVar12 = *(longlong *)(param_1 + -0x38);
    plVar1 = (longlong *)&DAT_00000f10;
    if (lVar12 != 0) {
      plVar1 = (longlong *)(lVar12 + -0x5928);
    }
    puVar2 = (uint *)&DAT_00000f18;
    if (lVar12 != 0) {
      puVar2 = (uint *)(lVar12 + -0x5920);
    }
    if (*puVar2 != 0) {
      uVar10 = 0;
      do {
        uVar9 = (uint)uVar10;
        if (*(undefined8 **)(*plVar1 + uVar10 * 8) == puVar14) {
          if (uVar9 != 0xffffffff) {
            if (*(int *)(param_1 + -0x20) == 0) {
              piVar3 = (int *)&DAT_00000e68;
              if (lVar12 != 0) {
                piVar3 = (int *)(lVar12 + -0x59d0);
              }
              if (*piVar3 == 1) {
                puVar4 = (uint *)&DAT_00000ea8;
                if (lVar12 != 0) {
                  puVar4 = (uint *)(lVar12 + -0x5990);
                }
                (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] =
                     (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] +
                     (ulonglong)*(uint *)(param_1 + -0x58);
              }
            }
            uVar11 = *puVar2;
            if (uVar9 < uVar11) {
              while (uVar9 = (int)uVar10 + 1, uVar9 < uVar11) {
                *(undefined8 *)(*plVar1 + uVar10 * 8) =
                     *(undefined8 *)(*plVar1 + (ulonglong)uVar9 * 8);
                uVar10 = (ulonglong)uVar9;
                uVar11 = *puVar2;
              }
              *puVar2 = uVar11 - 1;
            }
          }
          break;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
      } while (uVar9 + 1 < *puVar2);
    }
    puVar8 = *(undefined8 **)(param_1 + -0x18);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    *(undefined8 *)(param_1 + -0x18) = 0;
    if (*(longlong *)(param_1 + -0x70) != 0) {
      FUN_180103118(*(undefined8 *)(*(longlong *)(param_1 + -0x70) + -8));
    }
    *(undefined8 *)(param_1 + -0x70) = 0;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &PTR_thunk_EXT_FUN_00242ff2_1802339d8;
      FUN_18000b538(param_1 + -0x48);
      FUN_180102fc0(puVar14,0x78);
    }
    if (bVar5) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  if (iVar6 == 0) {
    lVar12 = 0x6838;
    if (lVar13 != 0) {
      lVar12 = lVar13;
    }
    FUN_1800a9f28(lVar12);
  }
  return iVar6;
}


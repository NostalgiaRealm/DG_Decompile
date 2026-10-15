/*
 * FUN_1801dc178 at 1801dc178
 * undefined FUN_1801dc178(void)
 * Address ranges: 1801dc178-1801dc37f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801dc178(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  code *extraout_x11;
  
  iVar6 = FUN_1801042d0((longlong)param_1 + 0x84);
  if (*(int *)(param_1 + 0x10) + iVar6 == 0) {
    puVar2 = (uint *)&DAT_00000e78;
    if (param_1[8] != 0) {
      puVar2 = (uint *)(param_1[8] + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar5 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar5 = true;
      iVar6 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar6 == 0) {
        FUN_1801085c8();
      }
    }
    lVar11 = param_1[8];
    plVar1 = (longlong *)&DAT_00000f10;
    if (lVar11 != 0) {
      plVar1 = (longlong *)(lVar11 + -0x5928);
    }
    puVar2 = (uint *)&DAT_00000f18;
    if (lVar11 != 0) {
      puVar2 = (uint *)(lVar11 + -0x5920);
    }
    if (*puVar2 != 0) {
      uVar9 = 0;
      do {
        uVar8 = (uint)uVar9;
        if (*(undefined8 **)(*plVar1 + uVar9 * 8) == param_1) {
          if (uVar8 != 0xffffffff) {
            if (*(int *)(param_1 + 0xb) == 0) {
              piVar3 = (int *)&DAT_00000e68;
              if (lVar11 != 0) {
                piVar3 = (int *)(lVar11 + -0x59d0);
              }
              if (*piVar3 == 1) {
                puVar4 = (uint *)&DAT_00000ea8;
                if (lVar11 != 0) {
                  puVar4 = (uint *)(lVar11 + -0x5990);
                }
                (&DAT_18024ea60)[(ulonglong)*puVar4 * 0x4b] =
                     (&DAT_18024ea60)[(ulonglong)*puVar4 * 0x4b] + (ulonglong)*(uint *)(param_1 + 4)
                ;
              }
            }
            uVar10 = *puVar2;
            if (uVar8 < uVar10) {
              while (uVar8 = (int)uVar9 + 1, uVar8 < uVar10) {
                *(undefined8 *)(*plVar1 + uVar9 * 8) =
                     *(undefined8 *)(*plVar1 + (ulonglong)uVar8 * 8);
                uVar9 = (ulonglong)uVar8;
                uVar10 = *puVar2;
              }
              *puVar2 = uVar10 - 1;
            }
          }
          break;
        }
        uVar9 = (ulonglong)(uVar8 + 1);
      } while (uVar8 + 1 < *puVar2);
    }
    if (param_1[0xc] != 0) {
      uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar7,1);
    }
    param_1[0xc] = 0;
    if (param_1[1] != 0) {
      FUN_180222b28(*(undefined8 *)(param_1[1] + -8));
    }
    *param_1 = &PTR_thunk_FUN_180223720_18022a8c8;
    param_1[1] = 0;
    FUN_180116678(param_1 + 6);
    FUN_1802229d8(param_1,0x78);
    if (bVar5) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return;
}


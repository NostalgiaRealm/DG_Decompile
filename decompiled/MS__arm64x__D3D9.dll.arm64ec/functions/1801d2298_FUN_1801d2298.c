/*
 * FUN_1801d2298 at 1801d2298
 * undefined FUN_1801d2298(void)
 * Address ranges: 1801d2298-1801d24f7;1801d2508-1801d273b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801d2298(longlong param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                       undefined4 param_6,int param_7,undefined4 param_8,char param_9,
                       undefined8 param_10)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 extraout_w9;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar14;
  ulonglong extraout_x15;
  longlong extraout_x15_00;
  undefined8 *puVar15;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  
  uVar14 = 0x8876086c;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_1801d23e8;
  if (*(int *)(param_1 + 0xe68) == 2) {
    puVar13 = &DAT_1802462c8;
    puVar11 = &DAT_1802462cc;
  }
  else {
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0xe28) + 0x10);
    puVar13 = (uint *)(&DAT_180246478 + (ulonglong)uVar5 * 0x1b0);
    puVar11 = (uint *)(&DAT_18024647c + (ulonglong)uVar5 * 0x1b0);
  }
  if (((*puVar13 < param_2) || (*puVar11 < param_3)) ||
     ((param_5 != 0 && (param_7 != 0 || param_9 != '\0')))) goto LAB_1801d23e8;
  uVar6 = FUN_1801074b0(*(undefined8 *)(param_1 + 0xe28),*(undefined4 *)(param_1 + 0xea8),
                        *(int *)(param_1 + 0xe68),*(undefined4 *)(param_1 + 0xe88),param_7,param_8,1
                        ,param_4,0);
  uVar14 = uVar6 & 0xffffffff;
  if ((int)uVar6 < 0) {
LAB_1801d2414:
    uVar6 = 0;
  }
  else {
    if (param_5 != 0) {
      uVar14 = FUN_180107b38(*(undefined8 *)(param_1 + 0xe28),*(undefined4 *)(param_1 + 0xea8),
                             *(undefined4 *)(param_1 + 0xe68),param_4);
      uVar14 = uVar14 & 0xffffffff;
    }
    if ((int)uVar14 < 0) goto LAB_1801d2414;
    uVar6 = 0;
    if ((param_7 == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
      uVar6 = FUN_180116ed0(param_2,param_3,param_4);
      if ((ulonglong)(&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] <
          (uVar6 & 0xffffffff)) {
        uVar14 = 0x8876017c;
        goto LAB_1801d23e8;
      }
      uVar6 = uVar6 & 0xffffffff;
      uVar14 = extraout_x15;
    }
  }
  if (-1 < (int)uVar14) {
    uVar14 = 0x8007000e;
    uStack_5c = 1;
    local_60 = param_4;
    local_58 = param_8;
    iStack_54 = param_7;
    local_50 = param_5;
    uStack_4c = param_6;
    local_48 = param_2;
    uStack_44 = param_3;
    uVar4 = FUN_180106a90(param_4);
    lVar7 = FUN_1801bb5f0(param_1,0,0,0,&local_60,0,0,uVar4,param_9,0,extraout_w9,
                          *(undefined8 *)(param_1 + 0xe98),0,0);
    if (lVar7 == 0) {
      return 0x8007000e;
    }
    uVar8 = FUN_1801168a8(lVar7,0);
    if ((uVar8 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0xefc);
      if (*(int *)(param_1 + 0xef8) == iVar1) {
        uVar5 = iVar1 << 1;
        if (iVar1 == 0) {
          uVar5 = 0x10;
        }
        lVar12 = CONCAT44(0,uVar5) << 3;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(0,uVar5);
        if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
          lVar12 = -1;
        }
        lVar12 = FUN_1802229a8(lVar12);
        if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar12,*(undefined8 *)(param_1 + 0xef0),
                              (ulonglong)*(uint *)(param_1 + 0xefc) << 3);
        }
      }
      else {
        *(longlong *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)*(uint *)(param_1 + 0xef8) * 8) =
             lVar7;
        *(int *)(param_1 + 0xef8) = *(int *)(param_1 + 0xef8) + 1;
        uVar5 = FUN_1801dfb70(lVar7 + 0x80,&DAT_180229278,param_10);
        uVar14 = (ulonglong)uVar5;
        if (-1 < (int)uVar5) {
          (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] =
               (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] - uVar6;
          return uVar14;
        }
        if (*(uint *)(param_1 + 0xef8) != 0) {
          uVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar6 * 8) == lVar7) {
              if ((int)uVar6 != -1) {
                if ((*(int *)(lVar7 + 0x54) == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
                  uVar8 = FUN_180116ed0(600,*(undefined4 *)(lVar7 + 0x60),
                                        *(undefined4 *)(lVar7 + 100),*(undefined4 *)(lVar7 + 0x48));
                  *(ulonglong *)(extraout_x15_00 + 0x220) =
                       *(longlong *)(extraout_x15_00 + 0x220) + (uVar8 & 0xffffffff);
                }
                uVar5 = *(uint *)(param_1 + 0xef8);
                uVar9 = (uint)uVar6;
                if (uVar9 < uVar5) {
                  while (uVar10 = uVar9 + 1, uVar10 < uVar5) {
                    *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar9 * 8) =
                         *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar10 * 8);
                    uVar9 = uVar10;
                    uVar5 = *(uint *)(param_1 + 0xef8);
                  }
                  *(uint *)(param_1 + 0xef8) = uVar5 - 1;
                }
              }
              break;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(param_1 + 0xef8));
        }
      }
      puVar15 = *(undefined8 **)(lVar7 + 8);
      iVar1 = *(int *)((longlong)puVar15 + 0x104) + -1;
      *(int *)((longlong)puVar15 + 0x104) = iVar1;
      puVar3 = __hybrid_os_arm64x_dispatch_icall;
      if (iVar1 == 0) {
        uVar5 = 0;
        if (*(int *)(puVar15 + 0x10) != 0) {
          do {
            (*(code *)puVar3)();
            (*extraout_x11)();
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(puVar15 + 0x10));
        }
        FUN_1802229d8(puVar15[0xf]);
        puVar15[0xf] = 0;
        puVar15[0x10] = 0;
        if ((*(uint *)(puVar15 + 9) >> 3 & 1) == 0) {
          FUN_18012fda0(puVar15,puVar15[0x1f],*(int *)(puVar15 + 3) * 0x40 + 0xfffU & 0xfffff000);
        }
        if (puVar15[0x17] != 0) {
          thunk_FUN_180224288();
          puVar15[0x17] = 0;
          puVar15[0x1c] = 0;
        }
        if (((*(int *)((longlong)puVar15 + 0x94) == 0) && (*(int *)(puVar15 + 0x13) == 0)) &&
           (puVar15[0xe] != 0)) {
          (*(code *)puVar3)(0x180224000);
          (*extraout_x11_00)();
        }
        if (puVar15[0x1f] - 1 < 0xfffffffffffffffe) {
          thunk_FUN_180223824();
        }
        puVar15[0x1f] = 0xffffffffffffffff;
        *puVar15 = &PTR_D3DPERF_GetStatus_native_18022a8e0;
        FUN_1802229d8(puVar15[0xf]);
        FUN_1802229d8(puVar15,0x108);
      }
      *(undefined8 *)(lVar7 + 8) = 0;
      if (*(longlong *)(lVar7 + 0x40) != 0) {
        FUN_180222b28(*(undefined8 *)(*(longlong *)(lVar7 + 0x40) + -8));
      }
      *(undefined8 *)(lVar7 + 0x40) = 0;
    }
    FUN_1801df700(lVar7);
    FUN_1802229d8(lVar7,0xd8);
    return uVar14;
  }
LAB_1801d23e8:
  return uVar14 & 0xffffffff;
}


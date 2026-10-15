/*
 * FUN_1800b78d8 at 1800b78d8
 * undefined FUN_1800b78d8(void)
 * Address ranges: 1800b78d8-1800b7d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b78d8(longlong param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                       undefined4 param_6,int param_7,undefined4 param_8,char param_9,
                       undefined8 param_10)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 extraout_w9;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong extraout_x13;
  longlong extraout_x13_00;
  undefined8 *puVar14;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  
  uVar13 = 0x8876086c;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_1800b7a34;
  if (*(int *)(param_1 + 0xe68) == 2) {
    puVar10 = &DAT_180248bd8;
    puVar11 = &DAT_180248bdc;
  }
  else {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0xe28) + 0x10);
    puVar10 = (uint *)(&DAT_180248d88 + (ulonglong)uVar4 * 0x1b0);
    puVar11 = (uint *)(&DAT_180248d8c + (ulonglong)uVar4 * 0x1b0);
  }
  if (((*puVar10 < param_2) || (*puVar11 < param_3)) ||
     ((param_5 != 0 && (param_7 != 0 || param_9 != '\0')))) goto LAB_1800b7a34;
  uVar5 = FUN_1800022a8(*(undefined8 *)(param_1 + 0xe28),*(undefined4 *)(param_1 + 0xea8),
                        *(int *)(param_1 + 0xe68),*(undefined4 *)(param_1 + 0xe88),param_7,param_8,1
                        ,param_4,0);
  uVar13 = uVar5 & 0xffffffff;
  if ((int)uVar5 < 0) {
LAB_1800b7a64:
    uVar5 = 0;
  }
  else {
    if (param_5 != 0) {
      uVar13 = FUN_180002908(*(undefined8 *)(param_1 + 0xe28),*(undefined4 *)(param_1 + 0xea8),
                             *(undefined4 *)(param_1 + 0xe68),param_4);
      uVar13 = uVar13 & 0xffffffff;
    }
    if ((int)uVar13 < 0) goto LAB_1800b7a64;
    uVar5 = 0;
    if ((param_7 == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
      uVar5 = func_0x000180116ed0(param_2,param_3,param_4);
      if ((ulonglong)(&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] <
          (uVar5 & 0xffffffff)) {
        uVar13 = 0x8876017c;
        goto LAB_1800b7a34;
      }
      uVar5 = uVar5 & 0xffffffff;
      uVar13 = extraout_x13;
    }
  }
  if ((int)uVar13 < 0) {
LAB_1800b7a34:
    return uVar13 & 0xffffffff;
  }
  uStack_6c = 1;
  uVar13 = 0x8007000e;
  local_70 = param_4;
  local_68 = param_8;
  iStack_64 = param_7;
  local_60 = param_5;
  uStack_5c = param_6;
  local_58 = param_2;
  uStack_54 = param_3;
  uVar3 = func_0x000180106a90(param_4);
  lVar6 = FUN_1800a3108(param_1,0,0,0,&local_70,0,0,uVar3,param_9,0,extraout_w9,
                        *(undefined8 *)(param_1 + 0xe98),0,0);
  if (lVar6 == 0) {
    return 0x8007000e;
  }
  uVar7 = FUN_18000b708(lVar6,0);
  if ((uVar7 & 1) == 0) goto LAB_1800b7d58;
  iVar1 = *(int *)(param_1 + 0xefc);
  if (*(int *)(param_1 + 0xef8) == iVar1) {
    uVar4 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar4 = 0x10;
    }
    lVar12 = CONCAT44(0,uVar4) << 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,uVar4);
    if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
      lVar12 = -1;
    }
    lVar12 = thunk_FUN_180102f80(lVar12);
    if (lVar12 != 0) {
      thunk_FUN_180001218(lVar12,*(undefined8 *)(param_1 + 0xef0),
                          (ulonglong)*(uint *)(param_1 + 0xefc) << 3);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xef0));
      *(longlong *)(param_1 + 0xef0) = lVar12;
      *(uint *)(param_1 + 0xefc) = uVar4;
      goto LAB_1800b7b50;
    }
  }
  else {
LAB_1800b7b50:
    *(longlong *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)*(uint *)(param_1 + 0xef8) * 8) =
         lVar6;
    *(int *)(param_1 + 0xef8) = *(int *)(param_1 + 0xef8) + 1;
    uVar4 = FUN_1800c4790(lVar6 + 0x80,&DAT_1802294f8,param_10);
    uVar13 = (ulonglong)uVar4;
    if (-1 < (int)uVar4) {
      (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] =
           (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] - uVar5;
      return uVar13;
    }
    if (*(uint *)(param_1 + 0xef8) != 0) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar5 * 8) == lVar6) {
          if ((int)uVar5 != -1) {
            if ((*(int *)(lVar6 + 0x54) == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
              uVar7 = func_0x000180116ed0(600,*(undefined4 *)(lVar6 + 0x60),
                                          *(undefined4 *)(lVar6 + 100),*(undefined4 *)(lVar6 + 0x48)
                                         );
              *(ulonglong *)(extraout_x13_00 + 0x220) =
                   *(longlong *)(extraout_x13_00 + 0x220) + (uVar7 & 0xffffffff);
            }
            uVar4 = *(uint *)(param_1 + 0xef8);
            uVar8 = (uint)uVar5;
            if (uVar8 < uVar4) {
              while (uVar9 = uVar8 + 1, uVar9 < uVar4) {
                *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar8 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar9 * 8);
                uVar8 = uVar9;
                uVar4 = *(uint *)(param_1 + 0xef8);
              }
              *(uint *)(param_1 + 0xef8) = uVar4 - 1;
            }
          }
          break;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0xef8));
    }
  }
  puVar14 = *(undefined8 **)(lVar6 + 8);
  iVar1 = *(int *)((longlong)puVar14 + 0x104) + -1;
  *(int *)((longlong)puVar14 + 0x104) = iVar1;
  if (iVar1 == 0) {
    uVar5 = 0;
    if (*(int *)(puVar14 + 0x10) != 0) {
      do {
        (**(code **)(**(longlong **)(puVar14[0xf] + uVar5 * 8) + 0x20))();
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(puVar14 + 0x10));
    }
    thunk_FUN_180102fc0(puVar14[0xf]);
    puVar14[0xf] = 0;
    puVar14[0x10] = 0;
    if ((*(uint *)(puVar14 + 9) >> 3 & 1) == 0) {
      FUN_180023590(puVar14,puVar14[0x1f],*(int *)(puVar14 + 3) * 0x40 + 0xfffU & 0xfffff000);
    }
    if (puVar14[0x17] != 0) {
      (*__imp_GDI32_dll_DeleteObject)();
      puVar14[0x17] = 0;
      puVar14[0x1c] = 0;
    }
    if (((*(int *)((longlong)puVar14 + 0x94) == 0) && (*(int *)(puVar14 + 0x13) == 0)) &&
       ((longlong *)puVar14[0xe] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)puVar14[0xe] + 0x20))();
    }
    if (puVar14[0x1f] - 1 < 0xfffffffffffffffe) {
      (*__imp_KERNEL32_dll_CloseHandle)();
    }
    puVar14[0x1f] = 0xffffffffffffffff;
    *puVar14 = &PTR_D3DPERF_GetStatus_18022a8e0;
    thunk_FUN_180102fc0(puVar14[0xf]);
    FUN_180102fc0(puVar14,0x108);
  }
  *(undefined8 *)(lVar6 + 8) = 0;
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    FUN_180103118(*(undefined8 *)(*(longlong *)(lVar6 + 0x40) + -8));
  }
  *(undefined8 *)(lVar6 + 0x40) = 0;
LAB_1800b7d58:
  FUN_1800c4370(lVar6);
  FUN_180102fc0(lVar6,0xd8);
  return uVar13;
}


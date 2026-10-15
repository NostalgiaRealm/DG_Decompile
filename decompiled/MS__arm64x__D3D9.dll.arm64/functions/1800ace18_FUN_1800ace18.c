/*
 * FUN_1800ace18 at 1800ace18
 * undefined FUN_1800ace18(void)
 * Address ranges: 1800ace18-1800ad3cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ace18(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ushort uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 extraout_x1;
  uint uVar14;
  uint uVar15;
  int extraout_w12;
  int extraout_w13;
  undefined4 uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c0;
  uint uStack_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  int iStack_ac;
  uint local_a8;
  int local_a4;
  undefined4 local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar16 = 0x8876086c;
  if (param_2 == (longlong *)0x0) {
    return 0x8876086c;
  }
  if (param_3 == (longlong *)0x0) {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    iVar20 = 0;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    iVar20 = 1;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar7 == 0) {
      FUN_180003398();
    }
  }
  iVar7 = (**(code **)(*param_2 + 0x50))(param_2);
  iVar8 = (**(code **)(*param_3 + 0x50))(param_3);
  if (iVar7 != iVar8) goto LAB_1800acf0c;
  if (iVar8 != 3) {
    if (iVar8 == 4) {
      if ((((int)param_3[-4] == (int)param_2[-4]) && ((int)param_3[-3] == 0)) &&
         ((int)param_2[-3] == 2)) {
        uVar4 = *(ushort *)((longlong)param_2 + -0xdc);
        local_d0 = 0;
        local_cc = 0;
        local_d8 = 0;
        local_d4 = 0;
        local_e0 = 0;
        local_dc = 0;
        local_c8 = (uint)*(ushort *)((longlong)param_3 + -0xdc);
        uVar18 = (uint)uVar4;
        uVar13 = uVar18 - local_c8;
        if (uVar18 < local_c8) {
          uVar13 = 0;
        }
        uVar19 = (uint)uVar4;
        iVar7 = *(ushort *)((longlong)param_3 + -0xdc) - uVar19;
        if (uVar18 >= local_c8) {
          iVar7 = 0;
        }
        func_0x00018011ad48(param_2 + -0x23,uVar13,&local_d4,&local_d8,&local_dc);
        func_0x00018011ad48(param_3 + -0x23,iVar7,&local_e0,&local_cc,&local_d0);
        if (((local_d4 != local_e0 || local_d8 != local_cc) || local_dc != local_d0) &&
           ((uVar13 != 0 || (iVar7 != 0)))) {
          iVar7 = 0;
          uVar13 = 0;
          func_0x00018011ad48(param_2 + -0x23,0,&local_d4,&local_d8,&local_dc);
          func_0x00018011ad48(param_3 + -0x23,extraout_x1,&local_e0,&local_cc,&local_d0);
        }
        uStack_5c = (undefined4)param_3[-6];
        local_58 = *(undefined4 *)((longlong)param_3 + -0x2c);
        local_68 = 0;
        uVar18 = 1;
        local_60 = 0;
        uStack_54 = (undefined4)param_3[-5];
        local_98 = (undefined4)param_2[-0xb];
        uStack_94 = *(undefined4 *)((longlong)param_2 + -0x54);
        local_90 = (undefined4)param_2[-10];
        uStack_8c = *(undefined4 *)((longlong)param_2 + -0x4c);
        local_88 = (undefined4)param_2[-9];
        uStack_84 = *(undefined4 *)((longlong)param_2 + -0x44);
        FUN_18000f1f8(&local_68,&local_80,&local_98);
        bVar5 = false;
        uVar12 = local_c8;
        if (uVar19 < local_c8) {
          uVar12 = uVar19;
        }
        if (uVar12 != 0) {
          uVar9 = (1 << (ulonglong)(uVar13 & 0x1f)) - 1;
          local_a0 = 0x8876086c;
          iStack_9c = iVar20;
          uVar19 = 0;
          local_a8 = uStack_6c;
          local_a4 = iVar7;
          local_d0 = uStack_74 & uVar9;
          local_cc = local_78;
          local_d8 = local_70;
          local_d4 = local_70 & uVar9;
          local_c8 = local_80;
          local_e0 = uStack_7c;
          local_dc = uStack_6c & uVar9;
          do {
            uVar16 = local_a0;
            iVar20 = iStack_9c;
            if (uVar18 == 0) break;
            uVar9 = uVar19 + uVar13;
            local_c0 = (int)local_c8 >> (uVar9 & 0x1f);
            uStack_bc = (int)local_e0 >> (uVar9 & 0x1f);
            local_b8 = (int)local_cc >> (uVar9 & 0x1f);
            local_b4 = (int)uStack_74 >> (uVar9 & 0x1f);
            if (local_d0 != 0) {
              local_b4 = local_b4 + 1;
            }
            local_b0 = (int)local_d8 >> (uVar9 & 0x1f);
            if (local_d4 != 0) {
              local_b0 = local_b0 + 1;
            }
            iStack_ac = (int)local_a8 >> (uVar9 & 0x1f);
            if (local_dc != 0) {
              iStack_ac = iStack_ac + 1;
            }
            if (((int)local_c0 < (int)local_b4 && (int)uStack_bc < (int)local_b0) &&
                local_b8 < iStack_ac) {
              uVar1 = uVar19 + local_a4;
              lVar10 = param_2[(ulonglong)uVar9 - 0x1b];
              lVar17 = param_3[(ulonglong)uVar1 - 0x1b];
              if (lVar10 != 0) {
                FUN_180023808(lVar10,*(undefined1 *)(lVar10 + 0x60));
              }
              if (*(longlong *)(*(longlong *)(lVar17 + 0x88) + 0xe0) != 0) {
                FUN_180023808(lVar17,*(undefined1 *)(lVar17 + 0x60));
              }
              uVar14 = local_c0;
              uVar15 = uStack_bc;
              uVar11 = func_0x000180107328((int)param_3[-4]);
              if ((uVar11 & 1) != 0) {
                local_b4 = extraout_w13 + 3U & 0xfffffffc;
                local_b0 = extraout_w12 + 3U & 0xfffffffc;
                local_c0 = uVar14 & 0xfffffffc;
                uStack_bc = uVar15 & 0xfffffffc;
              }
              uVar9 = (**(code **)(*(longlong *)param_3[-8] + 0x128))
                                ((longlong *)param_3[-8],uVar1,uVar9,param_3[-7],param_2[-7],
                                 &local_c0);
              uVar18 = uVar9 & 0xff & uVar18;
              bVar5 = true;
            }
            uVar19 = uVar19 + 1;
            uVar16 = local_a0;
            iVar20 = iStack_9c;
          } while (uVar19 < uVar12);
        }
        param_2[-0xb] = 0;
        param_2[-10] = 0;
        param_2[-9] = 0;
        if (bVar5) {
          uVar19 = *(uint *)(param_3 + -0x1c);
          *(undefined1 *)((longlong)param_3 + -0xda) = 1;
          lVar10 = param_3[-0x20];
          uVar13 = uVar19 & 0xffff;
          if (uVar13 != 0) {
            uVar12 = (uVar19 & 0xaaaa) >> 1 | (uVar19 & 0x5555) << 1;
            uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
            local_e0 = uVar13;
            lVar17 = LZCOUNT((uVar12 >> 8 | (uVar12 & 0xff00ff) << 8) << 0x10);
            uVar12 = (uint)lVar17;
            if ((1 - (uVar12 >> 5) & 0xff) != 0) {
              *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) =
                   *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
              puVar2 = (undefined8 *)&DAT_00000028;
              if (lVar10 != 0) {
                puVar2 = (undefined8 *)(lVar10 + -0x6810);
              }
              while( true ) {
                (**(code **)(*(longlong *)*puVar2 + 0xd8))
                          ((longlong *)*puVar2,lVar17,0,param_3[-7],0,0,0,0);
                uVar12 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
                uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                lVar17 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
                uVar12 = (uint)lVar17;
                if ((1 - (uVar12 >> 5) & 0xff) == 0) break;
                *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) =
                     *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) &
                     ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
              }
            }
            puVar3 = (uint *)&DAT_00000d18;
            if (lVar10 != 0) {
              puVar3 = (uint *)(lVar10 + -0x5b20);
            }
            *puVar3 = *puVar3 | uVar13;
          }
          uVar19 = uVar19 >> 0x10;
          if (uVar19 != 0) {
            uVar13 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
            uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
            local_e0 = uVar19;
            lVar17 = LZCOUNT((uVar13 >> 8 | (uVar13 & 0xff00ff) << 8) << 0x10);
            uVar13 = (uint)lVar17;
            if ((1 - (uVar13 >> 5) & 0xff) != 0) {
              *(byte *)((longlong)&local_e0 + (longlong)((int)uVar13 >> 3)) =
                   *(byte *)((longlong)&local_e0 + (longlong)((int)uVar13 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
              puVar2 = (undefined8 *)&DAT_00000028;
              if (lVar10 != 0) {
                puVar2 = (undefined8 *)(lVar10 + -0x6810);
              }
              while( true ) {
                (**(code **)(*(longlong *)*puVar2 + 0x1a8))
                          ((longlong *)*puVar2,lVar17,0,param_3[-7],0);
                uVar13 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
                uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                lVar17 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
                uVar13 = (uint)lVar17;
                if ((1 - (uVar13 >> 5) & 0xff) == 0) break;
                *(byte *)((longlong)&local_e0 + (longlong)((int)uVar13 >> 3)) =
                     *(byte *)((longlong)&local_e0 + (longlong)((int)uVar13 >> 3)) &
                     ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
              }
            }
            puVar3 = (uint *)&DAT_000067fc;
            if (lVar10 != 0) {
              puVar3 = (uint *)(lVar10 + -0x3c);
            }
            *puVar3 = *puVar3 | uVar19;
          }
        }
        if (uVar18 != 0) {
          uVar16 = 0;
        }
      }
      goto LAB_1800acf0c;
    }
    if (iVar8 != 5) goto LAB_1800acf0c;
  }
  if ((((*(uint *)(param_2[3] + 0x50) >> 10 & 1) == 0) ||
      ((*(uint *)(param_3[3] + 0x50) >> 10 & 1) != 0)) &&
     (cVar6 = FUN_18000e670(param_3 + -0x13,param_2 + -0x13), cVar6 != '\0')) {
    uVar16 = 0;
  }
LAB_1800acf0c:
  if (iVar20 == 0) {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  else {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  return uVar16;
}


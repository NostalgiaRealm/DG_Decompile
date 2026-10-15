/*
 * FUN_1800bdf60 at 1800bdf60
 * undefined FUN_1800bdf60(void)
 * Address ranges: 1800bdf60-1800be627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bdf60(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined8 *param_9,
                 longlong param_10)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int extraout_w1;
  undefined8 uVar18;
  undefined8 extraout_x1;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  longlong lVar26;
  ulonglong extraout_x9;
  uint extraout_w10;
  uint uVar27;
  int extraout_w11;
  uint *puVar28;
  uint extraout_w12;
  uint uVar29;
  undefined2 uVar30;
  uint uVar32;
  undefined1 auVar33 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uVar31;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar12 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar12 == 0) {
      FUN_180003398();
      bVar5 = true;
    }
  }
  uVar32 = 0;
  uVar11 = 0x2a;
  uVar31 = param_5;
  if (param_9 == (undefined8 *)0x0) goto LAB_1800be24c;
  *param_9 = 0;
  uVar13 = FUN_1800022a8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                         *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                         param_8,param_6,4,param_7,0);
  uVar21 = uVar13 & 0xffffffff;
  iVar12 = (int)uVar13;
  if (iVar12 == 0x876086f) {
    iVar12 = 0;
  }
  if (-1 < iVar12) {
    uVar31 = param_2;
    if (param_2 < param_3) {
      uVar31 = param_3;
    }
    uVar23 = param_4;
    if (param_4 <= uVar31) {
      uVar23 = uVar31;
    }
    uVar13 = (ulonglong)uVar23;
    uVar31 = 0;
    while (uVar23 != 0) {
      uVar31 = uVar31 + 1;
      uVar13 = uVar13 >> 1;
      uVar23 = (uint)uVar13;
    }
    if (param_5 != 0) {
      uVar31 = param_5;
    }
    uVar14 = func_0x000180107140(param_7);
    uVar14 = uVar14 & 0xffffffff;
    uVar15 = func_0x0001801071f0(param_7);
    uVar15 = uVar15 & 0xffffffff;
    auVar33 = func_0x000180107018(param_7);
    iVar20 = (int)uVar21;
    uVar13 = auVar33._0_8_ & 0xffffffff;
    if ((((uint)uVar14 - 1 & param_2) != 0 && (uint)uVar14 <= param_2) ||
       (bVar9 = true, ((uint)uVar15 - 1 & param_3) != 0 && (uint)uVar15 <= param_3)) {
      bVar9 = false;
    }
    if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
      if (*(int *)(param_1 + -0x59d0) == 2) {
        puVar25 = &DAT_180248bd8;
        puVar28 = &DAT_180248bdc;
      }
      else {
        uVar23 = *(uint *)(*(longlong *)(param_1 + -0x5a10) + 0x10);
        puVar25 = (uint *)(&DAT_180248d88 + (ulonglong)uVar23 * 0x1b0);
        puVar28 = (uint *)(&DAT_180248d8c + (ulonglong)uVar23 * 0x1b0);
      }
      if ((param_2 <= *puVar25) && (param_3 <= *puVar28)) {
        bVar8 = true;
        bVar7 = true;
        if (!bVar9) {
          bVar8 = auVar33._0_4_ < 0;
          bVar7 = auVar33._0_4_ == 0;
        }
        if ((bVar7 || bVar8) && uVar31 <= auVar33._8_4_) {
          uVar32 = 0;
          uVar18 = 0;
          if (param_8 == 0) {
            if (*(int *)(param_1 + -0x59d0) == 1) {
              uVar23 = 0;
              if (uVar31 != 0) {
                do {
                  uVar3 = param_2 >> (ulonglong)(uVar23 & 0x1f);
                  uVar24 = param_3 >> (ulonglong)(uVar23 & 0x1f);
                  if (uVar3 == 0) {
                    uVar3 = 1;
                  }
                  uVar29 = param_4 >> (ulonglong)(uVar23 & 0x1f);
                  if (uVar24 == 0) {
                    uVar24 = 1;
                  }
                  if (uVar29 == 0) {
                    uVar29 = 1;
                  }
                  if ((int)uVar13 == 0) {
                    iVar12 = func_0x000180106dc0(param_7,uVar18);
                    uVar24 = (uint)(iVar12 * extraout_w11) >> 3;
                    uVar18 = extraout_x1;
                    uVar13 = extraout_x9;
                    uVar27 = extraout_w10;
                    uVar29 = extraout_w12;
                  }
                  else {
                    uVar19 = (uint)uVar15;
                    if (uVar19 == 0) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800be1a8);
                      (*pcVar6)();
                    }
                    uVar27 = 0;
                    if (uVar19 != 0) {
                      uVar27 = ((uVar19 + uVar24) - 1 & -uVar19) / uVar19;
                    }
                    uVar19 = (uint)uVar14;
                    if (uVar19 == 0) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800be1c4);
                      (*pcVar6)();
                    }
                    uVar24 = 0;
                    if (uVar19 != 0) {
                      uVar24 = ((uVar19 + uVar3) - 1 & -uVar19) / uVar19;
                    }
                    uVar24 = uVar24 * (int)uVar13;
                  }
                  iVar20 = (int)uVar21;
                  uVar23 = uVar23 + 1;
                  uVar32 = uVar32 + uVar27 * uVar24 * uVar29;
                } while (uVar23 < uVar31);
              }
              if ((ulonglong)(&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] <
                  (ulonglong)uVar32) {
                uVar18 = 0x8876017c;
              }
            }
LAB_1800be228:
            uVar11 = func_0x000180106a90(param_7,uVar18);
            iVar12 = extraout_w1;
            if (extraout_w1 < 0) goto LAB_1800be250;
          }
          else {
            if (param_8 != 3) goto LAB_1800be228;
            uVar11 = 0x2a;
            uVar32 = 0;
          }
          iVar12 = iVar20;
          goto LAB_1800be250;
        }
      }
    }
LAB_1800be24c:
    iVar12 = -0x7789f794;
  }
LAB_1800be250:
  uVar30 = (undefined2)uVar31;
  if (iVar12 == 0x876086f) {
    iVar12 = 0;
    uVar30 = 1;
  }
  if (iVar12 < 0) goto LAB_1800be5d8;
  if (param_10 != 0) {
    iVar12 = -0x7789f794;
    goto LAB_1800be5d8;
  }
  lVar26 = *(longlong *)(param_1 + -0x59a0);
  iVar12 = -0x7ff8fff2;
  plVar16 = (longlong *)FUN_180102f80(0x138);
  if (plVar16 == (longlong *)0x0) goto LAB_1800be5d8;
  lVar1 = 0;
  if (param_1 != 0x6838) {
    lVar1 = param_1;
  }
  plVar16[0x24] = 0;
  plVar16[0x25] = (longlong)(plVar16 + 0x23);
  plVar16[3] = lVar1;
  *(undefined4 *)(plVar16 + 4) = 4;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *(uint *)(plVar16 + 0x1d) = param_2;
  *(uint *)((longlong)plVar16 + 0xec) = param_3;
  *(undefined4 *)(plVar16 + 0x1f) = param_7;
  *(undefined4 *)((longlong)plVar16 + 0xfc) = uVar11;
  plVar16[0x1b] = lVar26;
  plVar16[0x1c] = 0;
  plVar16[5] = 0;
  plVar16[6] = 0;
  *(undefined4 *)(plVar16 + 7) = 0;
  *(undefined2 *)((longlong)plVar16 + 0x3c) = uVar30;
  *(uint *)(plVar16 + 0x1e) = param_4;
  *(undefined4 *)((longlong)plVar16 + 0xf4) = param_6;
  *(undefined1 *)(plVar16 + 0x21) = 0;
  *(int *)(plVar16 + 0x20) = param_8;
  *(uint *)((longlong)plVar16 + 0x104) = uVar32;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xf] = 0;
  plVar16[0xe] = 0;
  plVar16[0x11] = 0;
  plVar16[0x10] = 0;
  plVar16[0x13] = 0;
  plVar16[0x12] = 0;
  plVar16[0x15] = 0;
  plVar16[0x14] = 0;
  plVar16[0x17] = 0;
  plVar16[0x16] = 0;
  plVar16[0x19] = 0;
  plVar16[0x18] = 0;
  plVar16[0x1a] = 0;
  *plVar16 = (longlong)&PTR_D3DPERF_SetMarker_180236d90;
  plVar16[0x22] = (longlong)&PTR_DAT_1802335f0;
  plVar16[0x23] = (longlong)&PTR_FUN_180236ce0;
  *(undefined4 *)(plVar16 + 0x26) = 2;
  if ((int)plVar16[0x20] != 3) {
    lVar26 = (**(code **)(*(longlong *)plVar16[0x1b] + 0x120))
                       ((longlong *)plVar16[0x1b],(int)plVar16[0x1d],
                        *(undefined4 *)((longlong)plVar16 + 0xec),(int)plVar16[0x1e],
                        *(undefined4 *)((longlong)plVar16 + 0xfc),
                        *(undefined2 *)((longlong)plVar16 + 0x3c),(int)plVar16[0x20] == 2);
    plVar16[0x1c] = lVar26;
  }
  if ((plVar16[0x1c] == 0) && ((int)plVar16[0x20] != 3)) {
    bVar9 = false;
  }
  else {
    uVar31 = *(uint *)((longlong)plVar16 + 0xf4) & 0x200;
    if ((uVar31 != 0) || (uVar22 = 0, (int)plVar16[0x20] != 0)) {
      uVar22 = 1;
    }
    *(undefined1 *)(plVar16 + 0x21) = uVar22;
    if ((uVar31 == 0) && ((int)plVar16[0x20] == 0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = 1;
    }
    uVar31 = 0;
    uVar23 = 0;
    if (*(short *)((longlong)plVar16 + 0x3c) != 0) {
      do {
        uVar31 = uVar23;
        uStack_64 = *(uint *)((longlong)plVar16 + 0xec) >> (ulonglong)(uVar31 & 0x1f);
        local_70 = *(undefined4 *)((longlong)plVar16 + 0xf4);
        local_68 = *(uint *)(plVar16 + 0x1d) >> (ulonglong)(uVar31 & 0x1f);
        local_78 = (undefined4)plVar16[0x1f];
        local_60 = *(uint *)(plVar16 + 0x1e) >> (ulonglong)(uVar31 & 0x1f);
        uStack_74 = (undefined4)plVar16[4];
        uStack_6c = (undefined4)plVar16[0x20];
        if (local_68 == 0) {
          local_68 = 1;
        }
        if (uStack_64 == 0) {
          uStack_64 = 1;
        }
        if (local_60 == 0) {
          local_60 = 1;
        }
        cVar10 = (**(code **)(*plVar16 + 0x28))(plVar16,uVar31,&local_78,uVar18);
      } while ((cVar10 != '\0') &&
              (uVar31 = uVar31 + 1, uVar23 = uVar31, uVar31 < *(ushort *)((longlong)plVar16 + 0x3c))
              );
    }
    bVar9 = uVar31 == *(ushort *)((longlong)plVar16 + 0x3c);
    if (uVar31 != *(ushort *)((longlong)plVar16 + 0x3c)) {
      for (iVar20 = uVar31 + 1; iVar20 != 0; iVar20 = iVar20 + -1) {
        (**(code **)(*plVar16 + 0x30))(plVar16,iVar20);
      }
      puVar17 = (undefined8 *)plVar16[0x1c];
      if (puVar17 != (undefined8 *)0x0) {
        (**(code **)*puVar17)(puVar17,1);
      }
      plVar16[0x1c] = 0;
    }
  }
  iVar20 = -0x7ff8fff2;
  if (bVar9) {
    iVar20 = *(int *)(param_1 + -0x594c);
    if (*(int *)(param_1 + -0x5950) == iVar20) {
      uVar31 = iVar20 << 1;
      if (iVar20 == 0) {
        uVar31 = 0x10;
      }
      lVar26 = CONCAT44(0,uVar31) << 3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = CONCAT44(0,uVar31);
      if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
        lVar26 = -1;
      }
      lVar26 = thunk_FUN_180102f80(lVar26);
      if (lVar26 != 0) {
        thunk_FUN_180001218(lVar26,*(undefined8 *)(param_1 + -0x5958),
                            (ulonglong)*(uint *)(param_1 + -0x594c) << 3);
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x5958));
        *(longlong *)(param_1 + -0x5958) = lVar26;
        *(uint *)(param_1 + -0x594c) = uVar31;
        goto LAB_1800be514;
      }
    }
    else {
LAB_1800be514:
      *(longlong **)(*(longlong *)(param_1 + -0x5958) + (ulonglong)*(uint *)(param_1 + -0x5950) * 8)
           = plVar16;
      *(int *)(param_1 + -0x5950) = *(int *)(param_1 + -0x5950) + 1;
      iVar12 = FUN_1800ca8b8(plVar16 + 0x23,&DAT_1802294c8,param_9);
      if (-1 < iVar12) {
        (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
             (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] - (ulonglong)uVar32;
        plVar2 = (longlong *)0x0;
        if (plVar16 != (longlong *)0x0) {
          plVar2 = plVar16 + 0x22;
        }
        FUN_180001928(param_1 + -0x6838,plVar2);
        goto LAB_1800be5d8;
      }
      FUN_180005c78(param_1 + -0x6838,plVar16);
    }
    FUN_1800ca618(plVar16);
    iVar20 = iVar12;
  }
  iVar12 = iVar20;
  plVar16[0x22] = (longlong)&PTR_DAT_1802335f0;
  plVar16[0x23] = (longlong)&PTR_FUN_180236ce0;
  *plVar16 = (longlong)&PTR_D3DPERF_GetStatus_180229eb0;
  FUN_18000b538(plVar16 + 1);
  FUN_180102fc0(plVar16,0x138);
LAB_1800be5d8:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar12;
}


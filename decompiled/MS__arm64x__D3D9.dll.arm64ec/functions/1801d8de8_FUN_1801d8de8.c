/*
 * FUN_1801d8de8 at 1801d8de8
 * undefined FUN_1801d8de8(void)
 * Address ranges: 1801d8de8-1801d9413;1801d9428-1801d9543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801d8de8(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined8 *param_9,
                 longlong param_10)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int extraout_w1;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong extraout_x9;
  longlong lVar21;
  uint extraout_w10;
  uint uVar22;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  int extraout_w11;
  uint *puVar23;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  uint extraout_w12;
  uint uVar24;
  uint *puVar25;
  undefined2 uVar26;
  int iVar28;
  uint uVar29;
  undefined1 auVar30 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  longlong local_58;
  undefined8 local_50;
  uint uVar27;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar9 == 0) {
      FUN_1801085c8();
      bVar3 = true;
    }
  }
  uVar29 = 0;
  uVar10 = 0x2a;
  uVar27 = param_5;
  if (param_9 == (undefined8 *)0x0) goto LAB_1801d90f8;
  *param_9 = 0;
  iVar9 = FUN_1801074b0(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                        *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                        param_8,param_6,4,param_7,0);
  if (iVar9 == 0x876086f) {
    iVar9 = 0;
  }
  if (-1 < iVar9) {
    uVar27 = param_2;
    if (param_2 < param_3) {
      uVar27 = param_3;
    }
    uVar14 = 0;
    uVar18 = param_4;
    if (param_4 <= uVar27) {
      uVar18 = uVar27;
    }
    uVar20 = (ulonglong)uVar18;
    while (uVar18 != 0) {
      uVar14 = uVar14 + 1;
      uVar20 = uVar20 >> 1;
      uVar18 = (uint)uVar20;
    }
    uVar27 = uVar14;
    if (param_5 != 0) {
      uVar27 = param_5;
    }
    uVar11 = FUN_180107140(param_7);
    uVar11 = uVar11 & 0xffffffff;
    uVar12 = FUN_1801071f0(extraout_x10 & 0xffffffff);
    uVar12 = uVar12 & 0xffffffff;
    auVar30 = FUN_180107018(extraout_x10_00 & 0xffffffff);
    uVar20 = auVar30._0_8_ & 0xffffffff;
    if ((((uint)uVar11 - 1 & param_2) != 0 && (uint)uVar11 <= param_2) ||
       (bVar8 = true, ((uint)uVar12 - 1 & param_3) != 0 && (uint)uVar12 <= param_3)) {
      bVar8 = false;
    }
    if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
      if (*(int *)(param_1 + -0x59d0) == 2) {
        puVar25 = &DAT_1802462c8;
        puVar23 = &DAT_1802462cc;
      }
      else {
        uVar18 = *(uint *)(*(longlong *)(param_1 + -0x5a10) + 0x10);
        puVar25 = (uint *)(&DAT_180246478 + (ulonglong)uVar18 * 0x1b0);
        puVar23 = (uint *)(&DAT_18024647c + (ulonglong)uVar18 * 0x1b0);
      }
      if ((param_2 <= *puVar25) && (param_3 <= *puVar23)) {
        bVar7 = true;
        bVar6 = true;
        if (!bVar8) {
          bVar7 = auVar30._0_4_ < 0;
          bVar6 = auVar30._0_4_ == 0;
        }
        if ((bVar6 || bVar7) && uVar27 <= uVar14) {
          uVar29 = 0;
          uVar15 = 0;
          iVar9 = 0;
          if (param_8 == 0) {
            if (*(int *)(param_1 + -0x59d0) == 1) {
              uVar14 = 0;
              iVar9 = 0;
              if (uVar27 != 0) {
                do {
                  uVar18 = param_2 >> (ulonglong)(uVar14 & 0x1f);
                  uVar19 = param_3 >> (ulonglong)(uVar14 & 0x1f);
                  if (uVar18 == 0) {
                    uVar18 = 1;
                  }
                  uVar24 = param_4 >> (ulonglong)(uVar14 & 0x1f);
                  if (uVar19 == 0) {
                    uVar19 = 1;
                  }
                  if (uVar24 == 0) {
                    uVar24 = 1;
                  }
                  if ((int)uVar20 == 0) {
                    iVar9 = FUN_180106dc0(param_7);
                    uVar19 = (uint)(iVar9 * extraout_w11) >> 3;
                    uVar20 = extraout_x9;
                    uVar22 = extraout_w10;
                    uVar24 = extraout_w12;
                  }
                  else {
                    uVar16 = (uint)uVar12;
                    if (uVar16 == 0) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801d904c);
                      (*pcVar5)();
                    }
                    uVar22 = 0;
                    if (uVar16 != 0) {
                      uVar22 = ((uVar16 + uVar19) - 1 & -uVar16) / uVar16;
                    }
                    uVar16 = (uint)uVar11;
                    if (uVar16 == 0) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1801d9068);
                      (*pcVar5)();
                    }
                    uVar19 = 0;
                    if (uVar16 != 0) {
                      uVar19 = ((uVar16 + uVar18) - 1 & -uVar16) / uVar16;
                    }
                    uVar19 = uVar19 * (int)uVar20;
                  }
                  iVar9 = (int)uVar15;
                  uVar14 = uVar14 + 1;
                  uVar29 = uVar29 + uVar22 * uVar19 * uVar24;
                } while (uVar14 < uVar27);
              }
              if ((ulonglong)(&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] <
                  (ulonglong)uVar29) {
                iVar9 = -0x7789fe84;
              }
            }
LAB_1801d90d4:
            uVar10 = FUN_180106a90(param_7);
            iVar28 = extraout_w1;
            if (iVar9 < 0) goto LAB_1801d90fc;
          }
          else {
            if (param_8 != 3) goto LAB_1801d90d4;
            uVar10 = 0x2a;
            uVar29 = 0;
            iVar28 = auVar30._8_4_;
          }
          iVar9 = iVar28;
          goto LAB_1801d90fc;
        }
      }
    }
LAB_1801d90f8:
    iVar9 = -0x7789f794;
  }
LAB_1801d90fc:
  uVar26 = (undefined2)uVar27;
  if (iVar9 == 0x876086f) {
    iVar9 = 0;
    uVar26 = 1;
  }
  if (-1 < iVar9) {
    if (param_10 == 0) {
      iVar9 = -0x7ff8fff2;
      local_50 = *(undefined8 *)(param_1 + -0x59a0);
      local_58 = param_1;
      puVar13 = (undefined8 *)FUN_1802229a8(0x138);
      if (puVar13 != (undefined8 *)0x0) {
        puVar13[0x24] = 0;
        puVar13[0x25] = puVar13 + 0x23;
        puVar13[1] = 0;
        puVar13[2] = 0;
        lVar21 = 0;
        if (local_58 != 0x6838) {
          lVar21 = local_58;
        }
        puVar13[3] = lVar21;
        *(uint *)(puVar13 + 0x1d) = param_2;
        *(uint *)((longlong)puVar13 + 0xec) = param_3;
        *(undefined4 *)(puVar13 + 4) = 4;
        puVar13[5] = 0;
        puVar13[6] = 0;
        *(undefined4 *)(puVar13 + 7) = 0;
        *(undefined2 *)((longlong)puVar13 + 0x3c) = uVar26;
        puVar13[0x1b] = local_50;
        puVar13[0x1c] = 0;
        *(undefined1 *)(puVar13 + 0x21) = 0;
        *(uint *)(puVar13 + 0x1e) = param_4;
        *(undefined4 *)((longlong)puVar13 + 0xf4) = param_6;
        *(undefined4 *)(puVar13 + 0x1f) = param_7;
        *(undefined4 *)((longlong)puVar13 + 0xfc) = uVar10;
        *(int *)(puVar13 + 0x20) = param_8;
        *(uint *)((longlong)puVar13 + 0x104) = uVar29;
        puVar13[9] = 0;
        puVar13[8] = 0;
        puVar13[0xb] = 0;
        puVar13[10] = 0;
        puVar13[0xd] = 0;
        puVar13[0xc] = 0;
        puVar13[0xf] = 0;
        puVar13[0xe] = 0;
        puVar13[0x11] = 0;
        puVar13[0x10] = 0;
        puVar13[0x13] = 0;
        puVar13[0x12] = 0;
        puVar13[0x15] = 0;
        puVar13[0x14] = 0;
        puVar13[0x17] = 0;
        puVar13[0x16] = 0;
        puVar13[0x19] = 0;
        puVar13[0x18] = 0;
        puVar13[0x1a] = 0;
        *puVar13 = &PTR_D3DPERF_SetMarker_native_18022f3e8;
        puVar13[0x22] = &PTR_FUN_1802297e8;
        puVar13[0x23] = &PTR_FUN_18022f338;
        *(undefined4 *)(puVar13 + 0x26) = 2;
        puVar4 = __hybrid_os_arm64x_dispatch_icall;
        if (*(int *)(puVar13 + 0x20) != 3) {
          uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          uVar15 = (*extraout_x11)(uVar15,*(undefined4 *)(puVar13 + 0x1d),
                                   *(undefined4 *)((longlong)puVar13 + 0xec),
                                   *(undefined4 *)(puVar13 + 0x1e),
                                   *(undefined4 *)((longlong)puVar13 + 0xfc));
          puVar13[0x1c] = uVar15;
        }
        if ((puVar13[0x1c] == 0) && (*(int *)(puVar13 + 0x20) != 3)) {
          bVar8 = false;
        }
        else {
          uVar27 = *(uint *)((longlong)puVar13 + 0xf4) & 0x200;
          if ((uVar27 != 0) || (uVar17 = 0, *(int *)(puVar13 + 0x20) != 0)) {
            uVar17 = 1;
          }
          *(undefined1 *)(puVar13 + 0x21) = uVar17;
          if ((uVar27 == 0) && (*(int *)(puVar13 + 0x20) == 0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = 1;
          }
          uVar27 = 0;
          if (*(short *)((longlong)puVar13 + 0x3c) != 0) {
            uVar20 = 0x180224000;
            do {
              uStack_64 = *(uint *)((longlong)puVar13 + 0xec) >> (ulonglong)(uVar27 & 0x1f);
              local_70 = *(undefined4 *)((longlong)puVar13 + 0xf4);
              local_68 = *(uint *)(puVar13 + 0x1d) >> (ulonglong)(uVar27 & 0x1f);
              local_78 = *(undefined4 *)(puVar13 + 0x1f);
              local_60 = *(uint *)(puVar13 + 0x1e) >> (ulonglong)(uVar27 & 0x1f);
              uStack_74 = *(undefined4 *)(puVar13 + 4);
              uStack_6c = *(undefined4 *)(puVar13 + 0x20);
              if (local_68 == 0) {
                local_68 = 1;
              }
              if (uStack_64 == 0) {
                uStack_64 = 1;
              }
              if (local_60 == 0) {
                local_60 = 1;
              }
              (*(code *)puVar4)(uVar20);
              uVar20 = (*extraout_x11_00)(puVar13,uVar27,&local_78,uVar15);
            } while (((uVar20 & 0xff) != 0) &&
                    (uVar27 = uVar27 + 1, uVar27 < *(ushort *)((longlong)puVar13 + 0x3c)));
          }
          bVar8 = uVar27 == *(ushort *)((longlong)puVar13 + 0x3c);
          if (uVar27 != *(ushort *)((longlong)puVar13 + 0x3c)) {
            iVar28 = uVar27 + 1;
            if (iVar28 != 0) {
              uVar15 = 0x180224000;
              do {
                (*(code *)puVar4)(uVar15);
                uVar15 = (*extraout_x11_01)(puVar13,iVar28);
                iVar28 = iVar28 + -1;
              } while (iVar28 != 0);
            }
            if (puVar13[0x1c] != 0) {
              uVar15 = (*(code *)puVar4)(0x180224000);
              (*extraout_x11_02)(uVar15,1);
            }
            puVar13[0x1c] = 0;
          }
        }
        iVar28 = -0x7ff8fff2;
        if (bVar8) {
          iVar28 = *(int *)(param_1 + -0x594c);
          if (*(int *)(param_1 + -0x5950) == iVar28) {
            uVar27 = iVar28 << 1;
            if (iVar28 == 0) {
              uVar27 = 0x10;
            }
            lVar21 = CONCAT44(0,uVar27) << 3;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = CONCAT44(0,uVar27);
            if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
              lVar21 = -1;
            }
            lVar21 = FUN_1802229a8(lVar21);
            if (lVar21 != 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(lVar21,*(undefined8 *)(param_1 + -0x5958),
                                  (ulonglong)*(uint *)(param_1 + -0x594c) << 3);
            }
          }
          else {
            *(undefined8 **)
             (*(longlong *)(param_1 + -0x5958) + (ulonglong)*(uint *)(param_1 + -0x5950) * 8) =
                 puVar13;
            *(int *)(param_1 + -0x5950) = *(int *)(param_1 + -0x5950) + 1;
            iVar9 = FUN_1801e6070(puVar13 + 0x23,&DAT_180229248,param_9);
            if (-1 < iVar9) {
              (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                   (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] -
                   (ulonglong)uVar29;
              puVar1 = (undefined8 *)0x0;
              if (puVar13 != (undefined8 *)0x0) {
                puVar1 = puVar13 + 0x22;
              }
              FUN_180105a48(param_1 + -0x6838,puVar1);
              goto LAB_1801d94fc;
            }
            FUN_18010b290(param_1 + -0x6838,puVar13);
          }
          FUN_1801e5d38(puVar13);
          iVar28 = iVar9;
        }
        iVar9 = iVar28;
        puVar13[0x22] = &PTR_FUN_1802297e8;
        puVar13[0x23] = &PTR_FUN_18022f338;
        *puVar13 = &PTR_D3DPERF_GetStatus_native_180229eb0;
        FUN_180116678(puVar13 + 1);
        FUN_1802229d8(puVar13,0x138);
      }
    }
    else {
      iVar9 = -0x7789f794;
    }
  }
LAB_1801d94fc:
  if (bVar3) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar9;
}


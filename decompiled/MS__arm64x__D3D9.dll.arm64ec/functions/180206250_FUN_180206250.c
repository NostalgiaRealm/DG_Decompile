/*
 * FUN_180206250 at 180206250
 * undefined FUN_180206250(void)
 * Address ranges: 180206250-180206843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_180206250(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  code *pcVar13;
  ulonglong local_c0 [2];
  longlong *local_b0;
  undefined8 *puStack_a8;
  code *local_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar6 = FUN_1802229a8(0x1b588);
  puVar10 = (undefined8 *)(lVar6 + 0x47U & 0xffffffffffffffc0);
  puVar10[-1] = lVar6;
  *(undefined4 *)(puVar10 + 1) = 0;
  uVar12 = (ulonglong)puVar10 | 0x18;
  *(undefined2 *)((longlong)puVar10 + 0xc) = 0;
  lVar6 = 0x10;
  puVar10[2] = 0;
  *puVar10 = &PTR_D3DPERF_GetStatus_native_180238930;
  do {
    lVar6 = lVar6 + -1;
    FUN_1802010d0(uVar12);
    uVar12 = uVar12 + 0x28;
  } while (lVar6 != 0);
  puVar10[0x61] = 0;
  puVar10[0x53] = param_1;
  puVar10[0x54] = 0;
  puVar1 = puVar10 + 99;
  puVar10[0x55] = 0;
  puVar10[0x56] = 0;
  puVar10[0x57] = 0;
  puVar10[0x58] = 0;
  puVar10[0x59] = 0;
  puVar10[0x5a] = 0;
  puVar10[0x5b] = 0;
  puVar10[0x5c] = 0;
  puVar10[0x5d] = 0;
  puVar10[0x5e] = 0;
  puVar10[0x5f] = 0;
  puVar10[0x60] = 0;
  *(undefined4 *)(puVar10 + 0x62) = 0x10000;
  lVar6 = 8;
  *(undefined1 *)((longlong)puVar10 + 0x314) = 0;
  puVar9 = puVar1;
  do {
    puVar9[1] = 0;
    puVar9[2] = 0;
    lVar6 = lVar6 + -1;
    puVar9 = puVar9 + 0xc;
  } while (lVar6 != 0);
  puVar10[0xc3] = 0;
  puVar9 = puVar10 + 0xc4;
  *(undefined4 *)(puVar10 + 0xcf) = 0;
  puVar10[0xc9] = 0;
  puVar10[0xca] = 0;
  puVar10[0xcb] = 0;
  puVar10[0xcc] = 0;
  puVar10[0xd2] = 0;
  puVar10[0xd3] = 0;
  puVar10[0xd0] = &PTR_s_DGD3D12ROOT_18024c680;
  puVar10[0xd1] = 0;
  *(undefined1 *)((longlong)puVar10 + 0x67c) = 0;
  lVar6 = 0x10;
  puVar10[0xd4] = 0;
  puVar10[0xc5] = 0;
  *puVar9 = 0;
  puVar10[199] = 0;
  puVar10[0xc6] = 0;
  puVar10[200] = 0;
  puVar10[0xce] = 0;
  puVar10[0xcd] = 0;
  puVar8 = puVar10 + 0xda;
  do {
    *puVar8 = 0;
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar8 + 2) = 0xc000;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x1d) = 0;
    puVar8 = puVar8 + 4;
  } while (lVar6 != 0);
  puVar10[0x11a] = 0;
  *puVar10 = &PTR_FUN_180238aa8;
  puVar10[0xd7] = puVar10;
  puVar10[0xd8] = 0;
  puVar10[0xd9] = 0;
  puVar10[0xd5] = &PTR_FUN_180238c60;
  puVar10[0xd6] = &PTR_FUN_180238b38;
  puVar8 = puVar10 + 0x120;
  lVar6 = 0x10;
  do {
    lVar6 = lVar6 + -1;
    FUN_180215470(puVar8);
    puVar8 = puVar8 + 0x358;
  } while (lVar6 != 0);
  uVar7 = FUN_18020d5e0();
  puVar10[0x36a0] = uVar7;
  pcVar13 = (code *)__hybrid_os_arm64x_dispatch_icall;
  if ((puVar10[0x54] == 0) && (puVar10[0x5b] == 0)) {
    lVar6 = thunk_FUN_18022398c(s_DXGI_DLL_1802388a8);
    puVar10[0x54] = lVar6;
    if (lVar6 == 0) goto LAB_180206800;
    lVar6 = thunk_FUN_180223928(lVar6,s_CreateDXGIFactory1_180238890);
    puVar10[0x57] = lVar6;
    if (lVar6 != 0) {
      lVar6 = thunk_FUN_18022398c(*(undefined8 *)(puVar10[0xd0] + 0x10));
      puVar10[0x5b] = lVar6;
      if (lVar6 != 0) {
        lVar6 = thunk_FUN_180223928(lVar6,*(undefined8 *)(puVar10[0xd0] + 0x18));
        puVar10[0x5c] = lVar6;
        if (lVar6 != 0) {
          puVar10[0x56] = 0;
          puVar10[0x58] = 0;
          puVar10[0x59] = 0;
          puVar10[0x5a] = 0;
          FUN_180222c50(puVar1,0,0x300);
          if (puVar10[0x56] != 0) {
            iVar5 = 0;
            local_c0[0] = 0;
            local_c0[1] = 0;
            uVar7 = thunk_FUN_1802239dc();
            iVar4 = thunk_FUN_1802239f0(uVar7,local_c0,local_c0 + 1);
            if (iVar4 != 0) {
              while (local_c0[0] != 0) {
                uVar12 = local_c0[0] & 1;
                local_c0[0] = local_c0[0] >> 1;
                if (uVar12 != 0) {
                  iVar5 = iVar5 + 1;
                }
              }
            }
            *(bool *)((longlong)puVar10 + 0x311) = 1 < iVar5;
            if (1 < iVar5) {
              iVar5 = iVar5 + -3;
            }
            if (8 < iVar5) {
              iVar5 = 8;
            }
            if ((iVar5 != 0) && (uVar12 = 0, 0 < iVar5)) {
              local_a0 = pcVar13;
              local_b0 = param_2;
              puStack_a8 = puVar9;
              do {
                lVar6 = thunk_FUN_1802239c8(0,0,0,0);
                puVar10[uVar12 * 0xc + 0x66] = lVar6;
                if (lVar6 != 0) {
                  lVar6 = thunk_FUN_18022389c(0,0,FUN_180212bd0,puVar1 + uVar12 * 0xc,0,0);
                  puVar10[uVar12 * 0xc + 99] = lVar6;
                  if (lVar6 == 0) {
                    thunk_FUN_180223824(puVar10[uVar12 * 0xc + 0x66]);
                  }
                  else {
                    thunk_FUN_1802238c4(lVar6,0xfffffffe);
                    thunk_FUN_18022384c(puVar10 + uVar12 * 0xc + 0x67);
                  }
                }
                uVar11 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
                pcVar13 = local_a0;
                param_2 = local_b0;
                puVar9 = puStack_a8;
              } while ((int)uVar11 < iVar5);
            }
          }
          lVar6 = thunk_FUN_18022398c(s_winmm_dll_1802388c8);
          puVar10[0x5f] = lVar6;
          if (lVar6 != 0) {
            uVar7 = thunk_FUN_180223928(lVar6,s_timeBeginPeriod_1802388b8);
            puVar10[0x60] = uVar7;
            lVar6 = thunk_FUN_180223928(puVar10[0x5f],s_timeEndPeriod_1802388d8);
            puVar10[0x61] = lVar6;
            if ((puVar10[0x60] == 0) || (lVar6 == 0)) {
              puVar10[0x60] = 0;
              puVar10[0x61] = 0;
            }
          }
          goto LAB_1802065ac;
        }
        thunk_FUN_1802236bc(puVar10[0x5b]);
        puVar10[0x5b] = 0;
      }
    }
    thunk_FUN_1802236bc(puVar10[0x54]);
    puVar10[0x54] = 0;
  }
  else {
LAB_1802065ac:
    local_88 = 0;
    uVar7 = *(undefined8 *)puVar10[0xd0];
    local_98 = 0x50;
    puStack_90 = puVar10;
    local_80 = thunk_FUN_1802239b4(0);
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = 0;
    uStack_58 = uVar7;
    sVar3 = thunk_FUN_180223fcc(&local_98);
    *(short *)((longlong)puVar10 + 0xc) = sVar3;
    puVar10[2] = 0;
    if (sVar3 != 0) {
      (*pcVar13)(0x180224000);
      iVar5 = (*extraout_x11)(&DAT_180238910,puVar10 + 0x5d);
      if ((-1 < iVar5) && (uVar12 = FUN_180204148(puVar10), (uVar12 & 1) != 0)) {
        thunk_FUN_18022384c(puVar9);
        puVar10[0xc3] = 0;
        *(undefined1 *)((longlong)puVar10 + 0x313) = 0;
        local_c0[1] = 0;
        uVar7 = (*pcVar13)(0x180224000);
        iVar5 = (*extraout_x11_00)(uVar7,&DAT_1802293a8,local_c0 + 1);
        if (-1 < iVar5) {
          local_c0[0] = local_c0[0] & 0xffffffff00000000;
          uVar7 = (*pcVar13)(0x180224000);
          iVar5 = (*extraout_x11_01)(uVar7,0,local_c0,4);
          if (-1 < iVar5) {
            *(bool *)((longlong)puVar10 + 0x313) = (int)local_c0[0] == 1;
          }
          (*pcVar13)(0x180224000);
          (*extraout_x11_02)();
        }
        thunk_FUN_180223900(puVar10 + 0xd4);
        *(undefined1 *)((longlong)puVar10 + 0x314) = 0;
        puVar10[0xd4] = (longlong)puVar10[0xd4] / 1000;
        *(undefined1 *)(puVar10 + 0x62) = 1;
        lVar6 = thunk_FUN_180223928(puVar10[0x5b],s_D3D12SerializeRootSignature_180238a70);
        puVar10[0x11a] = lVar6;
        if (lVar6 != 0) {
          *(undefined1 *)((longlong)puVar10 + 0x312) = 0;
          if (param_2 != (longlong *)0x0) {
            FUN_1802229d8(puVar10[0xd8]);
            puVar10[0xd8] = 0;
            puVar10[0xd9] = 0;
            uVar12 = 0;
            if ((int)param_2[1] != 0) {
              do {
                FUN_18010be98(puVar10 + 0xd8,*param_2 + uVar12 * 8);
                uVar11 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
              } while (uVar11 < *(uint *)(param_2 + 1));
            }
          }
          cVar2 = '\x01';
          uVar11 = 0;
          if (*(int *)(puVar10 + 0xd9) == 0) {
            return puVar10;
          }
          do {
            if (cVar2 == '\0') goto LAB_1802067c0;
            lVar6 = puVar10[0xd7];
            uVar7 = (*pcVar13)();
            cVar2 = (*extraout_x11_03)(uVar7,*(undefined8 *)(lVar6 + 0x2d8),puVar10 + 0xd6);
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(puVar10 + 0xd9));
          if (cVar2 != '\0') {
            return puVar10;
          }
        }
LAB_1802067c0:
        FUN_1802012c8(puVar10);
        goto LAB_180206800;
      }
      if (*(short *)((longlong)puVar10 + 0xc) != 0) {
        uVar7 = thunk_FUN_1802239b4(0);
        thunk_FUN_180224008(*(undefined2 *)((longlong)puVar10 + 0xc),uVar7);
        if (puVar10[2] != 0) {
          thunk_FUN_1802236bc();
          puVar10[2] = 0;
        }
      }
    }
    FUN_1802011b8(puVar10);
  }
LAB_180206800:
  (*pcVar13)(0x180224000);
  (*extraout_x11_04)(puVar10,0);
  FUN_180222b28(puVar10[-1]);
  return (undefined8 *)0x0;
}


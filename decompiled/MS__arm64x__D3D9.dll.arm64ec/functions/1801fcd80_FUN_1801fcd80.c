/*
 * FUN_1801fcd80 at 1801fcd80
 * undefined FUN_1801fcd80(void)
 * Address ranges: 1801fcd80-1801fd24f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1801fcd80(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined8 *puVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong local_b0 [2];
  undefined8 *local_a0;
  code *pcStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar6 = FUN_1802229a8(0x192f8);
  lVar10 = 0x10;
  puVar9 = (undefined8 *)(lVar6 + 0x47U & 0xffffffffffffffc0);
  puVar9[-1] = lVar6;
  *(undefined4 *)(puVar9 + 1) = 0;
  uVar13 = (ulonglong)puVar9 | 0x18;
  *(undefined2 *)((longlong)puVar9 + 0xc) = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_D3DPERF_GetStatus_native_180238930;
  do {
    lVar10 = lVar10 + -1;
    FUN_1802010d0(uVar13);
    uVar13 = uVar13 + 0x28;
  } while (lVar10 != 0);
  puVar9[0x61] = 0;
  puVar9[0x53] = param_1;
  puVar9[0x54] = 0;
  puVar2 = puVar9 + 99;
  puVar9[0x55] = 0;
  puVar9[0x56] = 0;
  puVar9[0x57] = 0;
  puVar9[0x58] = 0;
  puVar9[0x59] = 0;
  puVar9[0x5a] = 0;
  puVar9[0x5b] = 0;
  puVar9[0x5c] = 0;
  puVar9[0x5d] = 0;
  puVar9[0x5e] = 0;
  puVar9[0x5f] = 0;
  puVar9[0x60] = 0;
  *(undefined4 *)(puVar9 + 0x62) = 0x10000;
  lVar6 = 8;
  *(undefined1 *)((longlong)puVar9 + 0x314) = 0;
  puVar8 = puVar2;
  do {
    puVar8[1] = 0;
    puVar8[2] = 0;
    lVar6 = lVar6 + -1;
    puVar8 = puVar8 + 0xc;
  } while (lVar6 != 0);
  puVar9[0xc3] = 0;
  puVar8 = puVar9 + 0xc4;
  *(undefined4 *)(puVar9 + 0xcf) = 0;
  puVar9[0xc9] = 0;
  puVar9[0xca] = 0;
  puVar12 = puVar9 + 0xd6;
  puVar9[0xcb] = 0;
  puVar9[0xcc] = 0;
  lVar6 = 0x10;
  puVar9[0xd2] = 0;
  puVar9[0xd3] = 0;
  puVar9[0xd0] = &PTR_s_DGD3D11ROOT_18024c630;
  puVar9[0xd1] = 0;
  *(undefined1 *)((longlong)puVar9 + 0x67c) = 0;
  puVar9[0xd4] = 0;
  puVar9[0xc5] = 0;
  *puVar8 = 0;
  puVar9[199] = 0;
  puVar9[0xc6] = 0;
  puVar9[200] = 0;
  puVar9[0xce] = 0;
  puVar9[0xcd] = 0;
  *puVar9 = &PTR_FUN_180238558;
  do {
    lVar6 = lVar6 + -1;
    FUN_1801fcb18(puVar12);
    pcVar11 = (code *)__hybrid_os_arm64x_dispatch_icall;
    puVar12 = puVar12 + 0x318;
  } while (lVar6 != 0);
  if ((puVar9[0x54] == 0) && (puVar9[0x5b] == 0)) {
    lVar6 = thunk_FUN_18022398c(s_DXGI_DLL_1802388a8);
    puVar9[0x54] = lVar6;
    if (lVar6 == 0) goto LAB_1801fd20c;
    lVar6 = thunk_FUN_180223928(lVar6,s_CreateDXGIFactory1_180238890);
    puVar9[0x57] = lVar6;
    if (lVar6 != 0) {
      lVar6 = thunk_FUN_18022398c(*(undefined8 *)(puVar9[0xd0] + 0x10));
      puVar9[0x5b] = lVar6;
      if (lVar6 != 0) {
        lVar6 = thunk_FUN_180223928(lVar6,*(undefined8 *)(puVar9[0xd0] + 0x18));
        puVar9[0x5c] = lVar6;
        if (lVar6 != 0) {
          puVar9[0x56] = 0;
          puVar9[0x58] = 0;
          puVar9[0x59] = 0;
          puVar9[0x5a] = 0;
          FUN_180222c50(puVar2,0,0x300);
          if (puVar9[0x56] != 0) {
            iVar5 = 0;
            local_b0[0] = 0;
            local_b0[1] = 0;
            uVar7 = thunk_FUN_1802239dc();
            iVar4 = thunk_FUN_1802239f0(uVar7,local_b0,local_b0 + 1);
            if (iVar4 != 0) {
              while (local_b0[0] != 0) {
                uVar13 = local_b0[0] & 1;
                local_b0[0] = local_b0[0] >> 1;
                if (uVar13 != 0) {
                  iVar5 = iVar5 + 1;
                }
              }
            }
            *(bool *)((longlong)puVar9 + 0x311) = 1 < iVar5;
            if (1 < iVar5) {
              iVar5 = iVar5 + -3;
            }
            if (8 < iVar5) {
              iVar5 = 8;
            }
            if ((iVar5 != 0) && (uVar13 = 0, 0 < iVar5)) {
              pcStack_98 = pcVar11;
              local_a0 = puVar8;
              do {
                lVar6 = thunk_FUN_1802239c8(0,0,0,0);
                puVar9[uVar13 * 0xc + 0x66] = lVar6;
                if (lVar6 != 0) {
                  lVar6 = thunk_FUN_18022389c(0,0,FUN_180212bd0,puVar2 + uVar13 * 0xc,0,0);
                  puVar9[uVar13 * 0xc + 99] = lVar6;
                  if (lVar6 == 0) {
                    thunk_FUN_180223824(puVar9[uVar13 * 0xc + 0x66]);
                  }
                  else {
                    thunk_FUN_1802238c4(lVar6,0xfffffffe);
                    thunk_FUN_18022384c(puVar9 + uVar13 * 0xc + 0x67);
                  }
                }
                uVar1 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar1;
                pcVar11 = pcStack_98;
                puVar8 = local_a0;
              } while ((int)uVar1 < iVar5);
            }
          }
          lVar6 = thunk_FUN_18022398c(s_winmm_dll_1802388c8);
          puVar9[0x5f] = lVar6;
          if (lVar6 != 0) {
            uVar7 = thunk_FUN_180223928(lVar6,s_timeBeginPeriod_1802388b8);
            puVar9[0x60] = uVar7;
            lVar6 = thunk_FUN_180223928(puVar9[0x5f],s_timeEndPeriod_1802388d8);
            puVar9[0x61] = lVar6;
            if ((puVar9[0x60] == 0) || (lVar6 == 0)) {
              puVar9[0x60] = 0;
              puVar9[0x61] = 0;
            }
          }
          goto LAB_1801fd078;
        }
        thunk_FUN_1802236bc(puVar9[0x5b]);
        puVar9[0x5b] = 0;
      }
    }
    thunk_FUN_1802236bc(puVar9[0x54]);
    puVar9[0x54] = 0;
  }
  else {
LAB_1801fd078:
    local_80 = 0;
    uVar7 = *(undefined8 *)puVar9[0xd0];
    local_90 = 0x50;
    puStack_88 = puVar9;
    local_78 = thunk_FUN_1802239b4(0);
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_48 = 0;
    uStack_50 = uVar7;
    sVar3 = thunk_FUN_180223fcc(&local_90);
    *(short *)((longlong)puVar9 + 0xc) = sVar3;
    puVar9[2] = 0;
    if (sVar3 != 0) {
      (*pcVar11)(0x180224000);
      iVar5 = (*extraout_x11)(&DAT_180238910,puVar9 + 0x5d);
      if ((-1 < iVar5) && (uVar13 = FUN_180204148(puVar9), (uVar13 & 1) != 0)) {
        thunk_FUN_18022384c(puVar8);
        puVar9[0xc3] = 0;
        *(undefined1 *)((longlong)puVar9 + 0x313) = 0;
        local_b0[1] = 0;
        uVar7 = (*pcVar11)(0x180224000);
        iVar5 = (*extraout_x11_00)(uVar7,&DAT_1802293a8,local_b0 + 1);
        if (-1 < iVar5) {
          local_b0[0] = local_b0[0] & 0xffffffff00000000;
          uVar7 = (*pcVar11)(0x180224000);
          iVar5 = (*extraout_x11_01)(uVar7,0,local_b0,4);
          if (-1 < iVar5) {
            *(bool *)((longlong)puVar9 + 0x313) = (int)local_b0[0] == 1;
          }
          (*pcVar11)(0x180224000);
          (*extraout_x11_02)();
        }
        thunk_FUN_180223900(puVar9 + 0xd4);
        *(undefined1 *)((longlong)puVar9 + 0x314) = 0;
        puVar9[0xd4] = (longlong)puVar9[0xd4] / 1000;
        *(undefined1 *)(puVar9 + 0x62) = 1;
        return puVar9;
      }
      if (*(short *)((longlong)puVar9 + 0xc) != 0) {
        uVar7 = thunk_FUN_1802239b4(0);
        thunk_FUN_180224008(*(undefined2 *)((longlong)puVar9 + 0xc),uVar7);
        if (puVar9[2] != 0) {
          thunk_FUN_1802236bc();
          puVar9[2] = 0;
        }
      }
    }
    FUN_1802011b8(puVar9);
  }
LAB_1801fd20c:
  (*pcVar11)(0x180224000);
  (*extraout_x11_03)(puVar9,0);
  FUN_180222b28(puVar9[-1]);
  return (undefined8 *)0x0;
}


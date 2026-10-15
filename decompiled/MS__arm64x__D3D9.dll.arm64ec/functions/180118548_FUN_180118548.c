/*
 * FUN_180118548 at 180118548
 * undefined FUN_180118548(void)
 * Address ranges: 180118548-18011891b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180118548(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar13;
  undefined1 auStack_140 [16];
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [4];
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  longlong local_88;
  undefined1 auStack_80 [4];
  int local_7c;
  int iStack_78;
  undefined1 auStack_60 [12];
  int local_54;
  longlong local_48;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    if (param_2 == 0) {
      local_120 = 0;
      local_118 = 0;
      local_110 = 1;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uVar11 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11_00)(uVar11,&local_120);
    }
    else {
      bVar5 = false;
      bVar2 = false;
      iVar7 = thunk_FUN_180223f40(param_2,auStack_140);
      if (iVar7 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = local_128;
        if (local_128 == 0) {
          lVar9 = local_130;
        }
        thunk_FUN_18022424c(lVar9,0x20,auStack_80);
        iVar7 = iStack_78;
        if (local_128 == 0) {
          iVar7 = iStack_78 >> 1;
        }
        iStack_d4 = local_7c << 1;
        local_c4 = 0;
        local_bc = 0;
        local_d8 = 0x28;
        local_d0 = -iVar7;
        local_cc = 0x200001;
        local_b4 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_e8 = 0;
        lVar9 = thunk_FUN_180224224(0,&local_d8,0,&local_e8,0,0);
        bVar2 = bVar5;
        if (((lVar9 != 0) && (iVar8 = thunk_FUN_18022424c(lVar9,0x20,auStack_60), iVar8 != 0)) &&
           (lVar10 = thunk_FUN_180224238(0), lVar10 != 0)) {
          local_e0 = thunk_FUN_180224260(lVar10,lVar9);
          lVar9 = thunk_FUN_180224238(0);
          if (lVar9 != 0) {
            bVar2 = local_128 == 0;
            if (bVar2) {
              uVar11 = thunk_FUN_180224260(lVar9,local_130);
              thunk_FUN_180224274(lVar10,0,0,local_7c,iVar7,lVar9,0,iVar7,0xcc0020);
            }
            else {
              uVar11 = thunk_FUN_180224260();
              thunk_FUN_180224274(lVar10,0,0,local_7c,iVar7,lVar9,0,0,0xcc0020);
            }
            thunk_FUN_180224260(lVar9,uVar11);
            uVar11 = thunk_FUN_180224260(lVar9,local_130);
            thunk_FUN_180224274(lVar10,local_7c,0,local_7c,iVar7,lVar9,0,0,0xcc0020);
            thunk_FUN_180224260(lVar9,uVar11);
            if ((!bVar2) && (lVar12 = local_48 + (local_7c << 2), 0 < iVar7)) {
              do {
                uVar13 = 0;
                if (0 < local_7c) {
                  do {
                    if (*(int *)(lVar12 + uVar13 * 4) == 0) {
                      *(undefined1 *)(local_48 + ((int)uVar13 << 2) + 3) = 0xff;
                    }
                    uVar1 = (int)uVar13 + 1;
                    uVar13 = (ulonglong)uVar1;
                  } while ((int)uVar1 < local_7c);
                }
                lVar12 = lVar12 + local_54;
                iVar7 = iVar7 + -1;
                local_48 = local_48 + local_54;
              } while (iVar7 != 0);
            }
            thunk_FUN_1802242c4(lVar9);
          }
          lVar9 = thunk_FUN_180224260(lVar10,local_e0);
          thunk_FUN_1802242c4(lVar10);
        }
        thunk_FUN_180224288(local_128);
        thunk_FUN_180224288(local_130);
      }
      if (lVar9 != 0) {
        thunk_FUN_18022424c(lVar9,0x20,auStack_a0);
        if (bVar2) {
          local_f8 = local_88 + ((int)(local_9c * 4 + ((local_9c & 0x3fffffff) >> 0x1d)) >> 1);
        }
        else {
          local_f8 = 0;
        }
        uVar1 = *(uint *)(param_1 + 0x90);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801187f8);
          (*pcVar6)();
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = *(uint *)(param_1 + 0xa8) / uVar1;
        }
        uVar3 = uVar3 * *(int *)(param_1 + 0xb8);
        uVar1 = *(uint *)(param_1 + 0x94);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180118814);
          (*pcVar6)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = *(uint *)(param_1 + 0xac) / uVar1;
        }
        uVar4 = uVar4 * *(int *)(param_1 + 0xbc);
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        local_108 = local_88;
        uVar1 = *(uint *)(DAT_18024d928 + 0x8aa);
        if (*(uint *)(DAT_18024d928 + 0x8aa) == 0) {
          uVar1 = uVar3;
        }
        local_120 = CONCAT44(local_98,(int)local_9c / 2);
        local_100 = uStack_94;
        local_110 = uVar1;
        if (0x10 < uVar1) {
          local_110 = 0x10;
        }
        if (uVar1 == 0) {
          local_110 = 1;
        }
        if (!bVar2) {
          uStack_94 = 0;
        }
        local_f0 = uStack_94;
        uVar11 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(uVar11,&local_120);
        thunk_FUN_180224288(lVar9);
      }
    }
  }
  return;
}


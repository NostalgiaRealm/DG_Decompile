/*
 * FUN_1801e18b0 at 1801e18b0
 * undefined FUN_1801e18b0(void)
 * Address ranges: 1801e18b0-1801e1c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e18b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined8 local_d0;
  undefined8 local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0 [2];
  longlong local_98;
  undefined4 local_90;
  uint uStack_8c;
  int local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined1 auStack_60 [12];
  int local_54;
  longlong local_48;
  
  uVar15 = 0x8876086c;
  if (param_2 != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x178) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar5 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar5 = true;
      iVar9 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar9 == 0) {
        FUN_1801085c8();
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x178);
    uVar15 = 0x8876086c;
    local_a8 = lVar14;
    if ((((*(longlong *)(param_2 + -0x58) == lVar14) && (*(int *)(param_2 + -0x38) == 0x15)) &&
        (*(int *)(param_2 + -0x2c) - 2U < 2)) &&
       (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
        (uVar15 = 0x88760868, *(char *)(lVar14 + 0x6819) == '\0')))) {
      uVar15 = 0x8876086c;
      FUN_1801083e8(*(undefined8 *)(lVar14 + 0xe28),*(undefined4 *)(lVar14 + 0xea8),&local_d0);
      uVar13 = local_d0;
      uVar6 = (uint)local_d0;
      if (((uint)local_d0 <= *(uint *)(param_2 + -0x20)) &&
         (uVar7 = local_d0._4_4_, local_d0._4_4_ <= *(uint *)(param_2 + -0x1c))) {
        uVar15 = 0x80004005;
        local_c0 = 0;
        local_b8 = (uint)local_d0;
        uStack_b4 = local_d0._4_4_;
        if ((&DAT_18024e334)[(ulonglong)*(uint *)(lVar14 + 0xea8) * 0x28] == '\0') {
          local_7c = 0;
          local_90 = 0x28;
          uStack_8c = (uint)local_d0;
          local_88 = -local_d0._4_4_;
          local_84 = 0x200001;
          local_74 = 0;
          local_6c = 0;
          local_b0 = 0;
          lVar14 = thunk_FUN_180224224(0,&local_90,0,&local_b0,0,0);
          if (lVar14 != 0) {
            uVar10 = thunk_FUN_180224238(0);
            local_d0 = uVar10;
            if (uVar10 != 0) {
              iVar9 = thunk_FUN_18022424c(lVar14,0x20,auStack_60);
              if (iVar9 == 0x20) {
                lVar14 = thunk_FUN_180224260(uVar10,lVar14);
                lVar11 = thunk_FUN_180223c98(0,0,3);
                if (lVar11 != 0) {
                  if (((*(uint *)(*(longlong *)(param_2 + -0x58) + 0xe78) >> 2 & 1) == 0) &&
                     (*(int *)(DAT_180258900 + 0x30) == 0)) {
                    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
                    if (iVar9 == 0) {
                      FUN_1801085c8();
                    }
                  }
                  iVar9 = FUN_180117448(param_2 + -0x80,local_a0,&local_c0,0x10,1,0);
                  if (bVar4) {
                    thunk_FUN_18022370c(DAT_180258900);
                  }
                  else {
                    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
                  }
                  if (-1 < iVar9) {
                    thunk_FUN_180224274(local_d0,0,0,uVar13 & 0xffffffff,uVar7,lVar11,
                                        (int)*(undefined8 *)
                                              (&DAT_18024ea14 +
                                              (ulonglong)*(uint *)(local_a8 + 0xea8) * 600),
                                        (int)((ulonglong)
                                              *(undefined8 *)
                                               (&DAT_18024ea14 +
                                               (ulonglong)*(uint *)(local_a8 + 0xea8) * 600) >> 0x20
                                             ),0xcc0020);
                    uVar12 = 0;
                    if (uVar7 != 0) {
                      do {
                        uVar13 = 0;
                        if (uVar6 != 0) {
                          do {
                            *(uint *)(local_98 + uVar13 * 4) =
                                 *(uint *)(local_48 + uVar13 * 4) | 0xff000000;
                            uVar1 = (int)uVar13 + 1;
                            uVar13 = (ulonglong)uVar1;
                          } while (uVar1 < uVar6);
                        }
                        uVar12 = uVar12 + 1;
                        local_48 = local_48 + local_54;
                        local_98 = local_98 + local_a0[0];
                      } while (uVar12 < uVar7);
                    }
                    FUN_180118100(param_2 + -0x80);
                    uVar15 = 0;
                  }
                  thunk_FUN_180223cac(0,lVar11);
                }
              }
              lVar14 = thunk_FUN_180224260(local_d0,lVar14);
            }
            thunk_FUN_180224288(lVar14);
          }
        }
        else {
          pcVar2 = &DAT_000000f9;
          if (param_1 != 0) {
            pcVar2 = (char *)(param_1 + 0x101);
          }
          if (*pcVar2 == '\0') {
            puVar3 = (undefined8 *)&DAT_00000058;
            if (param_1 != 0) {
              puVar3 = (undefined8 *)(param_1 + 0x60);
            }
            cVar8 = FUN_180109568(lVar14,*puVar3,param_2 + -0x80,1,&local_c0,0);
            if (cVar8 != '\0') {
              uVar15 = 0;
            }
          }
        }
      }
    }
    if (bVar5) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar15;
}


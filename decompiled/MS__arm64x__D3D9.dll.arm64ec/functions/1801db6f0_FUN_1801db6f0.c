/*
 * FUN_1801db6f0 at 1801db6f0
 * undefined FUN_1801db6f0(void)
 * Address ranges: 1801db6f0-1801dbaaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801db6f0(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 local_d0;
  undefined8 local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  int local_a8 [2];
  longlong local_a0;
  undefined4 local_98;
  uint uStack_94;
  int local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined1 auStack_68 [12];
  int local_5c;
  longlong local_50;
  
  uVar11 = 0x8876086c;
  if ((param_3 != 0) && (param_2 < *(uint *)(param_1 + -0x5a00))) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar3 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar3 = true;
      iVar7 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar7 == 0) {
        FUN_1801085c8();
      }
    }
    uVar11 = 0x8876086c;
    if ((((*(longlong *)(param_3 + -0x58) == param_1 + -0x6838) &&
         (*(int *)(param_3 + -0x38) == 0x15)) && (*(int *)(param_3 + -0x2c) - 2U < 2)) &&
       (((*(uint *)(*(longlong *)(param_3 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
        (uVar11 = 0x88760868, *(char *)(param_1 + -0x1f) == '\0')))) {
      uVar11 = 0x8876086c;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
      FUN_1801083e8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),&local_d0)
      ;
      uVar10 = local_d0;
      uVar4 = (uint)local_d0;
      if (((uint)local_d0 <= *(uint *)(param_3 + -0x20)) &&
         (uVar5 = local_d0._4_4_, local_d0._4_4_ <= *(uint *)(param_3 + -0x1c))) {
        local_c0 = 0;
        uVar11 = 0x80004005;
        local_b8 = (uint)local_d0;
        uStack_b4 = local_d0._4_4_;
        if ((&DAT_18024e334)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x28] == '\0') {
          local_84 = 0;
          local_98 = 0x28;
          uStack_94 = (uint)local_d0;
          local_90 = -local_d0._4_4_;
          local_8c = 0x200001;
          local_7c = 0;
          local_74 = 0;
          local_b0 = 0;
          lVar12 = thunk_FUN_180224224(0,&local_98,0,&local_b0,0,0);
          if (lVar12 != 0) {
            lVar8 = thunk_FUN_180224238(0);
            if (lVar8 != 0) {
              iVar7 = thunk_FUN_18022424c(lVar12,0x20,auStack_68);
              if (iVar7 == 0x20) {
                lVar12 = thunk_FUN_180224260(lVar8,lVar12);
                local_d0 = thunk_FUN_180223c98(0,0,3);
                if (local_d0 != 0) {
                  if (((*(uint *)(*(longlong *)(param_3 + -0x58) + 0xe78) >> 2 & 1) == 0) &&
                     (*(int *)(DAT_180258900 + 0x30) == 0)) {
                    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                    iVar7 = thunk_FUN_1802236e4(DAT_180258900);
                    if (iVar7 == 0) {
                      FUN_1801085c8();
                    }
                  }
                  iVar7 = FUN_180117448(param_3 + -0x80,local_a8,&local_c0,0x10,1,0);
                  if (bVar2) {
                    thunk_FUN_18022370c(DAT_180258900);
                  }
                  else {
                    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
                  }
                  if (-1 < iVar7) {
                    thunk_FUN_180224274(lVar8,0,0,uVar10 & 0xffffffff,uVar5,local_d0,
                                        (int)*(undefined8 *)
                                              (&DAT_18024ea14 +
                                              (ulonglong)*(uint *)(param_1 + -0x5990) * 600),
                                        (int)((ulonglong)
                                              *(undefined8 *)
                                               (&DAT_18024ea14 +
                                               (ulonglong)*(uint *)(param_1 + -0x5990) * 600) >>
                                             0x20),0xcc0020);
                    uVar9 = 0;
                    if (uVar5 != 0) {
                      do {
                        uVar10 = 0;
                        if (uVar4 != 0) {
                          do {
                            *(uint *)(local_a0 + uVar10 * 4) =
                                 *(uint *)(local_50 + uVar10 * 4) | 0xff000000;
                            uVar1 = (int)uVar10 + 1;
                            uVar10 = (ulonglong)uVar1;
                          } while (uVar1 < uVar4);
                        }
                        uVar9 = uVar9 + 1;
                        local_50 = local_50 + local_5c;
                        local_a0 = local_a0 + local_a8[0];
                      } while (uVar9 < uVar5);
                    }
                    FUN_180118100(param_3 + -0x80);
                    uVar11 = 0;
                  }
                  thunk_FUN_180223cac(0,local_d0);
                }
              }
              lVar12 = thunk_FUN_180224260(lVar8,lVar12);
            }
            thunk_FUN_180224288(lVar12);
          }
        }
        else if ((*(char *)(lVar12 + 0xf9) == '\0') &&
                (cVar6 = FUN_180109568(param_1 + -0x6838,*(undefined8 *)(lVar12 + 0x58),
                                       param_3 + -0x80,1,&local_c0,0), cVar6 != '\0')) {
          uVar11 = 0;
        }
      }
    }
    if (bVar3) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar11;
}


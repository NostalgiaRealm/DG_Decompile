/*
 * FUN_140011730 at 140011730
 * undefined8 __fastcall FUN_140011730(longlong param_1)
 * Address ranges: 140011730-140011c2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140011730(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  short *psVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  short *psVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  uint local_res8;
  longlong *local_res20;
  short local_338 [40];
  int local_2e8;
  undefined8 local_2e0;
  short local_2d8 [32];
  short local_298 [128];
  undefined8 local_198;
  undefined8 local_190;
  short local_188 [148];
  undefined8 local_60;
  
  uVar18 = FUN_140013600(*(longlong *)(param_1 + 0x10));
  if ((char)uVar18 == '\0') {
    return uVar18 & 0xffffffffffffff00;
  }
  uVar17 = 0x10;
  if (*(char *)(param_1 + 0x478) != '\0') {
    uVar17 = 1;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 800);
  if (uVar17 < uVar2) {
    uVar2 = uVar17;
  }
  FUN_140011670(param_1);
  uVar18 = FUN_140024260(*(LPVOID *)(param_1 + 800));
  uVar27 = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  local_res8 = 0;
  if (uVar2 != 0) {
    do {
      if ((*(uint *)(param_1 + 0x18) == 0) ||
         (uVar17 = (uint)uVar27 + 1, uVar18 = (ulonglong)uVar17, *(uint *)(param_1 + 0x18) == uVar17
         )) {
        lVar26 = *(longlong *)(param_1 + 0x10);
        if ((uint)uVar27 < *(uint *)(lVar26 + 800)) {
          uVar18 = (ulonglong)*(uint *)(*(longlong *)(lVar26 + 0x318) + uVar27 * 4);
        }
        else {
          uVar18 = 0;
        }
        uVar17 = *(uint *)(param_1 + 0x328);
        uVar3 = *(uint *)(param_1 + 0x32c);
        if (uVar17 == uVar3) {
          uVar24 = 0x10;
          if (uVar3 != 0) {
            uVar24 = (ulonglong)(uVar3 * 2);
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar24;
          uVar19 = SUB168(ZEXT816(4) * auVar5,0);
          if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
            uVar19 = 0xffffffffffffffff;
          }
          puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
          if (puVar20 != (undefined8 *)0x0) {
            FUN_140024620(puVar20,*(undefined8 **)(param_1 + 800),
                          (ulonglong)*(uint *)(param_1 + 0x32c) << 2);
            FUN_140024260(*(LPVOID *)(param_1 + 800));
            *(undefined8 **)(param_1 + 800) = puVar20;
            *(int *)(param_1 + 0x32c) = (int)uVar24;
            goto LAB_1400118a9;
          }
        }
        else {
LAB_1400118a9:
          *(int *)(*(longlong *)(param_1 + 800) + (ulonglong)*(uint *)(param_1 + 0x328) * 4) =
               (int)uVar18;
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
        }
        lVar26 = uVar18 * 0x28 + lVar26;
        (**(code **)(**(longlong **)(lVar26 + 8) + 0x50))(*(longlong **)(lVar26 + 8),local_188);
        local_res20 = (longlong *)0x0;
        iVar28 = 0;
        uVar18 = (**(code **)(**(longlong **)(lVar26 + 8) + 0x38))
                           (*(longlong **)(lVar26 + 8),0,&local_res20);
        if ((int)uVar18 != -0x7785fffe) {
          uVar27 = (ulonglong)uVar17;
          do {
            (**(code **)(*local_res20 + 0x38))(local_res20,local_338);
            if (local_2e8 != 0) {
              FUN_1400250dc(local_2d8,local_188);
              FUN_1400250dc(local_298,local_338);
              lVar25 = (uVar27 + 0x22) * 0x10;
              local_198 = local_2e0;
              local_190 = local_60;
              iVar4 = *(int *)(param_1 + 0xc + lVar25);
              if (*(int *)(param_1 + 8 + lVar25) == iVar4) {
                uVar18 = 0x10;
                if (iVar4 != 0) {
                  uVar18 = (ulonglong)(uint)(iVar4 * 2);
                }
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar18;
                uVar19 = SUB168(ZEXT816(0x150) * auVar6,0);
                if (SUB168(ZEXT816(0x150) * auVar6,8) != 0) {
                  uVar19 = 0xffffffffffffffff;
                }
                puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
                if (puVar20 != (undefined8 *)0x0) {
                  FUN_140024620(puVar20,*(undefined8 **)(param_1 + lVar25),
                                (ulonglong)*(uint *)(param_1 + 0xc + lVar25) * 0x150);
                  FUN_140024260(*(LPVOID *)(param_1 + lVar25));
                  *(undefined8 **)(param_1 + lVar25) = puVar20;
                  *(int *)(param_1 + 0xc + lVar25) = (int)uVar18;
                  goto LAB_1400119f1;
                }
              }
              else {
LAB_1400119f1:
                lVar22 = 2;
                psVar16 = local_2d8;
                puVar20 = (undefined8 *)
                          ((ulonglong)*(uint *)(param_1 + 8 + lVar25) * 0x150 +
                          *(longlong *)(param_1 + lVar25));
                do {
                  puVar23 = puVar20;
                  psVar21 = psVar16;
                  uVar19 = *(undefined8 *)(psVar21 + 4);
                  uVar13 = *(undefined8 *)(psVar21 + 8);
                  uVar14 = *(undefined8 *)(psVar21 + 0xc);
                  *puVar23 = *(undefined8 *)psVar21;
                  puVar23[1] = uVar19;
                  uVar19 = *(undefined8 *)(psVar21 + 0x10);
                  uVar15 = *(undefined8 *)(psVar21 + 0x14);
                  puVar23[2] = uVar13;
                  puVar23[3] = uVar14;
                  uVar13 = *(undefined8 *)(psVar21 + 0x18);
                  uVar14 = *(undefined8 *)(psVar21 + 0x1c);
                  puVar23[4] = uVar19;
                  puVar23[5] = uVar15;
                  uVar19 = *(undefined8 *)(psVar21 + 0x20);
                  uVar15 = *(undefined8 *)(psVar21 + 0x24);
                  puVar23[6] = uVar13;
                  puVar23[7] = uVar14;
                  uVar13 = *(undefined8 *)(psVar21 + 0x28);
                  uVar14 = *(undefined8 *)(psVar21 + 0x2c);
                  puVar23[8] = uVar19;
                  puVar23[9] = uVar15;
                  uVar19 = *(undefined8 *)(psVar21 + 0x30);
                  uVar15 = *(undefined8 *)(psVar21 + 0x34);
                  puVar23[10] = uVar13;
                  puVar23[0xb] = uVar14;
                  uVar13 = *(undefined8 *)(psVar21 + 0x38);
                  uVar14 = *(undefined8 *)(psVar21 + 0x3c);
                  puVar23[0xc] = uVar19;
                  puVar23[0xd] = uVar15;
                  puVar23[0xe] = uVar13;
                  puVar23[0xf] = uVar14;
                  lVar22 = lVar22 + -1;
                  psVar16 = psVar21 + 0x40;
                  puVar20 = puVar23 + 0x10;
                } while (lVar22 != 0);
                uVar19 = *(undefined8 *)(psVar21 + 0x44);
                uVar13 = *(undefined8 *)(psVar21 + 0x48);
                uVar14 = *(undefined8 *)(psVar21 + 0x4c);
                puVar23[0x10] = *(undefined8 *)(psVar21 + 0x40);
                puVar23[0x11] = uVar19;
                uVar19 = *(undefined8 *)(psVar21 + 0x50);
                uVar15 = *(undefined8 *)(psVar21 + 0x54);
                puVar23[0x12] = uVar13;
                puVar23[0x13] = uVar14;
                uVar13 = *(undefined8 *)(psVar21 + 0x58);
                uVar14 = *(undefined8 *)(psVar21 + 0x5c);
                puVar23[0x14] = uVar19;
                puVar23[0x15] = uVar15;
                uVar9 = *(undefined4 *)(psVar21 + 0x60);
                uVar10 = *(undefined4 *)(psVar21 + 0x62);
                uVar11 = *(undefined4 *)(psVar21 + 100);
                uVar12 = *(undefined4 *)(psVar21 + 0x66);
                puVar23[0x16] = uVar13;
                puVar23[0x17] = uVar14;
                *(undefined4 *)(puVar23 + 0x18) = uVar9;
                *(undefined4 *)((longlong)puVar23 + 0xc4) = uVar10;
                *(undefined4 *)(puVar23 + 0x19) = uVar11;
                *(undefined4 *)((longlong)puVar23 + 0xcc) = uVar12;
                piVar1 = (int *)(param_1 + 8 + lVar25);
                *piVar1 = *piVar1 + 1;
              }
              lVar25 = (uVar27 + 2) * 0x10;
              iVar4 = *(int *)(param_1 + 0xc + lVar25);
              if (*(int *)(param_1 + 8 + lVar25) == iVar4) {
                uVar18 = 0x10;
                if (iVar4 != 0) {
                  uVar18 = (ulonglong)(uint)(iVar4 * 2);
                }
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar18;
                uVar19 = SUB168(ZEXT816(8) * auVar7,0);
                if (SUB168(ZEXT816(8) * auVar7,8) != 0) {
                  uVar19 = 0xffffffffffffffff;
                }
                puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
                if (puVar20 != (undefined8 *)0x0) {
                  FUN_140024620(puVar20,*(undefined8 **)(param_1 + lVar25),
                                (ulonglong)*(uint *)(param_1 + 0xc + lVar25) << 3);
                  FUN_140024260(*(LPVOID *)(param_1 + lVar25));
                  *(undefined8 **)(param_1 + lVar25) = puVar20;
                  *(int *)(param_1 + 0xc + lVar25) = (int)uVar18;
                  goto LAB_140011af6;
                }
              }
              else {
LAB_140011af6:
                *(undefined8 *)
                 (*(longlong *)(param_1 + lVar25) + (ulonglong)*(uint *)(param_1 + 8 + lVar25) * 8)
                     = 0;
                piVar1 = (int *)(param_1 + 8 + lVar25);
                *piVar1 = *piVar1 + 1;
              }
              lVar25 = (uVar27 + 0x12) * 0x10;
              iVar4 = *(int *)(param_1 + 0xc + lVar25);
              if (*(int *)(param_1 + 8 + lVar25) == iVar4) {
                uVar18 = 0x10;
                if (iVar4 != 0) {
                  uVar18 = (ulonglong)(uint)(iVar4 * 2);
                }
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar18;
                uVar19 = SUB168(ZEXT816(8) * auVar8,0);
                if (SUB168(ZEXT816(8) * auVar8,8) != 0) {
                  uVar19 = 0xffffffffffffffff;
                }
                puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
                if (puVar20 == (undefined8 *)0x0) goto LAB_140011b87;
                FUN_140024620(puVar20,*(undefined8 **)(param_1 + lVar25),
                              (ulonglong)*(uint *)(param_1 + 0xc + lVar25) << 3);
                FUN_140024260(*(LPVOID *)(param_1 + lVar25));
                *(undefined8 **)(param_1 + lVar25) = puVar20;
                *(int *)(param_1 + 0xc + lVar25) = (int)uVar18;
              }
              *(undefined8 *)
               (*(longlong *)(param_1 + lVar25) + (ulonglong)*(uint *)(param_1 + 8 + lVar25) * 8) =
                   0;
              piVar1 = (int *)(param_1 + 8 + lVar25);
              *piVar1 = *piVar1 + 1;
            }
LAB_140011b87:
            (**(code **)(*local_res20 + 0x10))();
            iVar28 = iVar28 + 1;
            uVar18 = (**(code **)(**(longlong **)(lVar26 + 8) + 0x38))
                               (*(longlong **)(lVar26 + 8),iVar28,&local_res20);
          } while ((int)uVar18 != -0x7785fffe);
          uVar27 = (ulonglong)local_res8;
        }
      }
      local_res8 = (int)uVar27 + 1;
      uVar27 = (ulonglong)local_res8;
    } while (local_res8 < uVar2);
  }
  return CONCAT71((int7)(uVar18 >> 8),1);
}


/*
 * FUN_180055b70 at 180055b70
 * undefined8 __fastcall FUN_180055b70(longlong param_1)
 * Address ranges: 180055b70-180055f92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180055b70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  short *psVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  short *psVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  uint local_res10;
  int local_res18 [2];
  uint local_res20;
  longlong *local_348;
  longlong local_340;
  short local_338 [40];
  int local_2e8;
  undefined8 local_2e0;
  short local_2d8 [32];
  short local_298 [128];
  undefined8 local_198;
  undefined8 local_190;
  short local_188 [148];
  undefined8 local_60;
  
  uVar17 = FUN_180050fa4(*(longlong *)(param_1 + 0x10));
  if ((char)uVar17 == '\0') {
    uVar17 = uVar17 & 0xffffffffffffff00;
  }
  else {
    uVar21 = (-(uint)(*(char *)(param_1 + 0x478) != '\0') & 0xfffffff1) + 0x10;
    uVar26 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x698);
    if (uVar21 < uVar26) {
      uVar26 = uVar21;
    }
    local_res20 = uVar26;
    FUN_180055ab8(param_1);
    uVar17 = FUN_18005dbc0(*(LPVOID *)(param_1 + 800));
    uVar24 = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    local_res10 = 0;
    if (uVar26 != 0) {
      do {
        if ((*(int *)(param_1 + 0x18) == 0) ||
           (uVar21 = (uint)uVar24 + 1, uVar17 = (ulonglong)uVar21,
           *(uint *)(param_1 + 0x18) == uVar21)) {
          lVar3 = *(longlong *)(param_1 + 0x10);
          if ((uint)uVar24 < *(uint *)(lVar3 + 0x698)) {
            uVar17 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x690) + uVar24 * 4);
          }
          else {
            uVar17 = 0;
          }
          uVar21 = *(uint *)(param_1 + 0x328);
          local_res18[0] = (int)uVar17;
          FUN_18000944c((longlong *)(param_1 + 800),local_res18);
          local_340 = uVar17 * 5;
          plVar4 = *(longlong **)(lVar3 + 0x18 + uVar17 * 0x28);
          (**(code **)(*plVar4 + 0x50))(plVar4,local_188);
          local_348 = (longlong *)0x0;
          local_res18[0] = 0;
          plVar4 = *(longlong **)(lVar3 + 0x18 + local_340 * 8);
          uVar17 = (**(code **)(*plVar4 + 0x38))(plVar4,0,&local_348);
          lVar15 = local_340;
          iVar27 = local_res18[0];
          if ((int)uVar17 != -0x7785fffe) {
            do {
              (**(code **)(*local_348 + 0x38))(local_348,local_338);
              if (local_2e8 != 0) {
                FUN_18005e030(local_2d8,local_188);
                FUN_18005e030(local_298,local_338);
                local_198 = local_2e0;
                local_190 = local_60;
                lVar25 = ((ulonglong)uVar21 + 0x22) * 0x10;
                iVar2 = *(int *)(param_1 + 0xc + lVar25);
                if (*(int *)(param_1 + 8 + lVar25) == iVar2) {
                  uVar17 = 0x10;
                  if (iVar2 != 0) {
                    uVar17 = (ulonglong)(uint)(iVar2 * 2);
                  }
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar17;
                  uVar18 = SUB168(ZEXT816(0x150) * auVar5,0);
                  if (SUB168(ZEXT816(0x150) * auVar5,8) != 0) {
                    uVar18 = 0xffffffffffffffff;
                  }
                  puVar19 = (undefined8 *)thunk_FUN_18005db9c(uVar18);
                  if (puVar19 != (undefined8 *)0x0) {
                    FUN_18005f1b0(puVar19,*(undefined8 **)(param_1 + lVar25),
                                  (ulonglong)*(uint *)(param_1 + 0xc + lVar25) * 0x150);
                    FUN_18005dbc0(*(LPVOID *)(param_1 + lVar25));
                    *(undefined8 **)(param_1 + lVar25) = puVar19;
                    *(int *)(param_1 + 0xc + lVar25) = (int)uVar17;
                    goto LAB_180055d78;
                  }
                }
                else {
LAB_180055d78:
                  lVar22 = 2;
                  psVar16 = local_2d8;
                  puVar19 = (undefined8 *)
                            ((ulonglong)*(uint *)(param_1 + 8 + lVar25) * 0x150 +
                            *(longlong *)(param_1 + lVar25));
                  do {
                    puVar23 = puVar19;
                    psVar20 = psVar16;
                    uVar18 = *(undefined8 *)(psVar20 + 4);
                    uVar12 = *(undefined8 *)(psVar20 + 8);
                    uVar13 = *(undefined8 *)(psVar20 + 0xc);
                    *puVar23 = *(undefined8 *)psVar20;
                    puVar23[1] = uVar18;
                    uVar18 = *(undefined8 *)(psVar20 + 0x10);
                    uVar14 = *(undefined8 *)(psVar20 + 0x14);
                    puVar23[2] = uVar12;
                    puVar23[3] = uVar13;
                    uVar12 = *(undefined8 *)(psVar20 + 0x18);
                    uVar13 = *(undefined8 *)(psVar20 + 0x1c);
                    puVar23[4] = uVar18;
                    puVar23[5] = uVar14;
                    uVar18 = *(undefined8 *)(psVar20 + 0x20);
                    uVar14 = *(undefined8 *)(psVar20 + 0x24);
                    puVar23[6] = uVar12;
                    puVar23[7] = uVar13;
                    uVar12 = *(undefined8 *)(psVar20 + 0x28);
                    uVar13 = *(undefined8 *)(psVar20 + 0x2c);
                    puVar23[8] = uVar18;
                    puVar23[9] = uVar14;
                    uVar18 = *(undefined8 *)(psVar20 + 0x30);
                    uVar14 = *(undefined8 *)(psVar20 + 0x34);
                    puVar23[10] = uVar12;
                    puVar23[0xb] = uVar13;
                    uVar12 = *(undefined8 *)(psVar20 + 0x38);
                    uVar13 = *(undefined8 *)(psVar20 + 0x3c);
                    puVar23[0xc] = uVar18;
                    puVar23[0xd] = uVar14;
                    puVar23[0xe] = uVar12;
                    puVar23[0xf] = uVar13;
                    lVar22 = lVar22 + -1;
                    psVar16 = psVar20 + 0x40;
                    puVar19 = puVar23 + 0x10;
                  } while (lVar22 != 0);
                  uVar18 = *(undefined8 *)(psVar20 + 0x44);
                  uVar12 = *(undefined8 *)(psVar20 + 0x48);
                  uVar13 = *(undefined8 *)(psVar20 + 0x4c);
                  puVar23[0x10] = *(undefined8 *)(psVar20 + 0x40);
                  puVar23[0x11] = uVar18;
                  uVar18 = *(undefined8 *)(psVar20 + 0x50);
                  uVar14 = *(undefined8 *)(psVar20 + 0x54);
                  puVar23[0x12] = uVar12;
                  puVar23[0x13] = uVar13;
                  uVar12 = *(undefined8 *)(psVar20 + 0x58);
                  uVar13 = *(undefined8 *)(psVar20 + 0x5c);
                  puVar23[0x14] = uVar18;
                  puVar23[0x15] = uVar14;
                  uVar8 = *(undefined4 *)(psVar20 + 0x60);
                  uVar9 = *(undefined4 *)(psVar20 + 0x62);
                  uVar10 = *(undefined4 *)(psVar20 + 100);
                  uVar11 = *(undefined4 *)(psVar20 + 0x66);
                  puVar23[0x16] = uVar12;
                  puVar23[0x17] = uVar13;
                  *(undefined4 *)(puVar23 + 0x18) = uVar8;
                  *(undefined4 *)((longlong)puVar23 + 0xc4) = uVar9;
                  *(undefined4 *)(puVar23 + 0x19) = uVar10;
                  *(undefined4 *)((longlong)puVar23 + 0xcc) = uVar11;
                  piVar1 = (int *)(param_1 + 8 + lVar25);
                  *piVar1 = *piVar1 + 1;
                }
                lVar25 = ((ulonglong)uVar21 + 2) * 0x10;
                iVar2 = *(int *)(param_1 + 0xc + lVar25);
                if (*(int *)(param_1 + 8 + lVar25) == iVar2) {
                  uVar17 = 0x10;
                  if (iVar2 != 0) {
                    uVar17 = (ulonglong)(uint)(iVar2 * 2);
                  }
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar17;
                  uVar18 = SUB168(ZEXT816(8) * auVar6,0);
                  if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
                    uVar18 = 0xffffffffffffffff;
                  }
                  puVar19 = (undefined8 *)thunk_FUN_18005db9c(uVar18);
                  if (puVar19 != (undefined8 *)0x0) {
                    FUN_18005f1b0(puVar19,*(undefined8 **)(param_1 + lVar25),
                                  (ulonglong)*(uint *)(param_1 + 0xc + lVar25) << 3);
                    FUN_18005dbc0(*(LPVOID *)(param_1 + lVar25));
                    *(undefined8 **)(param_1 + lVar25) = puVar19;
                    *(int *)(param_1 + 0xc + lVar25) = (int)uVar17;
                    goto LAB_180055e7b;
                  }
                }
                else {
LAB_180055e7b:
                  *(undefined8 *)
                   (*(longlong *)(param_1 + lVar25) + (ulonglong)*(uint *)(param_1 + 8 + lVar25) * 8
                   ) = 0;
                  piVar1 = (int *)(param_1 + 8 + lVar25);
                  *piVar1 = *piVar1 + 1;
                }
                lVar25 = ((ulonglong)uVar21 + 0x12) * 0x10;
                iVar2 = *(int *)(param_1 + 0xc + lVar25);
                if (*(int *)(param_1 + 8 + lVar25) == iVar2) {
                  uVar17 = 0x10;
                  if (iVar2 != 0) {
                    uVar17 = (ulonglong)(uint)(iVar2 * 2);
                  }
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar17;
                  uVar18 = SUB168(ZEXT816(8) * auVar7,0);
                  if (SUB168(ZEXT816(8) * auVar7,8) != 0) {
                    uVar18 = 0xffffffffffffffff;
                  }
                  puVar19 = (undefined8 *)thunk_FUN_18005db9c(uVar18);
                  if (puVar19 == (undefined8 *)0x0) goto LAB_180055f27;
                  FUN_18005f1b0(puVar19,*(undefined8 **)(param_1 + lVar25),
                                (ulonglong)*(uint *)(param_1 + 0xc + lVar25) << 3);
                  FUN_18005dbc0(*(LPVOID *)(param_1 + lVar25));
                  *(undefined8 **)(param_1 + lVar25) = puVar19;
                  *(int *)(param_1 + 0xc + lVar25) = (int)uVar17;
                }
                *(undefined8 *)
                 (*(longlong *)(param_1 + lVar25) + (ulonglong)*(uint *)(param_1 + 8 + lVar25) * 8)
                     = 0;
                piVar1 = (int *)(param_1 + 8 + lVar25);
                *piVar1 = *piVar1 + 1;
              }
LAB_180055f27:
              (**(code **)(*local_348 + 0x10))();
              plVar4 = *(longlong **)(lVar3 + 0x18 + lVar15 * 8);
              uVar17 = (**(code **)(*plVar4 + 0x38))(plVar4,iVar27 + 1,&local_348);
              iVar27 = iVar27 + 1;
            } while ((int)uVar17 != -0x7785fffe);
            uVar24 = (ulonglong)local_res10;
            uVar26 = local_res20;
          }
        }
        local_res10 = (int)uVar24 + 1;
        uVar24 = (ulonglong)local_res10;
      } while (local_res10 < uVar26);
    }
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
  }
  return uVar17;
}


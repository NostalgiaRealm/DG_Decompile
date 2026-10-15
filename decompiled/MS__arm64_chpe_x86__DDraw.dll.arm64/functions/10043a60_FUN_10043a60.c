/*
 * FUN_10043a60 at 10043a60
 * undefined FUN_10043a60(void)
 * Address ranges: 10043a60-10043f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10043a60(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_b0 [4];
  int *local_ac;
  int *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined1 auStack_8c [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_10037888(auStack_b0);
  uVar20 = 0x80070057;
  if (((param_3 & 0xf8ffffc0) == 0) && ((param_3 & 0x21) != 0x21)) {
    uVar23 = param_3 & 0x7000000;
    if ((uVar23 != 0x5000000 && (uVar23 + 0xfe000000 & 0xfcffffff) == 0) && (param_3 >> 3 & 1) == 0
        || (param_3 & 0x7000000) == 0) {
      uVar23 = uVar23 >> 0x18;
      if ((param_3 & 0x7000000) == 0) {
        uVar23 = 1;
      }
      uVar24 = 0;
      if ((param_3 >> 3 & 1) == 0) {
        uVar24 = uVar23;
      }
      uVar20 = 0x80004001;
      if ((param_3 & 6) == 0) {
        if (param_2 == 0) {
          iVar22 = *(int *)(param_1 + 0x110);
          uVar23 = 1;
        }
        else {
          uVar23 = 0;
          for (iVar22 = param_1; (iVar22 != 0 && (param_2 != iVar22));
              iVar22 = *(int *)(iVar22 + 0x110)) {
            uVar23 = uVar23 + 1;
          }
        }
        uVar20 = 0x88760246;
        if ((((*(uint *)(param_1 + 0x1b8) >> 5 & 1) != 0) && (iVar22 != 0)) &&
           (((*(uint *)(param_1 + 0x1b8) >> 0xf & 1) == 0 ||
            (uVar20 = 0x887600e1, (*(uint *)(*(int *)(param_1 + 0xfc) + 0x104) >> 4 & 1) != 0)))) {
          pcVar1 = (char *)(param_1 + 8);
          if (*pcVar1 != '\0') {
            FUN_1004f590(param_1);
          }
          if (*pcVar1 != '\0') {
            uVar5 = *(uint *)(param_1 + 0x168);
            if (uVar5 == 0) {
              uVar5 = 0x3c;
            }
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              uVar16 = SoftwareBreakpoint(0xf004,0x10043ba8);
              (*(code *)uVar16)();
            }
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = 1000 / uVar5;
            }
            (*(code *)PTR_FUN_100ba144)(uVar8);
          }
          uVar20 = 0x887601c2;
          if (*pcVar1 == '\0') {
            uVar20 = 0x887601ae;
            bVar17 = false;
            iVar22 = param_1;
            do {
              if (bVar17) goto LAB_10043f48;
              piVar2 = (int *)(iVar22 + 4);
              iVar22 = *(int *)(iVar22 + 0x110);
              iVar6 = *(int *)(*piVar2 + 0xb0);
              bVar17 = iVar6 != 0;
            } while (iVar22 != 0);
            if (iVar6 == 0) {
              FUN_100a9d50(auStack_8c);
              pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
              uVar20 = 0;
              iVar22 = param_1;
              if (uVar23 != 0) {
                do {
                  FUN_1004c620(iVar22);
                  puVar21 = (undefined4 *)(*(int *)(iVar22 + 4) + 0x70);
                  uVar19 = (*pcVar10)();
                  (*extraout_w11)(uVar19,*extraout_w8,*puVar21,1);
                  piVar2 = (int *)(iVar22 + 0x110);
                  iVar22 = *piVar2;
                } while (*piVar2 != 0);
                if (uVar23 != 0) {
                  local_ac = (int *)(param_1 + 0x110);
                  local_90 = 0;
                  local_a8 = (int *)(param_1 + 4);
                  uVar5 = 0;
                  local_98 = uVar23;
                  local_94 = uVar24;
                  do {
                    iVar6 = *local_a8;
                    uStack_68 = *(undefined8 *)(iVar6 + 0x88);
                    local_70 = *(undefined8 *)(iVar6 + 0x80);
                    uStack_58 = *(undefined8 *)(iVar6 + 0x98);
                    uStack_60 = *(undefined8 *)(iVar6 + 0x90);
                    uStack_48 = *(undefined8 *)(iVar6 + 0xa8);
                    local_50 = *(undefined8 *)(iVar6 + 0xa0);
                    uVar23 = *(uint *)(iVar6 + 200);
                    uVar11 = *(undefined8 *)(iVar6 + 0x30);
                    uVar12 = *(undefined4 *)(iVar6 + 0xc4);
                    uVar13 = *(undefined4 *)(iVar6 + 0x50);
                    uVar14 = *(undefined8 *)(iVar6 + 0x20);
                    uVar15 = *(undefined8 *)(iVar6 + 0x28);
                    uVar19 = local_a4;
                    uVar9 = local_a0;
                    uVar8 = local_9c;
                    uVar24 = local_94;
                    uVar20 = local_90;
                    uVar16 = local_88;
                    uVar25 = local_80;
                    uVar26 = uStack_78;
                    for (iVar22 = *local_ac; local_9c = uVar5, uStack_78 = uVar15, local_80 = uVar14
                        , local_a4 = uVar13, local_a0 = uVar12, local_88 = uVar11, local_94 = uVar24
                        , local_90 = uVar20, iVar22 != 0; iVar22 = *(int *)(iVar22 + 0x110)) {
                      piVar2 = (int *)(iVar22 + 4);
                      piVar3 = (int *)(iVar22 + 0x10c);
                      *(undefined4 *)(*(int *)(*piVar3 + 4) + 0x50) =
                           *(undefined4 *)(*piVar2 + 0x50);
                      puVar4 = (uint *)(*(int *)(*piVar3 + 4) + 200);
                      *puVar4 = *puVar4 | 4;
                      iVar6 = *piVar2;
                      uVar16 = *(undefined8 *)(iVar6 + 0x20);
                      iVar7 = *(int *)(*piVar3 + 4);
                      *(undefined8 *)(iVar7 + 0x28) = *(undefined8 *)(iVar6 + 0x28);
                      *(undefined8 *)(iVar7 + 0x20) = uVar16;
                      *(undefined8 *)(iVar7 + 0x30) = *(undefined8 *)(iVar6 + 0x30);
                      iVar6 = *piVar2;
                      uVar26 = *(undefined8 *)(iVar6 + 0x80);
                      uVar25 = *(undefined8 *)(iVar6 + 0x98);
                      uVar16 = *(undefined8 *)(iVar6 + 0x90);
                      iVar7 = *(int *)(*piVar3 + 4);
                      *(undefined8 *)(iVar7 + 0x88) = *(undefined8 *)(iVar6 + 0x88);
                      *(undefined8 *)(iVar7 + 0x80) = uVar26;
                      *(undefined8 *)(iVar7 + 0x98) = uVar25;
                      *(undefined8 *)(iVar7 + 0x90) = uVar16;
                      uVar16 = *(undefined8 *)(iVar6 + 0xa0);
                      *(undefined8 *)(iVar7 + 0xa8) = *(undefined8 *)(iVar6 + 0xa8);
                      *(undefined8 *)(iVar7 + 0xa0) = uVar16;
                      *(undefined4 *)(*(int *)(*piVar3 + 4) + 0xc4) =
                           *(undefined4 *)(*piVar2 + 0xc4);
                      puVar4 = (uint *)(*(int *)(*piVar3 + 4) + 200);
                      uVar24 = *puVar4;
                      *puVar4 = uVar24 & 0xfffffffc |
                                uVar24 & 1 | (*(uint *)(*piVar2 + 200) >> 1 & 1) << 1;
                      if (DAT_100c291c != 0) {
                        puVar21 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
                        uVar20 = (*pcVar10)();
                        (*extraout_w11_00)(uVar20,*puVar21,*extraout_w8_00);
                      }
                      if (*(int *)(iVar22 + 0x110) == 0) {
                        *(undefined4 *)(*piVar2 + 0x50) = local_a4;
                        *(uint *)(*piVar2 + 200) = *(uint *)(*piVar2 + 200) | 4;
                        iVar6 = *piVar2;
                        *(undefined8 *)(iVar6 + 0x28) = uStack_78;
                        *(undefined8 *)(iVar6 + 0x20) = local_80;
                        *(undefined8 *)(iVar6 + 0x30) = local_88;
                        iVar6 = *piVar2;
                        *(undefined8 *)(iVar6 + 0x88) = uStack_68;
                        *(undefined8 *)(iVar6 + 0x80) = local_70;
                        *(undefined8 *)(iVar6 + 0x98) = uStack_58;
                        *(undefined8 *)(iVar6 + 0x90) = uStack_60;
                        *(undefined8 *)(iVar6 + 0xa8) = uStack_48;
                        *(undefined8 *)(iVar6 + 0xa0) = local_50;
                        *(undefined4 *)(*piVar2 + 0xc4) = local_a0;
                        uVar24 = *(uint *)(*piVar2 + 200);
                        *(uint *)(*piVar2 + 200) = (uVar24 ^ (uVar23 >> 1 & 0xff) << 1) & 2 ^ uVar24
                        ;
                        if (DAT_100c291c != 0) {
                          puVar21 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
                          uVar20 = (*pcVar10)();
                          (*extraout_w11_01)(uVar20,*puVar21,iVar22);
                        }
                      }
                      uVar11 = local_88;
                      uVar12 = local_a0;
                      uVar13 = local_a4;
                      uVar14 = local_80;
                      uVar15 = uStack_78;
                      uVar5 = local_9c;
                      uVar19 = local_a4;
                      uVar9 = local_a0;
                      uVar8 = local_9c;
                      uVar24 = local_94;
                      uVar20 = local_90;
                      uVar16 = local_88;
                      uVar25 = local_80;
                      uVar26 = uStack_78;
                    }
                    uVar5 = local_9c + 1;
                    local_a4 = uVar19;
                    local_a0 = uVar9;
                    local_9c = uVar8;
                    local_88 = uVar16;
                    local_80 = uVar25;
                    uStack_78 = uVar26;
                  } while (uVar5 < local_98);
                }
                if ((*(uint *)(param_1 + 0x1b8) >> 0xf & 1) != 0) {
                  cVar18 = FUN_1004f930(param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x6c),
                                        *(undefined4 *)(*(int *)(param_1 + 4) + 0x70),uVar24);
                  uVar20 = 0x80004005;
                  if (cVar18 != '\0') {
                    uVar20 = 0;
                  }
                }
              }
              FUN_100a9ca0(auStack_8c);
            }
          }
        }
      }
    }
  }
LAB_10043f48:
  FUN_10037900(auStack_b0);
  return uVar20;
}


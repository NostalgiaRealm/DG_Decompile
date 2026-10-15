/*
 * FUN_18000829c at 18000829c
 * undefined8 __fastcall FUN_18000829c(longlong param_1)
 * Address ranges: 18000829c-180008622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000829c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined7 extraout_var_03;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 local_res10;
  char *pcVar10;
  
  cVar5 = FUN_1800088f0(param_1);
  pcVar10 = (char *)CONCAT71(extraout_var,cVar5);
  bVar14 = 0;
  if (cVar5 != '\0') {
    bVar6 = FUN_180007c80(param_1);
    iVar8 = *(int *)(param_1 + 0x68);
    pcVar10 = (char *)0x0;
    bVar14 = 0;
    if (iVar8 == 5) {
      bVar14 = bVar6;
    }
    if (bVar14 != 0) {
      pcVar10 = (char *)0x0;
      local_res10 = 0;
      do {
        bVar6 = (byte)pcVar10 | *(byte *)(param_1 + 0x50);
        pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),bVar6);
        if (bVar6 != 0) break;
        if (iVar8 == 0) {
          bVar6 = FUN_180007c80(param_1);
          pcVar10 = (char *)CONCAT71(extraout_var_02,bVar6);
          uVar7 = *(uint *)(param_1 + 0x68);
          if ((6 < uVar7) || (pcVar10 = (char *)0x0, (0x5bU >> (uVar7 & 0x1f) & 1) == 0))
          goto LAB_180008334;
          bVar14 = bVar6;
          if (bVar6 == 0) goto LAB_180008337;
          if (uVar7 == 0) {
            bVar14 = FUN_180008b54(param_1,0x1000,*(uint *)(param_1 + 100));
            bVar6 = bVar14 & bVar6;
            goto LAB_180008422;
          }
          if (uVar7 == 1) {
            bVar14 = FUN_180008b54(param_1,0x1000,*(uint *)(param_1 + 100));
            bVar6 = bVar6 & bVar14;
            goto LAB_180008458;
          }
          if (uVar7 == 6) {
            uVar7 = *(uint *)(param_1 + 100);
            iVar8 = FUN_180008c10(param_1,(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1000),
                                  uVar7);
            bVar18 = iVar8 != -1;
            if (bVar18) {
              uVar13 = (ulonglong)*(uint *)(param_1 + 0x84);
              uVar17 = 0;
              lVar2 = *(longlong *)
                       (*(longlong *)(param_1 + 0x90) + 8 +
                       (ulonglong)*(uint *)(param_1 + 0x80) * 0x18);
              iVar9 = *(int *)(lVar2 + 0x20 + uVar13 * 0x28);
              bVar19 = iVar9 == 0;
              if (iVar9 != 0) {
                do {
                  iVar9 = FUN_18005d788((byte *)((ulonglong)
                                                 *(uint *)(*(longlong *)
                                                            (lVar2 + 0x18 + uVar13 * 0x28) +
                                                          uVar17 * 8) +
                                                *(longlong *)(param_1 + 0x70)),
                                        (byte *)((longlong)iVar8 + *(longlong *)(param_1 + 0x70)));
                  if (iVar9 == 0) {
                    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - uVar7);
                    break;
                  }
                  uVar16 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar16;
                } while (uVar16 < *(uint *)(lVar2 + 0x20 + uVar13 * 0x28));
                bVar19 = (int)uVar17 == *(int *)(lVar2 + 0x20 + uVar13 * 0x28);
              }
              if (bVar19) {
                iVar9 = *(int *)(lVar2 + 0x24 + uVar13 * 0x28);
                if (*(int *)(lVar2 + 0x20 + uVar13 * 0x28) == iVar9) {
                  uVar15 = 0x10;
                  if (iVar9 != 0) {
                    uVar15 = (ulonglong)(uint)(iVar9 * 2);
                  }
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar15;
                  uVar11 = SUB168(ZEXT816(8) * auVar4,0);
                  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
                    uVar11 = 0xffffffffffffffff;
                  }
                  puVar12 = (undefined8 *)thunk_FUN_18005d6fc(uVar11);
                  if (puVar12 == (undefined8 *)0x0) {
                    bVar18 = false;
                    goto LAB_180008587;
                  }
                  FUN_18005ed10(puVar12,*(undefined8 **)(lVar2 + 0x18 + uVar13 * 0x28),
                                (ulonglong)*(uint *)(lVar2 + 0x24 + uVar13 * 0x28) << 3);
                  FUN_18005d720(*(LPVOID *)(lVar2 + 0x18 + uVar13 * 0x28));
                  *(undefined8 **)(lVar2 + 0x18 + uVar13 * 0x28) = puVar12;
                  *(int *)(lVar2 + 0x24 + uVar13 * 0x28) = (int)uVar15;
                }
                uVar15 = (ulonglong)*(uint *)(lVar2 + 0x20 + uVar13 * 0x28);
                bVar18 = true;
                lVar3 = *(longlong *)(lVar2 + 0x18 + uVar13 * 0x28);
                *(int *)(lVar3 + uVar15 * 8) = iVar8;
                *(undefined4 *)(lVar3 + 4 + uVar15 * 8) = 0xffffffff;
                piVar1 = (int *)(lVar2 + 0x20 + uVar13 * 0x28);
                *piVar1 = *piVar1 + 1;
              }
LAB_180008587:
              *(int *)(param_1 + 0x88) = (int)uVar17;
            }
            iVar8 = FUN_180008c10(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60)
                                 );
            if (iVar8 != -1) {
              *(int *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x90) + 8 +
                          (ulonglong)*(uint *)(param_1 + 0x80) * 0x18) + 0x18 +
                        (ulonglong)*(uint *)(param_1 + 0x84) * 0x28) + 4 +
                      (ulonglong)*(uint *)(param_1 + 0x88) * 8) = iVar8;
            }
            pcVar10 = (char *)0x0;
            bVar14 = 0;
            if (iVar8 != -1) {
              bVar14 = bVar18 & bVar6;
            }
            goto LAB_180008337;
          }
          if ((uVar7 != 3) && (uVar7 != 4)) goto LAB_180008337;
          uVar7 = *(uint *)(param_1 + 100);
          uVar16 = 0x1000;
LAB_180008608:
          bVar14 = FUN_180008b54(param_1,uVar16,uVar7);
          pcVar10 = (char *)CONCAT71(extraout_var_03,bVar14);
          bVar14 = bVar6 & bVar14;
        }
        else if (iVar8 == 1) {
LAB_180008318:
          bVar6 = FUN_180007c80(param_1);
          uVar7 = *(uint *)(param_1 + 0x68);
          pcVar10 = (char *)(ulonglong)uVar7;
          if (((uVar7 == 2) || ((int)uVar7 < 0)) || (4 < (int)uVar7)) {
LAB_180008334:
            bVar14 = 0;
          }
          else {
LAB_1800083af:
            uVar7 = (uint)pcVar10;
            if (uVar7 != 0) goto LAB_1800083d3;
LAB_180008422:
            FUN_18005ed10(*(undefined8 **)(param_1 + 0x58) + 0x200,*(undefined8 **)(param_1 + 0x58),
                          (ulonglong)*(uint *)(param_1 + 0x60));
            pcVar10 = (char *)(ulonglong)*(uint *)(param_1 + 0x60);
            *(uint *)(param_1 + 100) = *(uint *)(param_1 + 0x60);
            bVar14 = bVar6;
          }
        }
        else {
          if (iVar8 != 4) {
            if (iVar8 != 5) {
              if (iVar8 != 6) goto LAB_180008337;
              goto LAB_180008318;
            }
            bVar6 = FUN_180007c80(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            pcVar10 = (char *)(ulonglong)uVar7;
            if (((uVar7 & 0xfffffffc) != 0) || (uVar7 == 2)) goto LAB_180008334;
            goto LAB_1800083af;
          }
          bVar6 = FUN_180007c80(param_1);
          pcVar10 = (char *)CONCAT71(extraout_var_01,bVar6);
          uVar7 = *(uint *)(param_1 + 0x68);
          if (1 < uVar7) goto LAB_180008334;
          if (uVar7 == 0) goto LAB_180008422;
LAB_1800083d3:
          bVar14 = bVar6;
          if (uVar7 == 1) {
LAB_180008458:
            uVar7 = *(uint *)(param_1 + 0x60);
            uVar16 = 0;
            goto LAB_180008608;
          }
        }
LAB_180008337:
        iVar8 = *(int *)(param_1 + 0x68);
        if ((*(char *)(param_1 + 0x50) == '\0') &&
           ((pcVar10 = *(char **)(param_1 + 0x40), *pcVar10 == '\r' ||
            (local_res10 = 0, *pcVar10 == '\n')))) {
          local_res10 = 1;
        }
        pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),local_res10);
      } while (bVar14 != 0);
      if ((iVar8 == 0) && (*(uint *)(param_1 + 100) != 0)) {
        bVar6 = FUN_180008b54(param_1,0x1000,*(uint *)(param_1 + 100));
        pcVar10 = (char *)CONCAT71(extraout_var_00,bVar6);
        bVar14 = bVar14 & bVar6;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)pcVar10 >> 8),bVar14);
}


/*
 * FUN_100fb648 at 100fb648
 * undefined FUN_100fb648(void)
 * Address ranges: 100fb648-100fba0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_100fb648(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  char *pcVar13;
  code *extraout_w11;
  int iVar14;
  char cVar15;
  undefined8 local_58;
  undefined8 uStack_50;
  
  piVar1 = (int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x68) = param_3;
  iVar11 = *piVar1;
  if (iVar11 != 0) {
    piVar6 = (int *)(iVar11 + -4);
    iVar14 = *piVar6;
    if (iVar14 != 0) {
      iVar11 = iVar11 + iVar14 * 0x10 + 4;
      do {
        iVar11 = iVar11 + -0x10;
        iVar14 = iVar14 + -1;
        FUN_100fd250(iVar11);
      } while (iVar14 != 0);
    }
    FUN_101322e0(piVar6,*piVar6 * 0x10 + 4);
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  bVar9 = 0;
  uVar12 = FUN_100fd0d8(piVar1,&local_58);
  if ((uVar12 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar11 = (*extraout_w11)(param_2,0,0,0);
    if (iVar11 == 0) {
      iVar11 = FUN_101322b0(0x1000);
      piVar1 = (int *)(param_1 + 0x1c);
      *piVar1 = iVar11;
      if (iVar11 != 0) {
        iVar11 = FUN_101322b0(0x2000);
        piVar6 = (int *)(param_1 + 0x34);
        *piVar6 = iVar11;
        if (iVar11 != 0) {
          iVar11 = FUN_101322b0(0x80);
          *(int *)(param_1 + 0x44) = iVar11;
          if (iVar11 != 0) {
            *(undefined8 *)(param_1 + 0x48) = 0x80;
            piVar2 = (int *)(param_1 + 0x30);
            pbVar3 = (byte *)(param_1 + 0x2c);
            *piVar2 = 1;
            *pbVar3 = 0;
            uVar12 = FUN_100fba18(param_1);
            if ((uVar12 & 1) != 0) {
              bVar9 = 1;
              do {
                if (*pbVar3 != 0) break;
                piVar4 = (int *)(param_1 + 0x24);
                pcVar13 = (char *)*piVar4;
                if (pcVar13 != (char *)0x0) {
                  cVar15 = '\0';
                  do {
                    cVar5 = *pcVar13;
                    if (cVar5 != '\r' && cVar5 != '\n') {
                      bVar9 = 1;
                      goto LAB_100fb854;
                    }
                    if (cVar15 == '\r' && cVar5 == '\n') {
                      *piVar2 = *piVar2 + -1;
                    }
                    cVar15 = *pcVar13;
                    *piVar4 = (int)(pcVar13 + 1);
                    if ((pcVar13 + 1 == *(char **)(param_1 + 0x28)) &&
                       (uVar12 = FUN_100fba18(param_1), (uVar12 & 1) == 0)) {
                      *piVar4 = 0;
                    }
                    pcVar13 = (char *)*piVar4;
                    *piVar2 = *piVar2 + 1;
                  } while (pcVar13 != (char *)0x0);
                }
                bVar9 = *pbVar3;
                if (bVar9 != 0) {
LAB_100fb854:
                  bVar7 = false;
                  do {
                    if ((*pbVar3 != 0) || (bVar7)) break;
                    bVar9 = FUN_100fbc90(param_1);
                    if (bVar9 != 0) {
                      switch(*(int *)(param_1 + 0x40)) {
                      case 0:
                        iVar11 = *(int *)(param_1 + 0x38);
                        if (iVar11 != 0) {
                          FUN_101325a0(*piVar6 + 0x1000,*piVar6,iVar11);
                          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
                          bVar9 = FUN_100fc188(param_1);
                        }
                        break;
                      case 2:
                        bVar10 = FUN_100fc930(param_1);
                        bVar9 = bVar10 & bVar9;
                        bVar8 = *(char *)*piVar4 == '\r' || *(char *)*piVar4 == '\n';
                        if (bVar9 != 0) {
                          while( true ) {
                            if ((*pbVar3 != 0) || (bVar8)) goto switchD_100fb898_caseD_1;
                            bVar9 = FUN_100fbc90(param_1);
                            if (bVar9 == 0) break;
                            iVar11 = *(int *)(param_1 + 0x40);
                            if (iVar11 == 2) {
                              bVar10 = FUN_100fc930(param_1);
                              bVar9 = bVar10 & bVar9;
LAB_100fb970:
                              if (bVar9 == 0) goto switchD_100fb898_caseD_1;
                            }
                            else if (iVar11 != 3) {
                              if (iVar11 != 0) {
                                bVar9 = 0;
                                goto switchD_100fb898_caseD_1;
                              }
                              if (*(int *)(param_1 + 0x38) != 0) {
                                bVar9 = FUN_100fc188(param_1);
                                goto LAB_100fb970;
                              }
                            }
                            if (*pbVar3 == 0) {
                              bVar8 = *(char *)*piVar4 == '\r' || *(char *)*piVar4 == '\n';
                            }
                          }
                          bVar9 = 0;
                        }
                      }
switchD_100fb898_caseD_1:
                      if (*pbVar3 == 0) {
                        bVar7 = *(char *)*piVar4 == '\r' || *(char *)*piVar4 == '\n';
                      }
                    }
                  } while (bVar9 != 0);
                }
              } while (bVar9 != 0);
            }
          }
          FUN_101322d0(*piVar6);
          *piVar6 = 0;
        }
        FUN_101322d0(*piVar1);
        *piVar1 = 0;
      }
    }
  }
  FUN_100fd250((int)&local_58 + 4);
  return bVar9;
}


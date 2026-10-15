/*
 * FUN_1005e880 at 1005e880
 * undefined FUN_1005e880(void)
 * Address ranges: 1005e880-1005f3cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_1005e880(int param_1,int param_2,char param_3)

{
  code *pcVar1;
  ushort *puVar2;
  ushort *puVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  byte bVar16;
  byte *pbVar17;
  uint uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  char local_80 [4];
  byte *local_7c;
  int local_78;
  code *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  byte *local_68;
  byte *local_64;
  uint *local_60;
  code *local_5c;
  code *local_58;
  code *local_54;
  undefined1 auStack_50 [16];
  
  iVar22 = 3;
  if (param_3 == '\0') {
    iVar22 = 0;
  }
  iVar7 = *(int *)(param_1 + 0x210);
  *(int *)(param_1 + 0x210) = iVar22;
  *(byte *)(param_1 + 0x932) = iVar22 != iVar7 | *(byte *)(param_1 + 0x932);
  pbVar17 = (byte *)(*(int *)(param_2 + 0x68) + *(int *)(param_2 + 0x58));
  local_7c = pbVar17;
  FUN_100969a0(auStack_50);
  local_6c = 0;
  local_60 = (uint *)(param_2 + 0x6c);
  local_80[0] = '\x01';
  local_5c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_78 = param_1;
  local_64 = pbVar17;
  do {
    iVar22 = local_78;
    if (*local_60 <= (uint)((int)local_7c - (int)local_64)) break;
    uVar15 = FUN_1005f750(local_78,&local_7c,0,local_80);
    iVar7 = local_78;
    if ((uVar15 & 1) == 0) {
      bVar16 = *local_7c;
      local_68 = local_7c;
      if ((bVar16 == 0 || 0xc < bVar16) && bVar16 != 0xd) {
switchD_1005e984_caseD_4:
        local_6c = 0x80070057;
        goto switchD_1005e984_caseD_b;
      }
      puVar19 = (uint *)(local_7c + 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar16) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
        if (*(int *)(iVar22 + 0x1568) != 1) {
          FUN_10060200(iVar22,0);
          *(int *)(iVar22 + 0x1568) = 1;
          *(undefined4 *)(iVar22 + 0x1574) = 1;
        }
        iVar22 = local_78;
        uVar20 = 0;
        puVar3 = (ushort *)(local_68 + 2);
        if (*puVar3 != 0) {
          piVar4 = (int *)(local_78 + 0x156c);
          do {
            if (0xffff < (uint)(ushort)*puVar19 + *piVar4) {
              FUN_10060200(iVar22,1);
            }
            uVar18 = 0;
            if ((short)*puVar19 != 0) {
              do {
                *(ushort *)(*(int *)(iVar22 + 0x158c) + *piVar4 * 2) =
                     *(ushort *)((int)puVar19 + 2) + (short)uVar18;
                uVar11 = *(ushort *)((int)puVar19 + 2) + uVar18;
                if (*(uint *)(iVar22 + 0x1580) < uVar11) {
                  *(uint *)(iVar22 + 0x1580) = uVar11;
                }
                puVar19 = puVar19 + 1;
                uVar18 = uVar18 + 1;
                *piVar4 = *piVar4 + 1;
                *(int *)(iVar22 + 0x1570) = *(int *)(iVar22 + 0x1570) + 1;
              } while (uVar18 < (ushort)*puVar19);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *puVar3);
        }
        break;
      case 2:
        piVar4 = (int *)(iVar22 + 0x156c);
        puVar3 = (ushort *)(local_7c + 2);
        uVar20 = *piVar4 + (uint)*puVar3 * 2;
        if (*(int *)(iVar22 + 0x1568) != 2 || 0xffff < uVar20) {
          FUN_10060200(iVar22,0xffff < uVar20);
          *(int *)(iVar22 + 0x1568) = 2;
          *(undefined4 *)(iVar22 + 0x1574) = 2;
        }
        uVar20 = 0;
        if (*puVar3 != 0) {
          puVar5 = (uint *)(local_78 + 0x1580);
          do {
            *(short *)(*(int *)(local_78 + 0x158c) + *piVar4 * 2) = (short)*puVar19;
            if (*puVar5 < (uint)(ushort)*puVar19) {
              *puVar5 = (uint)(ushort)*puVar19;
            }
            *(ushort *)(*(int *)(local_78 + 0x158c) + (*piVar4 + 1) * 2) =
                 *(ushort *)((int)puVar19 + 2);
            uVar18 = (uint)*(ushort *)((int)puVar19 + 2);
            if (*puVar5 < uVar18) {
              *puVar5 = uVar18;
            }
            uVar20 = uVar20 + 1;
            puVar19 = puVar19 + 1;
            *piVar4 = *piVar4 + 2;
            *(int *)(local_78 + 0x1570) = *(int *)(local_78 + 0x1570) + 1;
          } while (uVar20 < *puVar3);
        }
        break;
      case 3:
        piVar4 = (int *)(iVar22 + 0x156c);
        puVar3 = (ushort *)(local_7c + 2);
        uVar10 = *puVar3;
        uVar20 = *piVar4 + (uint)uVar10 * *(int *)(iVar22 + 0x157c);
        if (*(int *)(iVar22 + 0x1568) != *(int *)(iVar22 + 0x1578) || 0xffff < uVar20) {
          FUN_10060200(iVar22,0xffff < uVar20);
          *(int *)(iVar22 + 0x1568) = *(int *)(iVar22 + 0x1578);
          *(int *)(iVar22 + 0x1574) = *(int *)(iVar22 + 0x157c);
          uVar10 = *puVar3;
        }
        pcVar1 = (code *)(local_78 + 0x2b0);
        if (*(uint *)pcVar1 == 2) {
          uVar20 = 0;
          if (uVar10 != 0) {
            do {
              puVar2 = (ushort *)((int)puVar19 + 6);
              if ((*puVar2 & 0x100) != 0) {
                *(short *)(*(int *)(local_78 + 0x158c) + *piVar4 * 2) = (short)*puVar19;
                puVar5 = (uint *)(local_78 + 0x1580);
                if (*puVar5 < (uint)(ushort)*puVar19) {
                  *puVar5 = (uint)(ushort)*puVar19;
                }
                *(ushort *)(*(int *)(local_78 + 0x158c) + (*piVar4 + 1) * 2) =
                     *(ushort *)((int)puVar19 + 2);
                uVar18 = (uint)*(ushort *)((int)puVar19 + 2);
                if (*puVar5 < uVar18) {
                  *puVar5 = uVar18;
                }
                *piVar4 = *piVar4 + 2;
                *(int *)(local_78 + 0x1570) = *(int *)(local_78 + 0x1570) + 1;
              }
              piVar12 = (int *)(local_78 + 0x158c);
              puVar5 = (uint *)(local_78 + 0x1580);
              piVar6 = (int *)(local_78 + 0x1570);
              if ((*puVar2 & 0x200) != 0) {
                *(ushort *)(*piVar12 + *(int *)(local_78 + 0x156c) * 2) =
                     *(ushort *)((int)puVar19 + 2);
                uVar18 = (uint)*(ushort *)((int)puVar19 + 2);
                if (*puVar5 < uVar18) {
                  *puVar5 = uVar18;
                }
                *(short *)(*piVar12 + (*piVar4 + 1) * 2) = (short)puVar19[1];
                uVar18 = (uint)(ushort)puVar19[1];
                if (*puVar5 < uVar18) {
                  *puVar5 = uVar18;
                }
                *piVar4 = *piVar4 + 2;
                *piVar6 = *piVar6 + 1;
              }
              if ((*puVar2 & 0x400) != 0) {
                *(short *)(*piVar12 + *piVar4 * 2) = (short)puVar19[1];
                uVar18 = (uint)(ushort)puVar19[1];
                if (*puVar5 < uVar18) {
                  *puVar5 = uVar18;
                }
                *(short *)(*piVar12 + (*piVar4 + 1) * 2) = (short)*puVar19;
                if (*puVar5 < (uint)(ushort)*puVar19) {
                  *puVar5 = (uint)(ushort)*puVar19;
                }
                *piVar4 = *piVar4 + 2;
                *piVar6 = *piVar6 + 1;
              }
              uVar20 = uVar20 + 1;
              puVar19 = puVar19 + 2;
            } while (uVar20 < *puVar3);
          }
        }
        else {
          uVar20 = 0;
          uVar18 = 0;
          if (uVar10 != 0) {
            piVar6 = (int *)(local_78 + 0x158c);
            puVar5 = (uint *)(local_78 + 0x1580);
            do {
              *(short *)(*piVar6 + *piVar4 * 2) = (short)*puVar19;
              if (*puVar5 < (uint)(ushort)*puVar19) {
                *puVar5 = (uint)(ushort)*puVar19;
              }
              *(ushort *)(*piVar6 + (*piVar4 + 1) * 2) = *(ushort *)((int)puVar19 + 2);
              uVar18 = (uint)*(ushort *)((int)puVar19 + 2);
              if (*puVar5 < uVar18) {
                *puVar5 = uVar18;
              }
              *(short *)(*piVar6 + *piVar4 * 2 + 4) = (short)puVar19[1];
              uVar18 = (uint)(ushort)puVar19[1];
              if (*puVar5 < uVar18) {
                *puVar5 = uVar18;
              }
              uVar20 = uVar20 + 1;
              puVar19 = puVar19 + 2;
              *piVar4 = *piVar4 + 3;
              uVar18 = (uint)*puVar3;
              local_74 = pcVar1;
            } while (uVar20 < uVar18);
          }
          if (*(uint *)pcVar1 == 1) {
            uVar18 = uVar18 * 3;
          }
          *(int *)(local_78 + 0x1570) = uVar18 + *(int *)(local_78 + 0x1570);
        }
        break;
      default:
        goto switchD_1005e984_caseD_4;
      case 7:
        puVar3 = (ushort *)(local_7c + 2);
        uVar20 = 0;
        if (*puVar3 != 0) {
          do {
            uVar18 = *puVar19;
            iVar21 = 0x100;
            if (uVar18 < 0x101) {
              iVar21 = 0;
            }
            iVar21 = uVar18 - iVar21;
            if (7 < iVar21 - 1U) goto switchD_1005e984_caseD_4;
            if (*(char *)(*(int *)(iVar22 + 0xa5c) + iVar21 * 8) != '\0') {
              uVar11 = iVar21 + 0x100;
              iVar21 = iVar7 + ((uVar11 >> 5) + 0x550) * 4;
              if (uVar18 < 0x101) {
                if ((*(byte *)((uVar11 >> 3 & 3) + iVar21) >> (ulonglong)(uVar11 & 7) & 1) == 0) {
                  FUN_10060200(iVar7,0);
                  uVar11 = puVar19[1];
                  uVar18 = uVar11;
                  if (uVar11 != 0) {
                    uVar18 = 3;
                  }
                  if (*puVar19 == 4) {
                    uVar11 = uVar18;
                  }
                  FUN_10052980(iVar7,*puVar19,uVar11);
                }
              }
              else {
                if (puVar19[1] == 0) {
                  pbVar17 = (byte *)((uVar11 >> 3 & 3) + iVar21);
                  bVar16 = *pbVar17 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
                }
                else {
                  pbVar17 = (byte *)((uVar11 >> 3 & 3) + iVar21);
                  bVar16 = *pbVar17 | (byte)(1 << (ulonglong)(uVar11 & 7));
                }
                *pbVar17 = bVar16;
              }
            }
            uVar20 = uVar20 + 1;
            puVar19 = puVar19 + 2;
          } while (uVar20 < *puVar3);
        }
        break;
      case 8:
        puVar3 = (ushort *)(local_7c + 2);
        uVar20 = 0;
        if (*puVar3 != 0) {
          local_70 = (undefined4 *)(iVar22 + 0x1578);
          local_74 = (code *)(iVar22 + 0x2b0);
          do {
            uVar18 = *puVar19;
            iVar21 = 0x100;
            if (uVar18 < 0x101) {
              iVar21 = 0;
            }
            uVar11 = uVar18 - iVar21;
            if (0x97 < uVar11 - 1) goto switchD_1005e984_caseD_4;
            if (*(char *)(*(int *)(iVar22 + 4) + uVar11 * 8) != '\0') {
              iVar21 = iVar7 + ((uVar11 >> 5) + 0x550) * 4;
              if (uVar18 < 0x101) {
                if ((*(byte *)((uVar11 >> 3 & 3) + iVar21) >> (ulonglong)(uVar11 & 7) & 1) == 0) {
                  FUN_10060200(iVar7,0);
                  FUN_100520b0(iVar7,*puVar19,puVar19[1]);
                  if (*puVar19 == 8) {
                    uVar18 = 3;
                    if (*(uint *)local_74 < 4) {
                      uVar18 = *(uint *)local_74;
                    }
                    *local_70 = *(undefined4 *)(&DAT_1009e720 + uVar18 * 4);
                    *(uint *)(iVar22 + 0x157c) = (uint)*(byte *)(uVar18 + 0x1009e71c);
                  }
                }
              }
              else {
                if (puVar19[1] == 0) {
                  pbVar17 = (byte *)((uVar11 >> 3 & 3) + iVar21);
                  bVar16 = *pbVar17 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
                }
                else {
                  pbVar17 = (byte *)((uVar11 >> 3 & 3) + iVar21);
                  bVar16 = *pbVar17 | (byte)(1 << (ulonglong)(uVar11 & 7));
                }
                *pbVar17 = bVar16;
              }
            }
            uVar20 = uVar20 + 1;
            puVar19 = puVar19 + 2;
          } while (uVar20 < *puVar3);
        }
        break;
      case 10:
        puVar3 = (ushort *)(local_7c + 2);
        uVar20 = 0;
        if (*puVar3 != 0) {
          local_74 = FUN_10095ff0;
          local_58 = local_5c;
          local_54 = local_5c;
          do {
            if (((undefined4 *)*puVar19 != (undefined4 *)0x0) &&
               (puVar14 = (undefined4 *)puVar19[1], puVar14 != (undefined4 *)0x0)) {
              local_70 = (undefined4 *)*puVar19;
              puVar13 = (undefined4 *)FUN_100596d0(iVar22 + 0x17b8,&local_70);
              local_70 = puVar14;
              puVar14 = (undefined4 *)FUN_100596d0(iVar22 + 0x17b8,&local_70);
              if ((puVar13 != (undefined4 *)0x0) && (puVar14 != (undefined4 *)0x0)) {
                FUN_10060200(iVar7,0);
                uVar8 = *puVar14;
                uVar9 = *puVar13;
                (*local_58)();
                (*extraout_w11)(uVar8);
                (*local_54)();
                (*extraout_w11_00)(uVar9,uVar8);
              }
            }
            uVar20 = uVar20 + 1;
            puVar19 = puVar19 + 2;
          } while (uVar20 < *puVar3);
        }
        break;
      case 0xb:
switchD_1005e984_caseD_b:
        local_80[0] = '\0';
        goto LAB_1005f124;
      case 0xd:
        break;
      }
LAB_1005f124:
      local_7c = local_7c + (uint)*(ushort *)(local_68 + 2) * (uint)local_68[1] + 4;
    }
  } while (local_80[0] != '\0');
  FUN_10096a50(auStack_50);
  return local_6c;
}


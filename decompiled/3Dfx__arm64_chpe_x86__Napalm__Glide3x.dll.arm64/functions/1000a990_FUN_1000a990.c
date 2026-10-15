/*
 * FUN_1000a990 at 1000a990
 * undefined FUN_1000a990(void)
 * Address ranges: 1000a990-1000ac3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000a990(int param_1,int param_2,byte param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int extraout_w1;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulonglong uVar24;
  ulonglong extraout_x10;
  code *extraout_w11;
  undefined8 uVar25;
  undefined8 extraout_x11;
  ulonglong uVar26;
  ulonglong extraout_x12;
  ulonglong uVar27;
  ulonglong extraout_x13;
  ulonglong uVar28;
  ulonglong extraout_x14;
  ulonglong uVar29;
  ulonglong extraout_x15;
  uint uVar30;
  uint local_100 [48];
  
  uVar30 = (uint)param_3;
  iVar7 = *(int *)(param_1 + 0xc) + param_2 * 0x9d;
  uVar2 = *(undefined4 *)(iVar7 + 0x289);
  uVar3 = *(uint *)(iVar7 + 0x285);
  uVar4 = *(uint *)(iVar7 + 0x281);
  iVar5 = *(int *)(iVar7 + 0x27d);
  uVar14 = FUN_10009a38(param_1,iVar5,uVar4,uVar3,uVar2);
  if ((uVar14 & 1) != 0) {
    uVar14 = (ulonglong)(0xb - uVar4);
    local_100[2] = 0;
    local_100[3] = 0;
    local_100[0] = 0;
    local_100[1] = 0;
    local_100[6] = 0;
    local_100[7] = 0;
    local_100[4] = 0;
    local_100[5] = 0;
    local_100[10] = 0;
    local_100[0xb] = 0;
    local_100[8] = 0;
    local_100[9] = 0;
    local_100[0xe] = 0;
    local_100[0xf] = 0;
    local_100[0xc] = 0;
    local_100[0xd] = 0;
    local_100[0x12] = 0;
    local_100[0x13] = 0;
    local_100[0x10] = 0;
    local_100[0x11] = 0;
    local_100[0x16] = 0;
    local_100[0x17] = 0;
    local_100[0x14] = 0;
    local_100[0x15] = 0;
    local_100[0x1a] = 0;
    local_100[0x1b] = 0;
    local_100[0x18] = 0;
    local_100[0x19] = 0;
    local_100[0x1e] = 0;
    local_100[0x1f] = 0;
    local_100[0x1c] = 0;
    local_100[0x1d] = 0;
    local_100[0x22] = 0;
    local_100[0x23] = 0;
    local_100[0x20] = 0;
    local_100[0x21] = 0;
    local_100[0x26] = 0;
    local_100[0x27] = 0;
    local_100[0x24] = 0;
    local_100[0x25] = 0;
    local_100[0x2a] = 0;
    local_100[0x2b] = 0;
    local_100[0x28] = 0;
    local_100[0x29] = 0;
    local_100[0x2e] = 0;
    local_100[0x2f] = 0;
    local_100[0x2c] = 0;
    local_100[0x2d] = 0;
    if (iVar5 <= (int)uVar4) {
      uVar29 = (ulonglong)*(byte *)(iVar7 + 0x28e);
      uVar27 = (ulonglong)*(byte *)(uVar3 + 0x1009fdc3);
      uVar24 = ZEXT48(&DAT_1009fdc8);
      uVar19 = (ulonglong)*(byte *)(iVar7 + 0x28d);
      uVar26 = (ulonglong)(iVar7 + 0x26d);
      iVar18 = 0;
      uVar20 = 0xffffffff;
      uVar28 = (ulonglong)(param_1 + 0xc);
      uVar25 = 0x4e8;
      uVar17 = uVar14;
      uVar15 = uVar4;
LAB_1000aa80:
      iVar16 = (int)uVar17;
      iVar12 = (int)uVar24;
      if ((int)uVar29 != 0) {
        if ((int)uVar4 < 9 || (int)uVar15 < 6) {
          if (-1 < (int)uVar15) goto code_r0x1000aad0;
switchD_1000aaa8_caseD_1:
          iVar21 = 0;
          goto LAB_1000aaf0;
        }
        bVar9 = SBORROW4(uVar15,10);
        bVar10 = (int)(uVar15 - 10) < 0;
        if (10 < (int)uVar15) {
code_r0x1000aad0:
          switch(uVar15) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
            goto switchD_1000aaa8_caseD_6;
          case 6:
            goto switchD_1000aaa8_caseD_9;
          case 7:
            goto switchD_1000aaa8_caseD_a;
          }
          goto switchD_1000aaa8_caseD_1;
        }
        pbVar11 = (byte *)(uVar15 - 6);
        pbVar23 = &BYTE_1000ac40;
        pbVar22 = &BYTE_1000ac40 + *(char *)(uVar15 + 0x1000ac3a) * 4;
        switch(uVar15) {
        case 0:
          goto switchD_1000aaa8_caseD_0;
        case 1:
          goto switchD_1000aaa8_caseD_1;
        case 2:
          goto switchD_1000aaa8_caseD_2;
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
          if (3 < uVar3) {
            uVar3 = uVar3 - 4;
          }
          iVar18 = (int)pbVar22 - uVar3;
          if (3 < uVar3) {
            iVar18 = 0;
          }
          *(int *)(iVar12 + iVar18 * 4 + 0x7b) = (int)uVar25;
          *(char *)(iVar12 + 0x9b) = (char)uVar4;
          *(int *)(iVar12 + 0x93) = param_1;
          *(int *)(iVar12 + 0x97) = iVar5;
          *(uint *)(iVar12 + 0x8f) = uVar30;
          *(byte **)(iVar12 + 0x8b) = (byte *)(iVar7 + 0x28d);
          FUN_1000a990(param_2,uVar2,1);
          piVar1 = (int *)(param_2 + 0x38);
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          DataMemoryBarrier(2,3);
          return;
        case 5:
          goto switchD_1000aaa8_caseD_5;
        default:
switchD_1000aaa8_caseD_6:
          iVar21 = 3;
          goto LAB_1000aaf0;
        case 9:
switchD_1000aaa8_caseD_9:
          iVar21 = 2;
          goto LAB_1000aaf0;
        case 10:
switchD_1000aaa8_caseD_a:
          iVar21 = 1;
          goto LAB_1000aaf0;
        }
      }
      iVar21 = 0;
LAB_1000aaf0:
      uVar6 = *(uint *)((int)uVar26 + iVar21 * 4);
      uVar30 = *(int *)(*(int *)uVar28 + param_2 * (int)uVar25 + 0x458) + uVar6;
      if (uVar6 == (uint)uVar20) {
        uVar30 = uVar30 + iVar18;
      }
      else {
        uVar20 = (ulonglong)uVar6;
        iVar18 = 0;
      }
      local_100[iVar16 * 4] = uVar30;
      pbVar11 = *(byte **)(iVar12 + uVar15 * 4);
      pbVar22 = (byte *)((uint)pbVar11 >> (ulonglong)((uint)uVar27 & 0x1f));
switchD_1000aaa8_caseD_2:
      if (pbVar22 == (byte *)0x0) {
        pbVar22 = (byte *)0x1;
      }
      bVar10 = (int)uVar3 < 0;
      bVar9 = false;
      pbVar23 = pbVar11;
      if (bVar10) {
        pbVar23 = pbVar22;
      }
switchD_1000aaa8_caseD_0:
      if (bVar10 != bVar9) {
        pbVar22 = pbVar11;
      }
      uVar30 = (uint)pbVar22 | (int)pbVar23 << 0x10;
      local_100[iVar16 * 4 + 1] = uVar30 >> 0x10;
      iVar12 = FUN_1000aed8(uVar2);
      pbVar23 = (byte *)(iVar12 * extraout_w1);
      local_100[iVar16 * 4 + 3] = (uint)pbVar23;
      pbVar22 = (byte *)((uint)pbVar22 & 0xffff);
      local_100[iVar16 * 4 + 2] = (uint)pbVar22;
      uVar24 = extraout_x10;
      uVar25 = extraout_x11;
      uVar26 = extraout_x12;
      uVar27 = extraout_x13;
      uVar28 = extraout_x14;
      uVar29 = extraout_x15;
      if ((int)uVar19 != 3) goto switchD_1000aaa8_caseD_5;
LAB_1000abb4:
      iVar12 = (int)pbVar23 * (int)pbVar22;
      goto LAB_1000abb8;
    }
LAB_1000abd8:
    if (param_3 != 0) {
      uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar13,param_2,uVar2,uVar14 & 0xffffffff);
    }
  }
  return;
switchD_1000aaa8_caseD_5:
  if ((uVar15 & 1) == (uint)((int)uVar19 != 1)) goto LAB_1000abb4;
  iVar12 = 0;
LAB_1000abb8:
  uVar15 = uVar15 - 1;
  iVar18 = iVar12 + iVar18;
  uVar17 = (ulonglong)(iVar16 + 1);
  if ((int)uVar15 < iVar5) goto LAB_1000abd8;
  goto LAB_1000aa80;
}


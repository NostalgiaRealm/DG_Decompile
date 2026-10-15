/*
 * FUN_1005f410 at 1005f410
 * undefined FUN_1005f410(void)
 * Address ranges: 1005f410-1005f70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_1005f410(int param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char local_70 [4];
  byte *local_6c;
  int local_68;
  undefined4 local_64;
  uint *local_60;
  byte *local_5c;
  undefined2 local_58 [2];
  int local_54;
  float local_50;
  
  puVar3 = (undefined8 *)(param_1 + 0x1660);
  FUN_10081dc0(*(undefined4 *)puVar3);
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0x1668) = 0;
  uVar12 = 0;
  puVar15 = (uint *)(param_2 + 0x6c);
  pbVar4 = (byte *)(*(int *)(param_2 + 0x68) + *(int *)(param_2 + 0x58));
  local_70[0] = '\x01';
  local_6c = pbVar4;
  do {
    if (*puVar15 <= (uint)((int)local_6c - (int)pbVar4)) {
      return uVar12;
    }
    uVar11 = FUN_1005f750(param_1,&local_6c,1,local_70);
    if ((uVar11 & 1) == 0) {
      bVar10 = *local_6c;
      pbVar13 = local_6c;
      if ((bVar10 == 0 || 0xc < bVar10) && bVar10 != 0xd) {
switchD_1005f4d4_caseD_4:
        uVar12 = 0x80070057;
        goto switchD_1005f4d4_caseD_b;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar10) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
        puVar1 = (ushort *)(local_6c + 2);
        puVar2 = (ushort *)(local_6c + 4);
        if (*puVar1 != 0) {
          local_5c = local_6c;
          piVar5 = (int *)(param_1 + 0x1588);
          uVar14 = 0;
          local_68 = param_1;
          local_64 = uVar12;
          local_60 = puVar15;
          do {
            iVar9 = *piVar5;
            pfVar6 = (float *)(iVar9 + (uint)*puVar2 * 0x20);
            pfVar7 = (float *)(iVar9 + (uint)puVar2[1] * 0x20);
            pfVar8 = (float *)(iVar9 + (uint)puVar2[2] * 0x20);
            fVar17 = *pfVar8;
            fVar22 = *pfVar6 - fVar17;
            fVar21 = *pfVar7 - fVar17;
            fVar17 = fVar17 - (float)*param_3;
            fVar18 = pfVar8[1];
            fVar20 = pfVar6[1] - fVar18;
            fVar19 = pfVar7[1] - fVar18;
            fVar18 = fVar18 - (float)param_3[1];
            if (ABS(fVar22) <= ABS(fVar20)) {
              if (1e-05 <= ABS(fVar20)) {
                fVar21 = fVar21 - fVar19 * (fVar22 / fVar20);
                if (1e-05 <= ABS(fVar21)) {
                  fVar16 = (fVar18 * (fVar22 / fVar20) - fVar17) / fVar21;
                  fVar22 = -(fVar19 * fVar16 + fVar18) / fVar20;
                  goto LAB_1005f61c;
                }
              }
            }
            else {
              fVar19 = fVar19 - fVar21 * (fVar20 / fVar22);
              if (1e-05 <= ABS(fVar19)) {
                fVar16 = (fVar17 * (fVar20 / fVar22) - fVar18) / fVar19;
                fVar22 = -(fVar21 * fVar16 + fVar17) / fVar22;
LAB_1005f61c:
                if (((0.0 <= fVar22) && (0.0 <= fVar16)) &&
                   (fVar17 = (1.0 - fVar22) - fVar16, 0.0 <= fVar17)) {
                  local_58[0] = 3;
                  local_54 = (int)puVar2 - (int)pbVar4;
                  local_50 = pfVar7[2] * fVar16 + pfVar6[2] * fVar22 + pfVar8[2] * fVar17;
                  FUN_10060ca0(puVar3,local_58);
                }
              }
            }
            uVar14 = uVar14 + 1;
            puVar2 = puVar2 + 4;
            param_1 = local_68;
            puVar15 = local_60;
            uVar12 = local_64;
            pbVar13 = local_5c;
          } while (uVar14 < *puVar1);
        }
      default:
        break;
      case 4:
      case 5:
      case 6:
      case 9:
      case 0xc:
        goto switchD_1005f4d4_caseD_4;
      case 0xb:
switchD_1005f4d4_caseD_b:
        local_70[0] = '\0';
      }
      local_6c = local_6c + (uint)*(ushort *)(pbVar13 + 2) * (uint)pbVar13[1] + 4;
    }
    if (local_70[0] == '\0') {
      return uVar12;
    }
  } while( true );
}


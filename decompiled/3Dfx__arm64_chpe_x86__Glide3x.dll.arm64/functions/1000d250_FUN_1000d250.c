/*
 * FUN_1000d250 at 1000d250
 * undefined FUN_1000d250(void)
 * Address ranges: 1000d250-1000db5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1000d250(int param_1,char *param_2,uint param_3,int *param_4,int param_5,char param_6)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  byte *pbVar9;
  bool bVar10;
  undefined2 *puVar11;
  char cVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int *local_5c;
  char *local_58;
  undefined4 uStack_54;
  undefined2 *local_50;
  undefined1 *local_4c;
  
  if (0x4000 < param_3) {
    param_3 = 0x4000;
  }
  if (0x4000 < param_3) {
    param_3 = 0x4000;
  }
  bVar8 = false;
  cVar12 = '\x01';
  switch(param_2) {
  case (char *)0x0:
    iVar19 = 1;
    break;
  case (char *)0x1:
    iVar19 = 3;
    if ((*(char *)(param_1 + 0x1ac) == '\0') || (*(int *)(param_1 + 0x1b4) != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    goto LAB_1000d2ec;
  case (char *)0x2:
    param_3 = param_3 & 0xfffffffe;
    iVar19 = 2;
    break;
  case (char *)0x3:
  case (char *)0x5:
    iVar19 = 4;
LAB_1000d2ec:
    cVar12 = 1 < param_3;
    break;
  case (char *)0x4:
    iVar19 = 5;
    if ((*(char *)(param_1 + 0x1ac) == '\0') || (*(int *)(param_1 + 0x1b4) != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    cVar12 = 2 < param_3;
    break;
  case (char *)0x6:
    iVar19 = 4;
    param_3 = (param_3 / 3) * 3;
    break;
  case (char *)0x7:
    iVar19 = 5;
    pcVar1 = (char *)(param_1 + 0x1ad);
    goto LAB_1000d33c;
  case (char *)0x8:
    iVar19 = 4;
    pcVar1 = (char *)(param_1 + 0x1ae);
LAB_1000d33c:
    cVar12 = *pcVar1;
    break;
  default:
    iVar19 = 0;
    cVar12 = '\0';
  }
  if ((param_3 != 0) && (cVar12 != '\0')) {
    local_58 = (char *)(param_1 + 0x1ac);
    if ((*local_58 == '\0') ||
       ((*(int *)(param_1 + 0x1b4) == 0 ||
        (bVar10 = true, *(int *)(param_1 + 0x1c4) == *(int *)(param_1 + 0x1d4))))) {
      bVar10 = false;
    }
    local_5c = (int *)(param_1 + 0x1dc);
    if (*local_5c != iVar19 || bVar8) {
      FUN_10018e60(param_1);
      bVar10 = false;
      *local_5c = iVar19;
    }
    local_50 = (undefined2 *)(param_1 + 0x1ad);
    *local_50 = 0;
    local_4c = (undefined1 *)(param_1 + 0x1ae);
    *local_58 = '\0';
    switch(param_2) {
    case (char *)0x1:
    case (char *)0x4:
      *local_58 = '\x01';
      if (bVar10) {
        FUN_10018f20(param_1,0,1);
        piVar14 = (int *)(param_1 + 0x1d4);
        *(undefined4 *)*piVar14 = *(undefined4 *)(param_1 + 0x1b4);
        *piVar14 = *piVar14 + 4;
      }
    case (char *)0x0:
    case (char *)0x2:
    case (char *)0x6:
      FUN_10018f20(param_1,param_3,param_3);
      *(uint *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1d8) - param_3;
      piVar14 = (int *)(param_1 + 0x1d4);
      uVar13 = param_3;
      do {
        iVar19 = *(int *)(param_1 + 0x1d8) - uVar13;
        uVar13 = uVar13 - 1;
        *(int *)*piVar14 = iVar19;
        *piVar14 = *piVar14 + 4;
      } while (uVar13 != 0);
      break;
    case (char *)0x3:
    case (char *)0x5:
      iVar19 = param_3 - 2;
      FUN_10018f20(param_1,param_3,iVar19 * 3);
      piVar14 = (int *)(param_1 + 0x1d8);
      *(uint *)(param_1 + 0x1e0) = *piVar14 - param_3;
      if (iVar19 != 0) {
        piVar15 = (int *)(param_1 + 0x1d4);
        do {
          *(uint *)*piVar15 = *piVar14 - param_3;
          *(int *)(*piVar15 + 4) = (*piVar14 - iVar19) + -1;
          iVar6 = *piVar14 - iVar19;
          iVar19 = iVar19 + -1;
          *(int *)(*piVar15 + 8) = iVar6;
          *piVar15 = *piVar15 + 0xc;
        } while (iVar19 != 0);
      }
      break;
    case (char *)0x7:
      piVar14 = (int *)(param_1 + 0x1e0);
      *local_58 = '\x01';
      if (*piVar14 != -1) {
        FUN_10018ea8(param_1,param_3,param_3);
      }
      if (*piVar14 == -1) {
        FUN_10018f20(param_1,param_3 + 2,param_3 + 2);
        piVar15 = (int *)(param_1 + 0x1d0);
        uVar22 = *(undefined8 *)(param_1 + 0x10c);
        uVar21 = *(undefined8 *)(param_1 + 0x124);
        uVar20 = *(undefined8 *)(param_1 + 0x11c);
        iVar7 = *(int *)(param_1 + 0x1d8) - param_3;
        iVar6 = iVar7 + -2;
        puVar5 = (undefined8 *)*piVar15;
        puVar5[1] = *(undefined8 *)(param_1 + 0x114);
        *puVar5 = uVar22;
        puVar5[3] = uVar21;
        puVar5[2] = uVar20;
        uVar22 = *(undefined8 *)(param_1 + 300);
        uVar21 = *(undefined8 *)(param_1 + 0x144);
        uVar20 = *(undefined8 *)(param_1 + 0x13c);
        puVar5[5] = *(undefined8 *)(param_1 + 0x134);
        puVar5[4] = uVar22;
        puVar5[7] = uVar21;
        puVar5[6] = uVar20;
        uVar20 = *(undefined8 *)(param_1 + 0x14c);
        puVar5[9] = *(undefined8 *)(param_1 + 0x154);
        puVar5[8] = uVar20;
        iVar19 = *piVar15;
        uVar22 = *(undefined8 *)(param_1 + 0x15c);
        uVar21 = *(undefined8 *)(param_1 + 0x174);
        uVar20 = *(undefined8 *)(param_1 + 0x16c);
        *(undefined8 *)(iVar19 + 0x58) = *(undefined8 *)(param_1 + 0x164);
        *(undefined8 *)(iVar19 + 0x50) = uVar22;
        *(undefined8 *)(iVar19 + 0x68) = uVar21;
        *(undefined8 *)(iVar19 + 0x60) = uVar20;
        uVar22 = *(undefined8 *)(param_1 + 0x17c);
        uVar21 = *(undefined8 *)(param_1 + 0x194);
        uVar20 = *(undefined8 *)(param_1 + 0x18c);
        *(undefined8 *)(iVar19 + 0x78) = *(undefined8 *)(param_1 + 0x184);
        *(undefined8 *)(iVar19 + 0x70) = uVar22;
        *(undefined8 *)(iVar19 + 0x88) = uVar21;
        *(undefined8 *)(iVar19 + 0x80) = uVar20;
        uVar20 = *(undefined8 *)(param_1 + 0x19c);
        piVar3 = (int *)(param_1 + 0x1d4);
        *(undefined8 *)(iVar19 + 0x98) = *(undefined8 *)(param_1 + 0x1a4);
        *(undefined8 *)(iVar19 + 0x90) = uVar20;
        *piVar14 = iVar6;
        *piVar15 = *piVar15 + 0xa0;
        *(int *)*piVar3 = iVar6;
        *(int *)(*piVar3 + 4) = iVar7 + -1;
        *piVar3 = *piVar3 + 8;
      }
      else {
        FUN_10018f20(param_1,param_3,param_3);
      }
      piVar14 = (int *)(param_1 + 0x1d4);
      uVar13 = param_3;
      do {
        iVar19 = *(int *)(param_1 + 0x1d8) - uVar13;
        uVar13 = uVar13 - 1;
        *(int *)*piVar14 = iVar19;
        *piVar14 = *piVar14 + 4;
      } while (uVar13 != 0);
      break;
    case (char *)0x8:
      local_5c = (int *)(param_1 + 0x1e0);
      if (*local_5c != -1) {
        FUN_10018ea8(param_1,param_3,param_3 * 3);
      }
      iVar19 = *local_5c;
      if (iVar19 == -1) {
        FUN_10018f20(param_1,param_3 + 2,param_3 * 3);
        piVar14 = (int *)(param_1 + 0x1d0);
        uVar22 = *(undefined8 *)(param_1 + 0x10c);
        uVar21 = *(undefined8 *)(param_1 + 0x124);
        uVar20 = *(undefined8 *)(param_1 + 0x11c);
        iVar19 = (*(int *)(param_1 + 0x1d8) - param_3) + -2;
        puVar5 = (undefined8 *)*piVar14;
        puVar5[1] = *(undefined8 *)(param_1 + 0x114);
        *puVar5 = uVar22;
        puVar5[3] = uVar21;
        puVar5[2] = uVar20;
        uVar22 = *(undefined8 *)(param_1 + 300);
        uVar21 = *(undefined8 *)(param_1 + 0x144);
        uVar20 = *(undefined8 *)(param_1 + 0x13c);
        puVar5[5] = *(undefined8 *)(param_1 + 0x134);
        puVar5[4] = uVar22;
        puVar5[7] = uVar21;
        puVar5[6] = uVar20;
        uVar20 = *(undefined8 *)(param_1 + 0x14c);
        puVar5[9] = *(undefined8 *)(param_1 + 0x154);
        puVar5[8] = uVar20;
        iVar6 = *piVar14;
        uVar22 = *(undefined8 *)(param_1 + 0x15c);
        uVar21 = *(undefined8 *)(param_1 + 0x174);
        uVar20 = *(undefined8 *)(param_1 + 0x16c);
        *(undefined8 *)(iVar6 + 0x58) = *(undefined8 *)(param_1 + 0x164);
        *(undefined8 *)(iVar6 + 0x50) = uVar22;
        *(undefined8 *)(iVar6 + 0x68) = uVar21;
        *(undefined8 *)(iVar6 + 0x60) = uVar20;
        uVar22 = *(undefined8 *)(param_1 + 0x17c);
        uVar21 = *(undefined8 *)(param_1 + 0x194);
        uVar20 = *(undefined8 *)(param_1 + 0x18c);
        *(undefined8 *)(iVar6 + 0x78) = *(undefined8 *)(param_1 + 0x184);
        *(undefined8 *)(iVar6 + 0x70) = uVar22;
        *(undefined8 *)(iVar6 + 0x88) = uVar21;
        *(undefined8 *)(iVar6 + 0x80) = uVar20;
        uVar20 = *(undefined8 *)(param_1 + 0x19c);
        *(undefined8 *)(iVar6 + 0x98) = *(undefined8 *)(param_1 + 0x1a4);
        *(undefined8 *)(iVar6 + 0x90) = uVar20;
        *piVar14 = *piVar14 + 0xa0;
        *local_5c = iVar19;
      }
      else {
        FUN_10018f20(param_1,param_3,param_3 * 3);
      }
      piVar14 = (int *)(param_1 + 0x1d4);
      uVar13 = param_3;
      do {
        *(int *)*piVar14 = iVar19;
        *(uint *)(*piVar14 + 4) = (*(int *)(param_1 + 0x1d8) - uVar13) + -1;
        iVar6 = *(int *)(param_1 + 0x1d8) - uVar13;
        uVar13 = uVar13 - 1;
        *(int *)(*piVar14 + 8) = iVar6;
        *piVar14 = *piVar14 + 0xc;
      } while (uVar13 != 0);
    }
    if (param_6 == '\0') {
      if (param_5 == 0) {
        uVar13 = 0;
        if (param_3 != 0) {
          piVar14 = (int *)(param_1 + 0x1d0);
          piVar15 = param_4;
          do {
            local_5c = (int *)(*(uint *)(param_1 + 0xe4) & *(uint *)(param_1 + 0xe8));
            uVar16 = ((uint)local_5c & 0xaaaaaaaa) >> 1 | ((uint)local_5c & 0x55555555) << 1;
            uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
            lVar18 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
            uVar16 = (uint)lVar18;
            if ((1 - (uVar16 >> 5) & 0xff) != 0) {
              iVar19 = *piVar15;
              iVar6 = *piVar14;
              pbVar9 = (byte *)((int)&local_5c + ((int)uVar16 >> 3));
              *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
              while( true ) {
                iVar17 = (int)lVar18;
                piVar3 = (int *)(param_1 + 4 + iVar17 * 0x10);
                iVar7 = *(int *)(param_1 + 0xc + iVar17 * 0x10);
                puVar4 = (undefined4 *)(param_1 + 0x10 + iVar17 * 0x10);
                *(undefined4 *)*puVar4 = *(undefined4 *)(iVar19 + *piVar3);
                *(undefined4 *)(iVar6 + *(int *)(param_1 + 8 + iVar17 * 0x10) * 4) =
                     *(undefined4 *)*puVar4;
                if (iVar7 != 1) {
                  piVar2 = piVar3 + 3;
                  *(undefined4 *)(*piVar2 + 4) = *(undefined4 *)(iVar19 + *piVar3 + 4);
                  *(undefined4 *)(iVar6 + (piVar3[1] + 1) * 4) = *(undefined4 *)(*piVar2 + 4);
                  if (iVar7 != 2) {
                    *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(iVar19 + *piVar3 + 8);
                    *(undefined4 *)(iVar6 + piVar3[1] * 4 + 8) = *(undefined4 *)(*piVar2 + 8);
                  }
                }
                uVar16 = ((uint)local_5c & 0xaaaaaaaa) >> 1 | ((uint)local_5c & 0x55555555) << 1;
                uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
                lVar18 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
                uVar16 = (uint)lVar18;
                if ((1 - (uVar16 >> 5) & 0xff) == 0) break;
                pbVar9 = (byte *)((int)&local_5c + ((int)uVar16 >> 3));
                *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
              }
            }
            uVar13 = uVar13 + 1;
            piVar15 = piVar15 + 1;
            *piVar14 = *piVar14 + 0x50;
          } while (uVar13 < param_3);
          uStack_54 = 0;
          local_58 = param_2;
        }
      }
      else {
        FUN_1000cee0(param_1,*param_4,param_5,param_3);
      }
    }
    else if (param_5 == 0) {
      uVar13 = 0;
      if (param_3 != 0) {
        piVar14 = param_4;
        do {
          FUN_1000d0b8(param_1,*piVar14,0);
          uVar13 = uVar13 + 1;
          piVar14 = piVar14 + 1;
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 0x50;
        } while (uVar13 < param_3);
      }
    }
    else {
      FUN_1000d1d8(param_1,*param_4,param_5,param_3);
    }
    puVar11 = local_50;
    switch(param_2) {
    case (char *)0x3:
    case (char *)0x5:
      FUN_1000cb60(param_1,*param_4,0,param_6);
    case (char *)0x8:
      if (param_5 == 0) {
        iVar19 = param_4[param_3 - 1];
      }
      else {
        iVar19 = *param_4 + (param_3 - 1) * param_5;
      }
      FUN_1000cb60(param_1,iVar19,1,param_6);
      *local_4c = 1;
      break;
    case (char *)0x4:
    case (char *)0x7:
      if (param_3 < 2) {
        *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_1 + 0x164);
        *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_1 + 0x15c);
        *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_1 + 0x174);
        *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_1 + 0x16c);
        *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(param_1 + 0x184);
        *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_1 + 0x17c);
        *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_1 + 0x194);
        *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_1 + 0x18c);
        *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(param_1 + 0x1a4);
        *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_1 + 0x19c);
      }
      else {
        if (param_5 == 0) {
          iVar19 = param_4[param_3 - 2];
        }
        else {
          iVar19 = *param_4 + (param_3 - 2) * param_5;
        }
        FUN_1000cb60(param_1,iVar19,0,param_6);
      }
      if (param_5 == 0) {
        iVar19 = param_4[param_3 - 1];
      }
      else {
        iVar19 = *param_4 + (param_3 - 1) * param_5;
      }
      FUN_1000cb60(param_1,iVar19,1,param_6);
      *(undefined1 *)puVar11 = 1;
    }
  }
  return cVar12;
}


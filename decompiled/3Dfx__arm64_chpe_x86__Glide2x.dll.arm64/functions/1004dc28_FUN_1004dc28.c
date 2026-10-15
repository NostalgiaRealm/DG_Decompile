/*
 * FUN_1004dc28 at 1004dc28
 * undefined FUN_1004dc28(void)
 * Address ranges: 1004dc28-1004e5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_1004dc28(int *param_1,ushort param_2,undefined2 param_3,undefined2 param_4,ushort param_5,
                 byte param_6,undefined1 param_7,char param_8,undefined4 param_9,undefined4 param_10
                 ,char param_11,undefined4 param_12,byte param_13)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  float fVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  float fVar28;
  undefined4 local_88;
  ushort local_84;
  undefined4 local_80;
  ushort local_7c;
  ushort uStack_7a;
  ushort local_78 [4];
  int *local_70;
  int *local_6c;
  float local_68;
  ushort local_64;
  ushort local_62;
  float local_60;
  int *local_5c;
  int *local_58;
  uint local_54;
  uint local_50;
  
  uVar27 = 0;
  bVar6 = param_6 != 0;
  uVar22 = (uint)param_5;
  uVar26 = 0;
  local_78[3] = 0;
  uVar21 = 0;
  local_80 = 0;
  uVar24 = 0;
  local_7c = 0;
  uVar19 = 0;
  local_88 = 0;
  uVar12 = ZEXT48(local_78);
  local_84 = 0;
  uVar13 = ZEXT48(&local_80);
  uVar14 = ZEXT48(&local_88);
  local_78[0] = param_2;
  local_78[1] = param_3;
  local_78[2] = param_4;
  do {
    fVar25 = (float)uVar26;
    fVar28 = (float)uVar27;
    uVar4 = *(ushort *)((int)uVar12 + uVar19 * 2);
    if ((uVar4 & 0x2000) == 0) {
      if ((uVar4 & 0xf0) != 0) {
        iVar10 = (int)uVar24;
        uVar24 = (ulonglong)(iVar10 + 1);
        *(ushort *)((int)uVar14 + iVar10 * 2) = uVar4;
      }
      fVar28 = (float)FUN_1004a618(uVar4);
      uVar26 = (ulonglong)(uint)(fVar28 + fVar25);
      iVar10 = extraout_w1_00;
    }
    else {
      iVar10 = (int)uVar21;
      uVar21 = (ulonglong)(iVar10 + 1);
      *(ushort *)((int)uVar13 + iVar10 * 2) = uVar4;
      fVar25 = (float)FUN_1004a618(uVar4);
      uVar27 = (ulonglong)(uint)(fVar25 + fVar28);
      iVar10 = extraout_w1;
    }
    uVar19 = iVar10 + 1;
  } while (uVar19 < 3);
  iVar10 = 0;
  if (((local_80._2_2_ & 0xf0) == 0xf0) && (((param_5 ^ local_80._2_2_) & 0x1000) == 0)) {
    iVar10 = 1;
    local_80 = CONCAT22((undefined2)local_80,local_80._2_2_);
  }
  if (((local_7c & 0xf0) == 0xf0) && (((local_7c ^ param_5) & 0x1000) == 0)) {
    puVar2 = (ushort *)((int)&local_80 + iVar10 * 2);
    uVar4 = *puVar2;
    *puVar2 = local_7c;
    local_7c = uVar4;
  }
  iVar10 = 0;
  if (((local_88._2_2_ & 0xf0) == 0xf0) && (((local_88._2_2_ ^ param_5) & 0x1000) == 0)) {
    iVar10 = 1;
    local_88 = CONCAT22((undefined2)local_88,local_88._2_2_);
  }
  if (((local_84 & 0xf0) == 0xf0) && (((local_84 ^ param_5) & 0x1000) == 0)) {
    puVar2 = (ushort *)((int)&local_88 + iVar10 * 2);
    uVar4 = *puVar2;
    *puVar2 = local_84;
    local_84 = uVar4;
  }
  local_68 = (float)uVar27 / 255.0 + (float)uVar26;
  local_60 = local_68;
  FUN_1007a780(local_78,&local_80,(uVar21 & 0x7fffffff) << 1);
  FUN_1007a780((int)local_78 + (int)uVar21 * 2,&local_88,(uVar24 & 0x7fffffff) << 1);
  uVar19 = (int)uVar24 + (int)uVar21;
  if ((((&uStack_7a)[uVar19] & 0x2000) != 0) || (local_68 != 0.0)) {
    *(undefined2 *)((int)local_78 + uVar19 * 2) = 0x90;
    uVar19 = uVar19 + 1;
    bVar6 = false;
  }
  if (uVar19 < 4) {
    FUN_1007a7b0((int)local_78 + uVar19 * 2,0,uVar19 * -2 + 8);
  }
  uVar4 = local_78[0];
  uVar23 = (uint)local_78[0];
  uVar15 = uVar19;
  if ((((&uStack_7a)[uVar19] == 0x90) && (local_60 == 0.0)) && ((uVar22 & 0xf0) != 0x70)) {
    uVar15 = uVar19 - 1;
  }
  uVar9 = uVar22;
  uVar11 = 0;
  if ((2 < uVar15 || bVar6) && (((uVar22 & 0xf0) - 0x70 & 0xff7f) == 0)) {
    uVar9 = FUN_1004d288(param_1,local_78[2],local_78[3],0,0,param_7,0);
    uVar9 = uVar9 & 0xffff;
    uVar11 = uVar9;
  }
  uVar9 = (uVar9 ^ uVar4) & 0x2000 ^ uVar9;
  local_80 = (uint)param_6;
  local_68 = (float)(1 << (ulonglong)(local_80 & 0x1f));
  if (uVar19 < 2) {
    piVar20 = param_1 + 0x55;
    piVar1 = param_1 + 0x5d;
  }
  else {
    piVar20 = param_1 + 0x55;
    uVar15 = 1;
    local_62 = (ushort)uVar11;
    local_88 = uVar19;
    local_6c = piVar20;
    local_64 = param_5;
    local_58 = piVar20;
    local_54 = uVar19 - 1;
    local_50 = uVar22;
    do {
      local_70 = piVar20;
      if (uVar15 == local_54) {
        if (!bVar6) {
          uVar9 = uVar9 & 0x2000 | local_50 & 0xdfff;
        }
        local_70 = local_58;
      }
      bVar8 = FUN_1004d3d0(param_1,uVar9,param_8);
      FUN_1004cd90(param_1,uVar9,param_7);
      FUN_1004cea0(param_1,0,uVar23,bVar8,0,0);
      piVar20 = param_1 + 0x5d;
      local_5c = piVar20;
      uVar4 = *(ushort *)((int)local_78 + uVar15 * 2);
      uVar19 = uVar4 & 0xf0;
      uVar22 = (uint)uVar4;
      if (uVar19 == 0x90) {
        bVar7 = param_8 == -1;
        fVar25 = local_60;
LAB_1004e2bc:
        iVar10 = 5;
        if (bVar7) {
          iVar10 = 2;
        }
        *piVar20 = iVar10;
        iVar10 = 0x4000;
        if (bVar7) {
          iVar10 = 0x4001;
        }
        iVar17 = 0x4006;
        if (bVar7) {
          iVar17 = iVar10;
        }
        param_1[0x5e] = iVar17;
        param_1[0x62] = (int)fVar25;
        param_1[0x61] = (int)fVar25;
        param_1[0x60] = (int)fVar25;
        param_1[0x5f] = (int)fVar25;
      }
      else {
        bVar7 = false;
        if ((uVar4 & 0xff0) != 0x100) {
          bVar7 = (uVar22 & 0xf00) != 0x600 && ((uVar22 & 0xf00) - 0x100 & 0xfffffaff) == 0;
        }
        uVar11 = (uint)bVar8;
        if ((uVar4 & 0x1000) != 0) {
          uVar11 = 0xff;
        }
        uVar16 = uVar22 & 0xf;
        if (uVar19 < 0x40) {
          if ((uVar19 - 0x20 & 0xffffffef) == 0) {
            iVar10 = 0x78;
            if (uVar19 == 0x20) {
              iVar10 = 0x6c;
            }
            uVar16 = *(uint *)(iVar10 + uVar16 * 4 + (int)param_1);
            if (uVar16 == 0) goto LAB_1004e268;
            *piVar20 = 2;
            iVar10 = FUN_1006f1e0(uVar16,0,1,4,0,0);
            param_1[0x5e] = iVar10;
            uVar16 = uVar16 & 0xff;
LAB_1004e20c:
            param_1[0x5f] = uVar16;
          }
          else {
            if ((uVar4 & 0xf0) == 0) {
LAB_1004e268:
              fVar25 = -0.5;
              if ((uVar22 & 0xf00) != 0x300) {
                fVar25 = 0.0;
              }
              fVar28 = 1.0;
              if ((uVar22 & 0xf00) != 0x100) {
                fVar28 = fVar25;
              }
              if ((uVar4 & 0x2000) != 0) {
                fVar28 = fVar28 * 255.0;
              }
              fVar25 = -fVar28;
              if (!bVar7) {
                fVar25 = fVar28;
              }
              bVar7 = uVar11 == 0xff;
              goto LAB_1004e2bc;
            }
            if (uVar19 == 0x10) {
              *piVar20 = 2;
              param_1[0x5e] = uVar11 << 4 | 0x100006;
              uVar16 = (uint)*(byte *)(param_1 + uVar16 + 0x21);
              goto LAB_1004e20c;
            }
          }
        }
        else {
          if (uVar19 < 0x41) {
            iVar17 = 2;
            param_1[0x5e] = uVar11 << 4 | 0x101006;
            piVar1 = param_1 + 0x5f;
            *piVar20 = 2;
          }
          else {
            if (uVar19 != 0x50) {
              if (uVar19 == 0x80) {
                *piVar20 = 2;
                pbVar5 = (byte *)(param_1 + uVar16 + 0x24);
              }
              else {
                if (uVar19 != 0xf0) goto LAB_1004e214;
                *piVar20 = 2;
                pbVar5 = (byte *)(param_1 + 0x28);
              }
              iVar10 = FUN_1006f1e0(*(int *)pbVar5,(char)uVar11,1,4,0,0);
              param_1[0x5e] = iVar10;
              uVar16 = (uint)*pbVar5;
              goto LAB_1004e20c;
            }
            param_1[2] = param_1[2] | 1;
            if (*param_1 == 0x51) {
              param_1[0x61] = 5;
              uVar11 = uVar11 << 4 | 0x308006;
              iVar17 = 0;
              iVar10 = 4;
            }
            else {
              uVar11 = uVar11 << 4 | 0x208006;
              iVar17 = 5;
              iVar10 = 3;
            }
            *piVar20 = iVar10;
            param_1[0x5e] = uVar11;
            param_1[0x5f] = 0;
            piVar1 = param_1 + 0x60;
          }
          *piVar1 = iVar17;
        }
LAB_1004e214:
        if (bVar7) {
          for (iVar10 = *piVar20; iVar10 != 0; iVar10 = iVar10 + -1) {
            param_1[iVar10 + 0x5e] = piVar20[iVar10];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          param_1[0x5f] = 0x41;
          *piVar20 = *piVar20 + 1;
        }
      }
      piVar20 = local_70;
      uVar11 = 0x2000;
      if (uVar15 != local_54 || param_13 == 0) {
        uVar11 = 0;
      }
      if ((uVar23 & 0x2000) == (uVar22 & 0x2000)) {
        FUN_1006fbd8(param_9,(*local_5c + *local_6c + param_1[0x4d] + 1U & 0x7f) << 0x18 | uVar11,
                     param_1 + 0x4d,local_70,local_5c,0);
        uVar9 = uVar9 & 0xdfff | uVar23 & 0x2000;
      }
      else {
        param_1[0x6a] = 0x3b808081;
        param_1[0x69] = 0x3b808081;
        param_1[0x68] = 0x3b808081;
        param_1[0x67] = 0x3b808081;
        bVar7 = param_8 == -1;
        iVar10 = 5;
        if (bVar7) {
          iVar10 = 2;
        }
        param_1[0x65] = iVar10;
        iVar17 = 0x4000;
        if (bVar7) {
          iVar17 = 0x4001;
        }
        iVar18 = 0x4006;
        if (bVar7) {
          iVar18 = iVar17;
        }
        param_1[0x66] = iVar18;
        uVar22 = *local_6c + iVar10 + param_1[0x4d] + 1;
        if ((uVar19 == 0x90) && (local_60 == 0.0)) {
          piVar20 = local_6c;
          if (param_11 == '\0') goto LAB_1004e48c;
          fVar25 = local_68 / 255.0;
          uVar19 = uVar11 | (uVar22 & 0x7f) << 0x18 | 0x38;
          param_1[0x6a] = (int)fVar25;
          param_1[0x69] = (int)fVar25;
          param_1[0x68] = (int)fVar25;
          param_1[0x67] = (int)fVar25;
          piVar20 = (int *)0x0;
        }
        else {
          uVar19 = (*local_5c + uVar22 & 0x7f) << 0x18 | uVar11 | 0x32;
          piVar20 = local_5c;
        }
        FUN_1006fbd8(param_9,uVar19,param_1 + 0x4d,local_70,param_1 + 0x65,piVar20);
        uVar9 = uVar9 & 0xdfff;
        piVar20 = local_6c;
      }
LAB_1004e48c:
      uVar15 = uVar15 + 1;
      uVar23 = uVar9;
    } while (uVar15 < local_88);
    uVar22 = (uint)local_64;
    uVar11 = (uint)local_62;
    piVar1 = local_5c;
    piVar20 = local_6c;
  }
  FUN_1004d390(param_1,uVar11);
  if (bVar6) {
    FUN_1004cd90(param_1,uVar22,param_7);
    FUN_1004cea0(param_1,0,uVar23,param_8,0,0);
    iVar10 = *piVar20 + param_1[0x4d] + 1;
    if (local_80 == 1) {
      uVar19 = (*piVar20 + iVar10 & 0x7fU) << 0x18 | (param_13 ^ 1) << 0xd;
      piVar1 = piVar20;
    }
    else {
      if (local_80 != 2) goto LAB_1004e5cc;
      bVar6 = param_8 == -1;
      iVar17 = 5;
      if (bVar6) {
        iVar17 = 2;
      }
      *piVar1 = iVar17;
      iVar18 = 0x4000;
      if (bVar6) {
        iVar18 = 0x4001;
      }
      iVar3 = 0x4006;
      if (bVar6) {
        iVar3 = iVar18;
      }
      piVar1[1] = iVar3;
      piVar1[5] = (int)local_68;
      piVar1[4] = (int)local_68;
      piVar1[3] = (int)local_68;
      piVar1[2] = (int)local_68;
      uVar19 = (iVar10 + iVar17 & 0x7fU) << 0x18 | (param_13 ^ 1) << 0xd | 0x38;
    }
    FUN_1006fbd8(param_9,uVar19,param_1 + 0x4d,piVar20,piVar1,0);
  }
LAB_1004e5cc:
  return ~(uVar9 >> 0xd) & 1;
}


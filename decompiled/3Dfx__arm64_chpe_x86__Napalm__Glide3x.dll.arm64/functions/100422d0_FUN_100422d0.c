/*
 * FUN_100422d0 at 100422d0
 * undefined FUN_100422d0(void)
 * Address ranges: 100422d0-10042d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_100422d0(int *param_1,ushort param_2,undefined2 param_3,undefined2 param_4,ushort param_5,
                 byte param_6,undefined1 param_7,char param_8,undefined4 param_9,undefined4 param_10
                 ,char param_11,undefined4 param_12,byte param_13)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float fVar29;
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
  
  uVar28 = 0;
  bVar7 = param_6 != 0;
  uVar23 = (uint)param_5;
  uVar27 = 0;
  local_78[3] = 0;
  uVar22 = 0;
  local_80 = 0;
  uVar25 = 0;
  local_7c = 0;
  uVar20 = 0;
  local_88 = 0;
  uVar13 = ZEXT48(local_78);
  local_84 = 0;
  uVar14 = ZEXT48(&local_80);
  uVar15 = ZEXT48(&local_88);
  local_78[0] = param_2;
  local_78[1] = param_3;
  local_78[2] = param_4;
  do {
    fVar26 = (float)uVar27;
    fVar29 = (float)uVar28;
    uVar5 = *(ushort *)((int)uVar13 + uVar20 * 2);
    if ((uVar5 & 0x2000) == 0) {
      if ((uVar5 & 0xf0) != 0) {
        iVar11 = (int)uVar25;
        uVar25 = (ulonglong)(iVar11 + 1);
        *(ushort *)((int)uVar15 + iVar11 * 2) = uVar5;
      }
      fVar29 = (float)FUN_1003e290(uVar5);
      uVar27 = (ulonglong)(uint)(fVar29 + fVar26);
      iVar11 = extraout_w1_00;
    }
    else {
      iVar11 = (int)uVar22;
      uVar22 = (ulonglong)(iVar11 + 1);
      *(ushort *)((int)uVar14 + iVar11 * 2) = uVar5;
      fVar26 = (float)FUN_1003e290(uVar5);
      uVar28 = (ulonglong)(uint)(fVar26 + fVar29);
      iVar11 = extraout_w1;
    }
    uVar20 = iVar11 + 1;
  } while (uVar20 < 3);
  iVar11 = 0;
  if (((local_80._2_2_ & 0xf0) == 0xf0) && (((param_5 ^ local_80._2_2_) & 0x1000) == 0)) {
    iVar11 = 1;
    local_80 = CONCAT22((undefined2)local_80,local_80._2_2_);
  }
  if (((local_7c & 0xf0) == 0xf0) && (((local_7c ^ param_5) & 0x1000) == 0)) {
    puVar3 = (ushort *)((int)&local_80 + iVar11 * 2);
    uVar5 = *puVar3;
    *puVar3 = local_7c;
    local_7c = uVar5;
  }
  iVar11 = 0;
  if (((local_88._2_2_ & 0xf0) == 0xf0) && (((local_88._2_2_ ^ param_5) & 0x1000) == 0)) {
    iVar11 = 1;
    local_88 = CONCAT22((undefined2)local_88,local_88._2_2_);
  }
  if (((local_84 & 0xf0) == 0xf0) && (((local_84 ^ param_5) & 0x1000) == 0)) {
    puVar3 = (ushort *)((int)&local_88 + iVar11 * 2);
    uVar5 = *puVar3;
    *puVar3 = local_84;
    local_84 = uVar5;
  }
  local_68 = (float)uVar28 / 255.0 + (float)uVar27;
  local_60 = local_68;
  FUN_10083b40(local_78,&local_80,(uVar22 & 0x7fffffff) << 1);
  FUN_10083b40((int)local_78 + (int)uVar22 * 2,&local_88,(uVar25 & 0x7fffffff) << 1);
  uVar20 = (int)uVar25 + (int)uVar22;
  if ((((&uStack_7a)[uVar20] & 0x2000) != 0) || (local_68 != 0.0)) {
    *(undefined2 *)((int)local_78 + uVar20 * 2) = 0x90;
    uVar20 = uVar20 + 1;
    bVar7 = false;
  }
  if (uVar20 < 4) {
    FUN_10083b70((int)local_78 + uVar20 * 2,0,uVar20 * -2 + 8);
  }
  uVar5 = local_78[0];
  uVar24 = (uint)local_78[0];
  uVar16 = uVar20;
  if ((((&uStack_7a)[uVar20] == 0x90) && (local_60 == 0.0)) && ((uVar23 & 0xf0) != 0x70)) {
    uVar16 = uVar20 - 1;
  }
  uVar10 = uVar23;
  uVar12 = 0;
  if ((2 < uVar16 || bVar7) && (((uVar23 & 0xf0) - 0x70 & 0xff7f) == 0)) {
    uVar10 = FUN_10041930(param_1,local_78[2],local_78[3],0,0,param_7,0);
    uVar10 = uVar10 & 0xffff;
    uVar12 = uVar10;
  }
  uVar10 = (uVar10 ^ uVar5) & 0x2000 ^ uVar10;
  local_80 = (uint)param_6;
  local_68 = (float)(1 << (ulonglong)(local_80 & 0x1f));
  if (uVar20 < 2) {
    piVar21 = param_1 + 0x55;
    piVar1 = param_1 + 0x5d;
  }
  else {
    piVar21 = param_1 + 0x55;
    uVar16 = 1;
    local_62 = (ushort)uVar12;
    local_88 = uVar20;
    local_6c = piVar21;
    local_64 = param_5;
    local_58 = piVar21;
    local_54 = uVar20 - 1;
    local_50 = uVar23;
    do {
      local_70 = piVar21;
      if (uVar16 == local_54) {
        if (!bVar7) {
          uVar10 = uVar10 & 0x2000 | local_50 & 0xdfff;
        }
        local_70 = local_58;
      }
      bVar9 = FUN_10041a78(param_1,uVar10,param_8);
      FUN_10041340(param_1,uVar10,param_7);
      FUN_100414d0(param_1,0,uVar24,bVar9,0,0);
      piVar21 = param_1 + 0x5d;
      local_5c = piVar21;
      uVar5 = *(ushort *)((int)local_78 + uVar16 * 2);
      uVar20 = uVar5 & 0xf0;
      uVar23 = (uint)uVar5;
      if (uVar20 == 0x90) {
        bVar8 = param_8 == -1;
        fVar26 = local_60;
LAB_100429e8:
        iVar11 = 5;
        if (bVar8) {
          iVar11 = 2;
        }
        *piVar21 = iVar11;
        iVar11 = 0x4000;
        if (bVar8) {
          iVar11 = 0x4001;
        }
        iVar18 = 0x4006;
        if (bVar8) {
          iVar18 = iVar11;
        }
        param_1[0x5e] = iVar18;
        param_1[0x62] = (int)fVar26;
        param_1[0x61] = (int)fVar26;
        param_1[0x60] = (int)fVar26;
        param_1[0x5f] = (int)fVar26;
      }
      else {
        bVar8 = false;
        if ((uVar5 & 0xff0) != 0x100) {
          bVar8 = (uVar23 & 0xf00) != 0x600 && ((uVar23 & 0xf00) - 0x100 & 0xfffffaff) == 0;
        }
        uVar12 = (uint)bVar9;
        if ((uVar5 & 0x1000) != 0) {
          uVar12 = 0xff;
        }
        uVar17 = uVar23 & 0xf;
        if (uVar20 < 0x40) {
          if ((uVar20 - 0x20 & 0xffffffef) == 0) {
            iVar11 = 0x78;
            if (uVar20 == 0x20) {
              iVar11 = 0x6c;
            }
            uVar17 = *(uint *)(iVar11 + uVar17 * 4 + (int)param_1);
            if (uVar17 == 0) goto LAB_10042994;
            *piVar21 = 2;
            iVar11 = FUN_10078520(uVar17,0,1,4,0,0);
            param_1[0x5e] = iVar11;
            uVar17 = uVar17 & 0xff;
          }
          else {
            if ((uVar5 & 0xf0) == 0) {
LAB_10042994:
              fVar26 = -0.5;
              if ((uVar23 & 0xf00) != 0x300) {
                fVar26 = 0.0;
              }
              fVar29 = 1.0;
              if ((uVar23 & 0xf00) != 0x100) {
                fVar29 = fVar26;
              }
              if ((uVar5 & 0x2000) != 0) {
                fVar29 = fVar29 * 255.0;
              }
              fVar26 = -fVar29;
              if (!bVar8) {
                fVar26 = fVar29;
              }
              bVar8 = uVar12 == 0xff;
              goto LAB_100429e8;
            }
            if (uVar20 != 0x10) goto LAB_10042940;
            *piVar21 = 2;
            param_1[0x5e] = uVar12 << 4 | 0x100006;
            uVar17 = (uint)*(byte *)(param_1 + uVar17 + 0x21);
          }
LAB_10042938:
          puVar2 = (uint *)(param_1 + 0x5f);
LAB_1004293c:
          *puVar2 = uVar17;
        }
        else {
          if (0x40 < uVar20) {
            if (0x7f < uVar20) {
              if (uVar20 < 0x81) {
                *piVar21 = 2;
                pbVar6 = (byte *)(param_1 + uVar17 + 0x24);
              }
              else {
                if (uVar20 != 0xf0) goto LAB_10042940;
                *piVar21 = 2;
                pbVar6 = (byte *)(param_1 + 0x28);
              }
              iVar11 = FUN_10078520(*(int *)pbVar6,(char)uVar12,1,4,0,0);
              param_1[0x5e] = iVar11;
              uVar17 = (uint)*pbVar6;
              goto LAB_10042938;
            }
            if (uVar20 == 0x50) {
              param_1[2] = param_1[2] | 1;
              if (*param_1 == 0x51) {
                param_1[0x61] = 5;
                uVar12 = uVar12 << 4 | 0x308006;
                iVar18 = 0;
                iVar11 = 4;
              }
              else {
                uVar12 = uVar12 << 4 | 0x208006;
                iVar18 = 5;
                iVar11 = 3;
              }
              *piVar21 = iVar11;
              param_1[0x5e] = uVar12;
              param_1[0x5f] = 0;
              piVar1 = param_1 + 0x60;
              goto LAB_1004273c;
            }
            if (uVar20 != 0x60) goto LAB_10042940;
            param_1[2] = param_1[2] | 1;
            uVar17 = uVar17 * 0x250 + 0x180 >> 4;
            if (*param_1 == 0x51) {
              param_1[0x61] = uVar17;
              uVar17 = 0;
              iVar11 = 4;
            }
            else {
              iVar11 = 3;
            }
            *piVar21 = iVar11;
            param_1[0x5e] = uVar12 << 4 | 0x208006;
            param_1[0x5f] = 0;
            puVar2 = (uint *)(param_1 + 0x60);
            goto LAB_1004293c;
          }
          iVar18 = 2;
          param_1[0x5e] = uVar12 << 4 | 0x101006;
          piVar1 = param_1 + 0x5f;
          *piVar21 = 2;
LAB_1004273c:
          *piVar1 = iVar18;
        }
LAB_10042940:
        if (bVar8) {
          for (iVar11 = *piVar21; iVar11 != 0; iVar11 = iVar11 + -1) {
            param_1[iVar11 + 0x5e] = piVar21[iVar11];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          param_1[0x5f] = 0x41;
          *piVar21 = *piVar21 + 1;
        }
      }
      piVar21 = local_70;
      uVar12 = 0x2000;
      if (uVar16 != local_54 || param_13 == 0) {
        uVar12 = 0;
      }
      if ((uVar24 & 0x2000) == (uVar23 & 0x2000)) {
        FUN_10078f18(param_9,(*local_5c + param_1[0x4d] + *local_6c + 1U & 0x7f) << 0x18 | uVar12,
                     param_1 + 0x4d,local_70,local_5c,0);
        uVar10 = uVar10 & 0xdfff | uVar24 & 0x2000;
      }
      else {
        param_1[0x6a] = 0x3b808081;
        param_1[0x69] = 0x3b808081;
        param_1[0x68] = 0x3b808081;
        param_1[0x67] = 0x3b808081;
        bVar8 = param_8 == -1;
        iVar11 = 5;
        if (bVar8) {
          iVar11 = 2;
        }
        param_1[0x65] = iVar11;
        iVar18 = 0x4000;
        if (bVar8) {
          iVar18 = 0x4001;
        }
        iVar19 = 0x4006;
        if (bVar8) {
          iVar19 = iVar18;
        }
        param_1[0x66] = iVar19;
        uVar23 = iVar11 + param_1[0x4d] + *local_6c + 1;
        if ((uVar20 == 0x90) && (local_60 == 0.0)) {
          piVar21 = local_6c;
          if (param_11 == '\0') goto LAB_10042bb8;
          fVar26 = local_68 / 255.0;
          uVar20 = uVar12 | (uVar23 & 0x7f) << 0x18 | 0x38;
          param_1[0x6a] = (int)fVar26;
          param_1[0x69] = (int)fVar26;
          param_1[0x68] = (int)fVar26;
          param_1[0x67] = (int)fVar26;
          piVar21 = (int *)0x0;
        }
        else {
          uVar20 = (*local_5c + uVar23 & 0x7f) << 0x18 | uVar12 | 0x32;
          piVar21 = local_5c;
        }
        FUN_10078f18(param_9,uVar20,param_1 + 0x4d,local_70,param_1 + 0x65,piVar21);
        uVar10 = uVar10 & 0xdfff;
        piVar21 = local_6c;
      }
LAB_10042bb8:
      uVar16 = uVar16 + 1;
      uVar24 = uVar10;
    } while (uVar16 < local_88);
    uVar23 = (uint)local_64;
    uVar12 = (uint)local_62;
    piVar1 = local_5c;
    piVar21 = local_6c;
  }
  FUN_10041a38(param_1,uVar12);
  if (bVar7) {
    FUN_10041340(param_1,uVar23,param_7);
    FUN_100414d0(param_1,0,uVar24,param_8,0,0);
    iVar11 = *piVar21 + param_1[0x4d] + 1;
    if (local_80 == 1) {
      uVar20 = (*piVar21 + iVar11 & 0x7fU) << 0x18 | (param_13 ^ 1) << 0xd;
      piVar1 = piVar21;
    }
    else {
      if (local_80 != 2) goto LAB_10042cf8;
      bVar7 = param_8 == -1;
      iVar18 = 5;
      if (bVar7) {
        iVar18 = 2;
      }
      *piVar1 = iVar18;
      iVar19 = 0x4000;
      if (bVar7) {
        iVar19 = 0x4001;
      }
      iVar4 = 0x4006;
      if (bVar7) {
        iVar4 = iVar19;
      }
      piVar1[1] = iVar4;
      piVar1[5] = (int)local_68;
      piVar1[4] = (int)local_68;
      piVar1[3] = (int)local_68;
      piVar1[2] = (int)local_68;
      uVar20 = (iVar18 + iVar11 & 0x7fU) << 0x18 | (param_13 ^ 1) << 0xd | 0x38;
    }
    FUN_10078f18(param_9,uVar20,param_1 + 0x4d,piVar21,piVar1,0);
  }
LAB_10042cf8:
  return ~(uVar10 >> 0xd) & 1;
}


/*
 * FUN_180040548 at 180040548
 * ulonglong __cdecl FUN_180040548(ushort * param_1, int * param_2, longlong * param_3, ushort param_4, byte param_5, ulonglong param_6)
 * Address ranges: 180040548-180040967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180040548(ushort *param_1,int *param_2,longlong *param_3,ushort param_4,byte param_5,
                       ulonglong param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort uVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  
  uVar11 = (uint)param_4;
  uVar14 = uVar11 & 0xf0;
  uVar12 = (uint)param_5;
  if ((uVar14 == 0xf0) && (param_2[0x2a] == 0)) {
    uVar12 = (uint)param_5;
    uVar10 = FUN_180056b90((longlong)param_2,4,1);
    param_2[0x2a] = uVar10;
  }
  uVar16 = param_1[5];
  iVar3 = 0xf;
  if ((param_6 & 0xff) == 0) {
    iVar3 = (uVar12 ^ 1) + 7;
  }
  bVar18 = 0xa4;
  if (uVar12 == 0) {
    bVar18 = 0xff;
  }
  bVar1 = 0xe4;
  if ((param_6 & 0xff) == 0) {
    bVar1 = bVar18;
  }
  bVar8 = uVar14 == 0x70;
  bVar9 = (uVar16 & 0xf00) != 0;
  bVar18 = (byte)iVar3;
  if ((*param_1 & 0xdf0) == 0) {
    if ((uVar16 & 0xf0) == 0xf0) {
      if ((uVar16 & 0xf00) == 0x100) {
        uVar11 = FUN_18003e8e0((longlong)param_2,0,0,0,0,bVar18,0);
        FUN_18003ec58(param_2,param_1[5],(ushort)uVar11,(byte)param_1[4],bVar18,param_3,0);
        uVar12 = FUN_18003ec58(param_2,(ushort)uVar11 | 0x100,param_4,0,bVar18,param_3,0);
        uVar15 = (ulonglong)uVar12;
        if ((uVar11 & 0xf0) == 0x80) {
          uVar15 = FUN_180056c30((longlong)param_2,param_2[(ulonglong)(uVar11 & 0xf) + 0x26]);
          *(undefined4 *)(extraout_x14 + 0x98) = 0;
        }
        goto LAB_1800408f4;
      }
      uVar16 = param_1[3];
    }
    uVar12 = FUN_18003ec58(param_2,uVar16,param_4,(byte)param_1[4],bVar18,param_3,0);
    uVar15 = (ulonglong)uVar12;
  }
  else {
    if ((*param_1 & 0xff0) == 0x100) {
      if (bVar8 && bVar9) {
        uVar11 = FUN_18003e8e0((longlong)param_2,0,0,0,0,bVar18,0);
        uVar11 = uVar11 & 0xffff;
      }
      uVar7 = param_1[4];
      uVar5 = param_1[3];
      uVar6 = param_1[2];
      uVar16 = param_1[1];
      uVar10 = (uint)uVar6;
      uVar12 = (uint)uVar16;
      if (((uVar16 >> 0xe & 1) == 0) &&
         (uVar12 = uVar10, uVar10 = (uint)uVar16, (uVar6 >> 0xe & 1) == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_18003ea30(param_2,uVar12,uVar11,uVar10,(uint)uVar5,0,bVar18,param_3);
        uVar13 = uVar13 & 0xffff;
      }
      uVar2 = (ushort)uVar13;
      if ((uVar16 & 0x4000) != 0) {
        uVar16 = uVar2;
      }
      if ((uVar6 & 0x4000) != 0) {
        uVar6 = uVar2;
      }
      if ((uVar5 & 0x4000) != 0) {
        uVar5 = uVar2;
      }
      uVar12 = FUN_18003f058(param_2,uVar16,uVar6,uVar5,uVar11,(byte)uVar7,iVar3,bVar1,param_3,
                             '\x01',1);
      uVar15 = (ulonglong)uVar12;
    }
    else {
      if (bVar8 && bVar9) {
        uVar11 = FUN_18003e8e0((longlong)param_2,0,0,0,0,bVar18,0);
        uVar11 = uVar11 & 0xffff;
      }
      uVar16 = *param_1;
      uVar10 = (uint)uVar16;
      uVar6 = param_1[1];
      uVar21 = (uint)uVar6;
      uVar5 = param_1[2];
      uVar19 = (uint)uVar5;
      uVar17 = (uint)param_1[3];
      uVar13 = (uint)uVar16;
      uVar12 = uVar17;
      if (((((uVar16 >> 0xe & 1) != 0) ||
           (uVar10 = uVar21, uVar21 = uVar13, (uVar6 >> 0xe & 1) != 0)) ||
          (uVar10 = uVar19, uVar19 = (uint)uVar6, (uVar5 >> 0xe & 1) != 0)) ||
         (uVar13 = 0, uVar12 = (uint)uVar5, uVar10 = uVar17, (param_1[3] >> 0xe & 1) != 0)) {
        uVar13 = FUN_18003ea30(param_2,uVar10,uVar11,uVar21,uVar19,uVar12,bVar18,param_3);
        uVar13 = uVar13 & 0xffff;
      }
      uVar20 = *(undefined8 *)param_1;
      uVar4 = *(undefined4 *)(param_1 + 4);
      uVar16 = param_1[6];
      uVar6 = (ushort)uVar13;
      if ((*param_1 >> 0xe & 1) != 0) {
        *param_1 = uVar6;
      }
      if ((param_1[1] >> 0xe & 1) != 0) {
        param_1[1] = uVar6;
      }
      if ((param_1[2] >> 0xe & 1) != 0) {
        param_1[2] = uVar6;
      }
      if ((param_1[3] >> 0xe & 1) != 0) {
        param_1[3] = uVar6;
      }
      uVar15 = FUN_18003f680(param_2,param_1,uVar11,iVar3,bVar1,param_3);
      *(undefined8 *)param_1 = uVar20;
      *(undefined4 *)(param_1 + 4) = uVar4;
      param_1[6] = uVar16;
    }
    if ((uVar13 != uVar11) && ((uVar13 & 0xf0) == 0x80)) {
      uVar15 = FUN_180056c30((longlong)param_2,param_2[(ulonglong)(uVar13 & 0xf) + 0x26]);
      *(undefined4 *)(extraout_x14_00 + 0x98) = 0;
    }
    if (bVar8 && bVar9) {
      uVar11 = param_1[5] & 0xf00 | uVar11;
    }
  }
LAB_1800408f4:
  if ((uVar14 == 0x70) && ((uVar11 & 0xf0) != 0x70)) {
    uVar14 = FUN_18003ec58(param_2,(ushort)uVar11,param_4,0,bVar18,param_3,0);
    uVar15 = (ulonglong)uVar14;
    if ((uVar11 & 0xf0) == 0x80) {
      uVar15 = FUN_180056c30((longlong)param_2,param_2[(ulonglong)(uVar11 & 0xf) + 0x26]);
      *(undefined4 *)(extraout_x14_01 + 0x98) = 0;
    }
  }
  return uVar15;
}


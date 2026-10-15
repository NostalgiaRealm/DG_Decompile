/*
 * FUN_10003bf0 at 10003bf0
 * undefined FUN_10003bf0(void)
 * Address ranges: 10003bf0-100041df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10003bf0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
                int *param_6,undefined8 param_7,byte param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int *extraout_w1;
  uint uVar12;
  undefined1 uVar13;
  uint uVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int iVar15;
  int extraout_w12;
  int extraout_w12_00;
  uint extraout_w13;
  int extraout_w13_00;
  int extraout_w14;
  int extraout_w15;
  int extraout_w15_00;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  iVar9 = param_5[2];
  iVar17 = -0x7789f794;
  iVar5 = FUN_10002f00(iVar9);
  iVar10 = param_5[9];
  iVar6 = FUN_10002f00(iVar10);
  iVar7 = FUN_10004650(param_1,param_3);
  uVar12 = param_5[0xc];
  uVar11 = FUN_100034c0(*(undefined4 *)(iVar7 + 0xe8),iVar5);
  if ((uVar11 & 1) != 0) {
    iVar2 = param_5[4];
    if (((iVar2 < 0x11 && extraout_w13 < 4) && extraout_w14 != 0) && extraout_w12 != 0) {
      piVar4 = param_5 + 8;
      iVar3 = *piVar4;
      iVar15 = extraout_w11;
      iVar8 = extraout_w10;
      iVar16 = extraout_w15;
      if ((((iVar3 == 0) ||
           (uVar11 = FUN_100034c0(*(undefined4 *)(iVar7 + 0xdc),iVar6), iVar15 = extraout_w11_00,
           iVar8 = extraout_w10_00, iVar16 = extraout_w15_00, (uVar11 & 1) != 0)) && (iVar15 != 0))
         && ((iVar8 != 0 && (iVar2 == 0 || iVar16 == 1)))) {
        iVar17 = ((param_8 ^ 1) + 0xc43b0435) * 2;
        piVar1 = param_5 + 7;
        iVar15 = *piVar1;
        iVar8 = FUN_10003a80(param_1,param_2,param_3,iVar9,iVar15 != 0,iVar2,0,1);
        if ((-1 < iVar8) &&
           ((iVar3 == 0 ||
            ((iVar9 = FUN_10002a88(param_1,param_3,iVar9,iVar9,iVar10), -1 < iVar9 &&
             (iVar9 = FUN_10003a80(param_1,param_2,param_3,iVar10,iVar15 != 0,iVar2,0,1), -1 < iVar9
             )))))) {
          iVar9 = param_5[6];
          iVar10 = (*(code *)PTR_FUN_101341cc)();
          uVar11 = ZEXT48(param_6 + 1);
          if (iVar9 == iVar10 || iVar9 == 0) {
            iVar9 = param_4;
          }
          *param_6 = iVar9;
          param_6[1] = *param_5;
          param_6[2] = param_5[1];
          param_6[6] = (uint)*(byte *)(iVar5 + 0x1012af68);
          param_6[7] = *param_5;
          param_6[8] = param_5[1];
          param_6[0xb] = 1;
          param_6[0xc] = 1;
          if (uVar12 == 0x80000000) {
            uVar12 = 0;
          }
          else if (uVar12 == 0) {
            uVar12 = (uint)(*piVar1 == 0);
          }
          param_6[0xf] = uVar12;
          param_6[0xe] = param_5[5];
          iVar9 = param_5[3];
          if (iVar9 == 0) {
            iVar9 = 1;
          }
          param_6[0x10] = iVar9;
          param_6[0x13] = param_5[2];
          param_6[0x11] = iVar5;
          if (*piVar4 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = param_5[9];
          }
          param_6[0x14] = iVar9;
          if (*piVar4 == 0) {
            iVar6 = 0x1c;
          }
          param_6[0x12] = iVar6;
          param_6[0x15] = param_5[4];
          param_6[0x16] = 0;
          iVar6 = param_2 * 0x228;
          iVar9 = FUN_100fb748((&DAT_101387c0)[param_2 * 0x8a] + 4);
          param_6[0xd] = iVar9;
          param_6[0x17] = param_2;
          param_6[0x18] = (&DAT_101387d4)[param_2 * 0x8a];
          param_6[0x19] = (&DAT_101387d4)[param_2 * 0x8a] + 1;
          param_6[0x1a] = param_5[10];
          *(byte *)(param_6 + 0x1b) = (byte)param_5[10] & 1;
          *(bool *)((int)param_6 + 0x6d) = *piVar1 != 0;
          if ((*(char *)(DAT_1013ceec + 0x7e5) == '\0') && (*(char *)(DAT_1013ceec + 0x784) != '\0')
             ) {
            uVar13 = 1;
          }
          else {
            uVar13 = 0;
          }
          *(undefined1 *)((int)param_6 + 0x6e) = uVar13;
          *(byte *)((int)param_6 + 0x6f) = (byte)(*(uint *)(iVar7 + 8) >> 0x11) & 1;
          iVar9 = param_5[0xb];
          if (iVar15 == 0) {
            auVar18 = FUN_100306a0();
            if ((iVar9 == 0) || ((auVar18._0_8_ & 1) != 0)) {
              iVar10 = extraout_w12_00 + 0x20c;
            }
            else {
              iVar10 = extraout_w12_00 + 0x200;
            }
            piVar4 = (int *)(iVar10 + param_2 * extraout_w13_00);
            uVar12 = piVar4[1];
            if (uVar12 != 0) {
              uVar14 = 0;
              do {
                piVar1 = (int *)(*piVar4 + uVar14 * 0x18);
                if (((*piVar1 == *param_5) && (piVar1[1] == *auVar18._8_4_)) &&
                   ((iVar9 == 0 ||
                    ((((auVar18._0_8_ & 1) != 0 || (iVar9 == piVar1[4])) || (iVar9 == piVar1[4] + 1)
                     ))))) {
                  param_6[3] = piVar1[2];
                  param_6[4] = piVar1[3];
                  param_6[5] = piVar1[4];
                  FUN_100319a8(uVar11 & 0xffffffff,param_2);
                  *(undefined8 *)(param_6 + 9) = uStack_58;
                  *(undefined8 *)(param_6 + 7) = local_60;
                  *(undefined8 *)(param_6 + 0xb) = local_50;
                  if ((param_5[0xb] != 0) || (uVar11 = FUN_100306a0(), (uVar11 & 1) != 0))
                  goto LAB_100041d8;
                  param_6[9] = *(int *)(&DAT_1013892c + param_2 * 0x45);
                  iVar6 = *(int *)((int)&DAT_1013892c + iVar6 + 4);
                  goto LAB_100041d0;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar12);
            }
          }
          else if (((iVar9 == 0) && (*param_5 != 0)) && (*extraout_w1 != 0)) {
            param_6[3] = *(int *)(&DAT_10138944 + param_2 * 0x45);
            param_6[4] = *(int *)((int)&DAT_10138944 + iVar6 + 4);
            param_6[5] = *(int *)(&DAT_1013894c + param_2 * 0x45);
            param_6[9] = *(int *)(&DAT_10138944 + param_2 * 0x45);
            iVar6 = *(int *)((int)&DAT_10138944 + iVar6 + 4);
LAB_100041d0:
            param_6[10] = iVar6;
LAB_100041d8:
            iVar17 = 0;
          }
        }
      }
    }
  }
  return iVar17;
}


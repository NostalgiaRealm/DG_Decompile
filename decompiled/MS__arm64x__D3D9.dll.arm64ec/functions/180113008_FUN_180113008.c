/*
 * FUN_180113008 at 180113008
 * undefined FUN_180113008(void)
 * Address ranges: 180113008-180113887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180113008(uint *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  ulonglong extraout_x12;
  uint uVar12;
  undefined1 auVar13 [16];
  
  bVar9 = *param_3 & 0x7f;
  if (0x25 < bVar9) {
    if (bVar9 == 0x2e) {
LAB_18011355c:
      uVar3 = FUN_180110be0(param_1,param_2,param_3);
    }
    else if (bVar9 == 0x4e) {
      uVar3 = FUN_1801110a8(param_1,param_2,param_3);
    }
    else if (bVar9 == 0x4f) {
      uVar3 = FUN_180111890(param_1,param_2,param_3);
    }
    else {
      if (bVar9 != 0x5e) {
        if (bVar9 != 0x5f) {
          return;
        }
        uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
        uVar10 = 0;
        uVar8 = (ulonglong)uVar3;
        uVar5 = 0x570200100700;
        goto LAB_180113288;
      }
      uVar3 = FUN_180110b10(param_1,param_2,param_3);
    }
    goto LAB_180113570;
  }
  switch(bVar9) {
  case 1:
    if (*(short *)(param_3 + 0x11) == 0x429) goto LAB_18011355c;
  case 0x23:
    if (bVar9 == 1) {
      bVar9 = param_3[10];
    }
    else {
      bVar9 = 2;
    }
    uVar8 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),param_3[7],bVar9,param_3[0xd]
                          ,0,0);
    FUN_18010f138(param_1,uVar8 & 0xffffffff);
    uVar12 = (uint)uVar8;
    if ((int)uVar12 < 0) {
LAB_18011316c:
      uVar11 = *(undefined2 *)(param_3 + 0x11);
      if ((param_3[0x13] != 0xc3) || (bVar2 = true, param_3[0x10] != 0 && param_3[0x10] != 0xf)) {
        bVar2 = false;
      }
      if (!bVar2) {
        uVar11 = 0xffff;
      }
      uVar3 = FUN_18010eb78(param_1,param_2,uVar11);
      if (uVar3 != uVar12) {
        FUN_1801060c0(param_2,0x290200100100,uVar3,uVar8 & 0xffffffff,uVar8 >> 0x20,0);
      }
    }
    else if ((((ushort)(*(ushort *)(param_3 + 0x11) - 0x44d) < 0xd) &&
             (param_3[0x10] == 0 || param_3[0x10] == 0xf)) && (param_3[0x13] == 0xc3)) {
      uVar3 = 0xffffffff;
      FUN_1801060c0(param_2,0x290200100100,*param_1 | 0x80000000,uVar8 & 0xffffffff,
                    (ulonglong)*(ushort *)(param_3 + 0x11) << 4,0);
      uVar10 = 0;
      do {
        if (param_1[uVar10 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
          param_1[uVar10 + 6] = 0xffffffff;
          break;
        }
        uVar12 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar12;
      } while (uVar12 < 0x10);
    }
    else if (((param_3[0x10] != 0 && param_3[0x10] != 0xf) || (param_3[0x13] != 0xc3)) ||
            (uVar3 = uVar12, param_1[(uVar8 & 0xff) + 6] != 0xffffffff)) goto LAB_18011316c;
LAB_1801131d4:
    FUN_18010f108(param_1,uVar8 & 0xffffffff);
    break;
  case 2:
    uVar7 = 0x580201300700;
    uVar5 = 0x580200100700;
    goto LAB_1801131ec;
  default:
    goto switchD_180113058_caseD_3;
  case 4:
    uVar3 = FUN_18010f2c0(param_1,param_2,param_3,0x590200100700,0x590201300700,0,1);
    FUN_18010f138(param_1,uVar3);
    FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 5),param_3[9],param_3[0xc],param_3[0xf],
                  0,0);
    FUN_18010f108(param_1,uVar3);
    uVar5 = 0x580201300700;
    if (param_3[0x10] != 1) {
      uVar5 = 0x580200100700;
    }
    uVar10 = extraout_x12 >> 0x20;
    uVar8 = extraout_x12 & 0xffffffff;
    goto LAB_180113288;
  case 5:
    uVar7 = 0x590201300700;
    uVar5 = 0x590200100700;
    goto LAB_1801131ec;
  case 6:
    uVar5 = 0x530200100700;
    goto LAB_1801132ac;
  case 7:
    uVar5 = 0x520200100700;
LAB_1801132ac:
    uVar3 = FUN_18010f488(param_1,param_2,param_3,uVar5);
    break;
  case 8:
    uVar5 = 0;
    goto LAB_1801132cc;
  case 9:
    uVar5 = 1;
LAB_1801132cc:
    uVar3 = FUN_18010f820(param_1,param_2,param_3,uVar5);
    break;
  case 10:
    uVar7 = 0x5d0201300700;
    uVar5 = 0x5d0200100700;
    goto LAB_1801131ec;
  case 0xb:
    uVar7 = 0x5f0201300700;
    uVar5 = 0x5f0200100700;
LAB_1801131ec:
    uVar3 = FUN_18010f2c0(param_1,param_2,param_3,uVar5,uVar7,0,0);
    break;
  case 0xc:
    uVar5 = 1;
    goto LAB_180113304;
  case 0xd:
    uVar5 = 5;
LAB_180113304:
    uVar3 = FUN_18010f2c0(param_1,param_2,param_3,0xc20200130700,0xc20201330700,uVar5,0);
    uVar10 = 0x120;
    uVar5 = 0x540200100700;
    uVar8 = (ulonglong)(param_1[1] | 0x80000000);
LAB_180113288:
    FUN_1801060c0(param_2,uVar5,uVar3,uVar8,uVar10,0);
    break;
  case 0xe:
    uVar8 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),param_3[7],param_3[10],
                          param_3[0xd],1,0);
    FUN_18010f138(param_1,uVar8 & 0xffffffff);
    uVar3 = FUN_180110d18(param_1,param_2,uVar8 & 0xffffffff);
    goto LAB_1801131d4;
  case 0xf:
    uVar8 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),param_3[7],2,param_3[0xd],1,0
                         );
    FUN_18010f138(param_1,uVar8 & 0xffffffff);
    uVar3 = FUN_180111590(param_1,param_2,uVar8 & 0xffffffff);
    goto LAB_1801131d4;
  case 0x10:
    uVar3 = FUN_180111cb8(param_1,param_2,param_3);
    break;
  case 0x11:
    uVar3 = FUN_18010f8f8(param_1,param_2,param_3);
    break;
  case 0x12:
    uVar3 = FUN_180110368(param_1,param_2,param_3);
    break;
  case 0x13:
    uVar3 = FUN_18010fac8(param_1,param_2,param_3);
    break;
  case 0x14:
    uVar5 = 0;
    goto LAB_180113380;
  case 0x15:
    uVar5 = 0;
    goto LAB_18011339c;
  case 0x16:
    uVar5 = 1;
LAB_180113380:
    uVar7 = 1;
LAB_180113384:
    uVar3 = FUN_18010fbe0(param_1,param_2,param_3,uVar7,uVar5);
    break;
  case 0x17:
    uVar5 = 1;
LAB_18011339c:
    uVar7 = 0;
    goto LAB_180113384;
  case 0x18:
    uVar3 = FUN_180110090(param_1,param_2,param_3);
    break;
  case 0x20:
    uVar3 = FUN_180111bc0(param_1,param_2,param_3);
    break;
  case 0x21:
    uVar3 = FUN_1801106a0(param_1,param_2,param_3);
    break;
  case 0x22:
    uVar3 = FUN_180110918(param_1,param_2,param_3);
    break;
  case 0x24:
    uVar3 = FUN_1801104a8(param_1,param_2,param_3);
    break;
  case 0x25:
    uVar3 = FUN_180112090(param_1,param_2,param_3);
  }
LAB_180113570:
  if (uVar3 != 0xffffffff) {
    bVar9 = (byte)uVar3;
    if ((param_3[0x10] == 0 || param_3[0x10] == 0xf) && (param_3[0x13] == 0xc3)) {
      uVar8 = 0;
      do {
        if (param_1[uVar8 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
          param_1[uVar8 + 6] = 0xffffffff;
          break;
        }
        uVar3 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar3;
      } while (uVar3 < 0x10);
      param_1[(ulonglong)bVar9 + 6] = (uint)*(ushort *)(param_3 + 0x11);
    }
    else {
      FUN_18010f138(param_1,uVar3);
      bVar1 = param_3[0x13];
      if (bVar1 == 0xc3) {
        if (param_3[0x10] == 1) {
          uVar8 = FUN_18010ec78(param_1,extraout_x1,*(undefined2 *)(param_3 + 0x11));
          FUN_1801060c0(param_2,0x110201300100,uVar8 & 0xffffffff,uVar3,uVar8 >> 0x20,0);
        }
        else {
          auVar13 = FUN_18010eb78(param_1,param_2,0xffff);
          uVar10 = auVar13._0_8_ & 0xffffffff;
          uVar8 = FUN_18010ec78(param_1,auVar13._8_8_,*(undefined2 *)(param_3 + 0x11));
          FUN_1801060c0(param_2,0x290200100100,uVar10,param_1[1] | 0x80000000,
                        (ulonglong)param_3[0x10] << 4,0);
          FUN_1801060c0(param_2,0x540200100700,uVar3,uVar10,0,0);
          FUN_1801060c0(param_2,0x550200100700,uVar10,uVar8 & 0xffffffff,uVar8 >> 0x20,0);
          FUN_1801060c0(param_2,0x560200100700,uVar3,uVar10,0,0);
          uVar8 = 0;
          do {
            if (param_1[uVar8 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
              param_1[uVar8 + 6] = 0xffffffff;
              break;
            }
            uVar12 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar12;
          } while (uVar12 < 0x10);
          param_1[(ulonglong)bVar9 + 6] = (uint)*(ushort *)(param_3 + 0x11);
        }
      }
      else {
        uVar12 = (uint)bVar1;
        if (((bVar1 == 0x57 || uVar12 == 2) || uVar12 == 0xac) || uVar12 == 0xe6) {
          iVar6 = uVar12 + 0xfe;
          uVar5 = 0x550200100700;
        }
        else {
          uVar5 = 0x540200100700;
          iVar6 = 0xe4;
        }
        uVar8 = FUN_18010ecc8(param_1,param_2,0x42a,iVar6,0,0,0,0);
        FUN_18010f138(param_1,uVar8 & 0xffffffff);
        uVar4 = FUN_18010eb78(param_1,param_2,0xffff);
        FUN_1801060c0(param_2,0x290200100100,uVar4,uVar8 & 0xffffffff,uVar8 >> 0x20,0);
        FUN_1801060c0(param_2,uVar5,uVar4,param_1[1] | 0x80000000,(ulonglong)param_3[0x10] << 4,0);
        FUN_1801060c0(param_2,0x540200100700,uVar3,uVar4,0,0);
        uVar10 = FUN_18010ec78(param_1,extraout_x1_00,*(undefined2 *)(param_3 + 0x11));
        FUN_1801060c0(param_2,0x550200100700,uVar4,uVar10 & 0xffffffff,uVar10 >> 0x20,0);
        FUN_1801060c0(param_2,0x560200100700,uVar3,uVar4,0,0);
        uVar10 = 0;
        do {
          if (param_1[uVar10 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
            param_1[uVar10 + 6] = 0xffffffff;
            break;
          }
          uVar12 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar12;
        } while (uVar12 < 0x10);
        param_1[(ulonglong)bVar9 + 6] = (uint)*(ushort *)(param_3 + 0x11);
        FUN_18010f108(param_1,uVar8 & 0xffffffff);
      }
      FUN_18010f108(param_1,uVar3);
    }
  }
switchD_180113058_caseD_3:
  return;
}


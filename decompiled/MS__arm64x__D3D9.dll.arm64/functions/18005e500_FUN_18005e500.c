/*
 * FUN_18005e500 at 18005e500
 * undefined FUN_18005e500(void)
 * Address ranges: 18005e500-18005e9e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e500(undefined8 param_1,longlong param_2,uint param_3,longlong param_4,byte param_5)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  longlong lVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  uint extraout_w12;
  uint extraout_w12_00;
  ushort *extraout_x14;
  ulonglong uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  undefined1 auVar22 [16];
  short sStack_70;
  undefined4 local_6e;
  uint local_68 [4];
  uint local_58 [6];
  
  uVar6 = (ulonglong)param_5;
  uVar2 = param_3 << 2;
  uVar18 = ((ulonglong)param_3 + (uVar6 + 2) * 8) * 0x10;
  uVar17 = *(uint *)(param_2 + (ulonglong)param_3 * 4);
  puVar5 = (ushort *)(uVar18 + param_4);
  if ((param_5 & 1) == 0) {
    local_58[0] = uVar17 >> 0x16 & 7;
    local_58[1] = uVar17 >> 10 & 7;
    local_58[2] = uVar17 >> 0xd & 7;
    uVar16 = *(uint *)(param_2 + 0x20);
    uVar8 = *(uint *)(param_2 + 0x24);
    uVar10 = *(uint *)(param_2 + 0x28);
  }
  else {
    local_58[0] = uVar17 >> 0x19 & 7;
    local_58[1] = uVar17 >> 0x10 & 7;
    local_58[2] = uVar17 >> 0x13 & 7;
    uVar16 = *(uint *)(param_2 + 0x2c);
    uVar8 = *(uint *)(param_2 + 0x30);
    uVar10 = *(uint *)(param_2 + 0x34);
  }
  lVar1 = param_4 + uVar6 * 8;
  local_6e = 0;
  local_68[2] = (uVar10 >> (ulonglong)(uVar2 & 0x1f) & 0xf) << 4;
  uVar10 = uVar17;
  if (param_5 != 0) {
    uVar10 = uVar17 >> 5;
  }
  uVar10 = uVar10 & 0x1f;
  local_68[0] = (uVar16 >> (ulonglong)(uVar2 & 0x1f) & 0xf) << 4;
  local_68[1] = (uVar8 >> (ulonglong)(uVar2 & 0x1f) & 0xf) << 4;
  uVar9 = 0x20;
  if ((uVar17 & 0x70000000) != 0x50000000) {
    uVar9 = 0x10;
  }
  *puVar5 = uVar9 | (ushort)param_5 << 8;
  lVar12 = (uVar6 + 0xa8) * 8;
  lVar11 = 0;
  bVar3 = false;
  do {
    if (((local_68[lVar11] >> 5 & 1) == 0) && (param_5 == 0 || uVar10 == 0x18)) {
      bVar4 = false;
      uVar9 = 0x50;
      uVar21 = 0x30;
      uVar20 = 0x40;
      uVar19 = 0x70;
      uVar13 = 0x60;
    }
    else {
      bVar4 = true;
      uVar9 = 0x150;
      uVar21 = 0x130;
      uVar20 = 0x140;
      uVar19 = 0x170;
      uVar13 = 0x160;
    }
    uVar17 = local_68[lVar11] & 0x10;
    uVar7 = 0x200;
    if (uVar17 == 0) {
      uVar7 = 0;
    }
    switch(local_58[lVar11]) {
    case 0:
      uVar9 = uVar21 | (ushort)(uVar17 != 0) << 9;
      goto LAB_18005e678;
    case 1:
      lVar14 = lVar12;
      if ((param_5 & 1) == 0) {
        if (bVar4) goto LAB_18005e6ec;
      }
      else if (bVar4) {
LAB_18005e6ec:
        lVar14 = 0x548;
      }
      else if (uVar10 == 0x18) {
        lVar14 = 0x54c;
      }
      puVar5[lVar11 + 1] = *(ushort *)(lVar14 + param_4) ^ uVar7;
      (&sStack_70)[lVar11] = 0x10;
      break;
    case 2:
      puVar5[lVar11 + 1] = (ushort)param_3 & 0xff | uVar7 | uVar19;
      bVar3 = true;
      break;
    case 3:
      uVar9 = uVar13 | (ushort)(uVar17 != 0) << 9;
      goto LAB_18005e678;
    case 4:
      uVar9 = uVar20 | (ushort)(uVar17 != 0) << 9;
      goto LAB_18005e678;
    case 5:
      if ((param_5 & 1) == 0) {
        if (bVar4) goto LAB_18005e730;
LAB_18005e738:
        puVar15 = (ushort *)(lVar1 + 0x542);
      }
      else if (bVar4) {
LAB_18005e730:
        puVar15 = (ushort *)(param_4 + 0x54a);
      }
      else {
        if (uVar10 != 0x18) goto LAB_18005e738;
        puVar15 = (ushort *)(param_4 + 0x54e);
      }
      puVar5[lVar11 + 1] = *puVar15 ^ uVar7;
      (&sStack_70)[lVar11] = 0x20;
      break;
    case 6:
      uVar9 = uVar9 | (ushort)(uVar17 != 0) << 9;
LAB_18005e678:
      puVar5[lVar11 + 1] = uVar9;
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  if (bVar3) {
    uVar9 = *(ushort *)(param_4 + 0x544);
  }
  else {
    uVar9 = 0;
  }
  puVar5[4] = uVar9;
  if (bVar3) {
    uVar9 = *(ushort *)(param_4 + 0x546);
  }
  else {
    uVar9 = 0;
  }
  puVar5[5] = uVar9;
  puVar5[6] = 0;
  puVar5[7] = 0;
  if ((param_5 & 1) == 0) {
    *(undefined4 *)(param_4 + 0x544) = 0;
  }
  if ((uVar10 < 0x19) && ((0x1000ff0U >> (ulonglong)uVar10 & 1) != 0)) {
    puVar5[1] = 0;
    goto LAB_18005e9c8;
  }
  if (uVar10 - 0x12 < 4) {
    if ((puVar5[2] & 0xf0) == 0xa0) {
      uVar9 = *(ushort *)(param_4 + 0x548);
    }
    else {
      uVar9 = puVar5[2] | 0x100;
    }
  }
  else {
    if ((uVar10 - 0xd & 0xfffffffd) != 0) {
      if (uVar10 - 0x16 < 2) {
        puVar5[1] = 0;
        lVar11 = lVar12;
        if (param_5 != 0) {
          lVar11 = 0x548;
        }
        uVar9 = *(ushort *)(param_4 + lVar11);
        puVar5[3] = uVar9;
        if ((uVar9 & 0xf0) == 0x70) {
          auVar22 = func_0x00018016efd0();
          param_4 = auVar22._8_8_;
          puVar5 = auVar22._0_8_;
        }
        else {
          if ((*puVar5 & 0xf0) == 0x10) {
            *(ushort *)(param_4 + lVar12) = uVar9;
          }
          if ((*puVar5 & 0xf0) == 0x20) {
            *(ushort *)(lVar1 + 0x542) = puVar5[3];
          }
        }
        if ((uVar6 & 1) != 0) {
          return;
        }
        puVar5[6] = 0x90;
        *(undefined2 *)(param_4 + 0x544) = 0x90;
        if (uVar10 != 0x17) {
          return;
        }
        puVar5[7] = 0x90;
        *(undefined2 *)(param_4 + 0x546) = 0x90;
        return;
      }
      if (uVar10 - 0x19 < 2) goto LAB_18005e9c8;
      if (uVar10 == 1) {
        puVar15 = puVar5 + 2;
        puVar5[2] = *(ushort *)(param_4 + 0x548);
      }
      else {
        if (uVar10 != 2) {
          if (uVar10 == 3) {
            if ((puVar5[3] & 0xf0) != 0x70) {
              uVar17 = (uint)local_6e._2_2_;
              if ((*puVar5 & 0xf0) == 0x10) {
                if (local_6e._2_2_ == 0x20) {
                  puVar5 = (ushort *)func_0x00018016efd0();
                  uVar17 = extraout_w12;
                }
                else {
                  *(ushort *)(param_4 + lVar12) = puVar5[3];
                }
              }
              if ((*puVar5 & 0xf0) != 0x20) goto LAB_18005e890;
              if (uVar17 != 0x10) {
                *(ushort *)(lVar1 + 0x542) = puVar5[3];
                goto LAB_18005e890;
              }
            }
            puVar5 = (ushort *)func_0x00018016efd0();
LAB_18005e890:
            puVar5[1] = 0;
            puVar5[2] = 0;
            return;
          }
          if (uVar10 == 0xe) {
            uVar9 = 0x160;
          }
          else if (uVar10 == 0x10) {
            uVar9 = *(ushort *)(param_4 + 0x548);
          }
          else {
            if (uVar10 != 0xc) {
              *puVar5 = 0;
              return;
            }
            uVar9 = 0x130;
          }
          goto LAB_18005e9c4;
        }
        puVar15 = (ushort *)((uVar18 | 4) + param_4);
      }
      if ((*puVar15 & 0xf0) != 0x70) {
        uVar17 = local_6e & 0xffff;
        if ((*puVar5 & 0xf0) == 0x10) {
          if ((short)local_6e == 0x20) {
            puVar5 = (ushort *)func_0x00018016efd0();
            puVar15 = extraout_x14;
            uVar17 = extraout_w12_00;
          }
          else {
            *(ushort *)(param_4 + lVar12) = *puVar15;
          }
        }
        if ((*puVar5 & 0xf0) != 0x20) goto LAB_18005e910;
        if (uVar17 != 0x10) {
          *(ushort *)(lVar1 + 0x542) = *puVar15;
          goto LAB_18005e910;
        }
      }
      puVar5 = (ushort *)func_0x00018016efd0();
LAB_18005e910:
      puVar5[3] = 0;
      puVar5[1] = 0;
      return;
    }
    uVar9 = (ushort)param_3 & 0xff | 0x170;
  }
LAB_18005e9c4:
  puVar5[1] = uVar9;
LAB_18005e9c8:
  func_0x00018016efd0();
  return;
}


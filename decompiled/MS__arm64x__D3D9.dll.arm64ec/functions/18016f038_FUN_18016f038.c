/*
 * FUN_18016f038 at 18016f038
 * undefined FUN_18016f038(void)
 * Address ranges: 18016f038-18016f523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016f038(undefined8 param_1,longlong param_2,uint param_3,longlong param_4,byte param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ushort *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ushort *extraout_x10;
  ushort *puVar12;
  short sVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  uint extraout_w15;
  uint extraout_w15_00;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  undefined1 auVar22 [16];
  short sStack_70;
  undefined4 local_6e;
  ulonglong local_68;
  uint local_60 [4];
  uint local_50 [4];
  
  uVar5 = (ulonglong)param_5;
  uVar1 = param_3 << 2;
  local_68 = ((ulonglong)param_3 + (uVar5 + 2) * 8) * 0x10;
  puVar4 = (ushort *)(local_68 + param_4);
  uVar17 = *(uint *)(param_2 + (ulonglong)param_3 * 4);
  if ((param_5 & 1) == 0) {
    local_50[0] = uVar17 >> 0x16 & 7;
    local_50[1] = uVar17 >> 10 & 7;
    local_50[2] = uVar17 >> 0xd & 7;
    uVar16 = *(uint *)(param_2 + 0x20);
    uVar14 = *(uint *)(param_2 + 0x24);
    uVar8 = *(uint *)(param_2 + 0x28);
  }
  else {
    local_50[0] = uVar17 >> 0x19 & 7;
    local_50[1] = uVar17 >> 0x10 & 7;
    local_50[2] = uVar17 >> 0x13 & 7;
    uVar16 = *(uint *)(param_2 + 0x2c);
    uVar14 = *(uint *)(param_2 + 0x30);
    uVar8 = *(uint *)(param_2 + 0x34);
  }
  lVar6 = param_4 + uVar5 * 8;
  local_6e = 0;
  local_60[2] = (uVar8 >> (ulonglong)(uVar1 & 0x1f) & 0xf) << 4;
  uVar8 = uVar17;
  if (param_5 != 0) {
    uVar8 = uVar17 >> 5;
  }
  uVar8 = uVar8 & 0x1f;
  local_60[0] = (uVar16 >> (ulonglong)(uVar1 & 0x1f) & 0xf) << 4;
  local_60[1] = (uVar14 >> (ulonglong)(uVar1 & 0x1f) & 0xf) << 4;
  uVar7 = 0x20;
  if ((uVar17 & 0x70000000) != 0x50000000) {
    uVar7 = 0x10;
  }
  *puVar4 = uVar7 | (ushort)param_5 << 8;
  lVar10 = (uVar5 + 0xa8) * 8;
  lVar9 = 0;
  bVar2 = false;
  do {
    if (((local_60[lVar9] >> 5 & 1) == 0) && (param_5 == 0 || uVar8 == 0x18)) {
      bVar3 = false;
      uVar7 = 0x50;
      uVar21 = 0x30;
      uVar20 = 0x40;
      uVar19 = 0x70;
      uVar18 = 0x60;
    }
    else {
      bVar3 = true;
      uVar7 = 0x150;
      uVar21 = 0x130;
      uVar20 = 0x140;
      uVar19 = 0x170;
      uVar18 = 0x160;
    }
    uVar17 = local_60[lVar9] & 0x10;
    uVar15 = 0x200;
    if (uVar17 == 0) {
      uVar15 = 0;
    }
    switch(local_50[lVar9]) {
    case 0:
      uVar7 = uVar21 | (ushort)(uVar17 != 0) << 9;
      break;
    case 1:
      lVar11 = lVar10;
      if ((param_5 & 1) == 0) {
        if (bVar3) goto LAB_18016f228;
      }
      else if (bVar3) {
LAB_18016f228:
        lVar11 = 0x548;
      }
      else if (uVar8 == 0x18) {
        lVar11 = 0x54c;
      }
      puVar4[lVar9 + 1] = *(ushort *)(lVar11 + param_4) ^ uVar15;
      sVar13 = 0x10;
      goto LAB_18016f288;
    case 2:
      puVar4[lVar9 + 1] = (ushort)param_3 & 0xff | uVar15 | uVar19;
      bVar2 = true;
      goto switchD_18016f1a4_default;
    case 3:
      uVar7 = uVar18 | (ushort)(uVar17 != 0) << 9;
      break;
    case 4:
      uVar7 = uVar20 | (ushort)(uVar17 != 0) << 9;
      break;
    case 5:
      if ((param_5 & 1) == 0) {
        if (bVar3) goto LAB_18016f268;
LAB_18016f270:
        puVar12 = (ushort *)(lVar6 + 0x542);
      }
      else if (bVar3) {
LAB_18016f268:
        puVar12 = (ushort *)(param_4 + 0x54a);
      }
      else {
        if (uVar8 != 0x18) goto LAB_18016f270;
        puVar12 = (ushort *)(param_4 + 0x54e);
      }
      puVar4[lVar9 + 1] = *puVar12 ^ uVar15;
      sVar13 = 0x20;
LAB_18016f288:
      (&sStack_70)[lVar9] = sVar13;
      goto switchD_18016f1a4_default;
    case 6:
      uVar7 = uVar7 | (ushort)(uVar17 != 0) << 9;
      break;
    default:
      goto switchD_18016f1a4_default;
    }
    puVar4[lVar9 + 1] = uVar7;
switchD_18016f1a4_default:
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  if (bVar2) {
    uVar7 = *(ushort *)(param_4 + 0x544);
  }
  else {
    uVar7 = 0;
  }
  puVar4[4] = uVar7;
  if (bVar2) {
    uVar7 = *(ushort *)(param_4 + 0x546);
  }
  else {
    uVar7 = 0;
  }
  puVar4[5] = uVar7;
  puVar4[6] = 0;
  puVar4[7] = 0;
  if ((param_5 & 1) == 0) {
    *(undefined4 *)(param_4 + 0x544) = 0;
  }
  if ((uVar8 < 0x19) && ((0x1000ff0U >> (ulonglong)uVar8 & 1) != 0)) {
    puVar4[1] = 0;
    goto LAB_18016f508;
  }
  if (uVar8 - 0x12 < 4) {
    if ((puVar4[2] & 0xf0) == 0xa0) {
      uVar7 = *(ushort *)(param_4 + 0x548);
    }
    else {
      uVar7 = puVar4[2] | 0x100;
    }
  }
  else {
    if ((uVar8 - 0xd & 0xfffffffd) != 0) {
      if (uVar8 - 0x16 < 2) {
        puVar4[1] = 0;
        lVar9 = lVar10;
        if (param_5 != 0) {
          lVar9 = 0x548;
        }
        uVar7 = *(ushort *)(param_4 + lVar9);
        puVar4[3] = uVar7;
        if ((uVar7 & 0xf0) == 0x70) {
          auVar22 = FUN_18016efd0();
          param_4 = auVar22._8_8_;
          puVar4 = auVar22._0_8_;
        }
        else {
          if ((*puVar4 & 0xf0) == 0x10) {
            *(ushort *)(param_4 + lVar10) = uVar7;
          }
          if ((*puVar4 & 0xf0) == 0x20) {
            *(ushort *)(lVar6 + 0x542) = puVar4[3];
          }
        }
        if ((uVar5 & 1) != 0) {
          return;
        }
        puVar4[6] = 0x90;
        *(undefined2 *)(param_4 + 0x544) = 0x90;
        if (uVar8 != 0x17) {
          return;
        }
        puVar4[7] = 0x90;
        *(undefined2 *)(param_4 + 0x546) = 0x90;
        return;
      }
      if (uVar8 - 0x19 < 2) goto LAB_18016f508;
      if (uVar8 == 1) {
        puVar12 = puVar4 + 2;
        puVar4[2] = *(ushort *)(param_4 + 0x548);
      }
      else {
        if (uVar8 != 2) {
          if (uVar8 == 3) {
            if ((puVar4[3] & 0xf0) != 0x70) {
              uVar17 = (uint)local_6e._2_2_;
              if ((*puVar4 & 0xf0) == 0x10) {
                if (local_6e._2_2_ == 0x20) {
                  puVar4 = (ushort *)FUN_18016efd0();
                  uVar17 = extraout_w15;
                }
                else {
                  *(ushort *)(param_4 + lVar10) = puVar4[3];
                }
              }
              if ((*puVar4 & 0xf0) != 0x20) goto LAB_18016f3cc;
              if (uVar17 != 0x10) {
                *(ushort *)(lVar6 + 0x542) = puVar4[3];
                goto LAB_18016f3cc;
              }
            }
            puVar4 = (ushort *)FUN_18016efd0();
LAB_18016f3cc:
            puVar4[1] = 0;
            puVar4[2] = 0;
            return;
          }
          if (uVar8 == 0xe) {
            uVar7 = 0x160;
          }
          else if (uVar8 == 0x10) {
            uVar7 = *(ushort *)(param_4 + 0x548);
          }
          else {
            if (uVar8 != 0xc) {
              *puVar4 = 0;
              return;
            }
            uVar7 = 0x130;
          }
          goto LAB_18016f504;
        }
        puVar12 = (ushort *)((local_68 | 4) + param_4);
      }
      if ((*puVar12 & 0xf0) != 0x70) {
        uVar17 = local_6e & 0xffff;
        if ((*puVar4 & 0xf0) == 0x10) {
          if ((short)local_6e == 0x20) {
            puVar4 = (ushort *)FUN_18016efd0();
            puVar12 = extraout_x10;
            uVar17 = extraout_w15_00;
          }
          else {
            *(ushort *)(param_4 + lVar10) = *puVar12;
          }
        }
        if ((*puVar4 & 0xf0) != 0x20) goto LAB_18016f450;
        if (uVar17 != 0x10) {
          *(ushort *)(lVar6 + 0x542) = *puVar12;
          goto LAB_18016f450;
        }
      }
      puVar4 = (ushort *)FUN_18016efd0();
LAB_18016f450:
      puVar4[3] = 0;
      puVar4[1] = 0;
      return;
    }
    uVar7 = (ushort)param_3 & 0xff | 0x170;
  }
LAB_18016f504:
  puVar4[1] = uVar7;
LAB_18016f508:
  FUN_18016efd0();
  return;
}


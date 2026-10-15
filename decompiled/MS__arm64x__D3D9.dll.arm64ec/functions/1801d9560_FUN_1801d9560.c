/*
 * FUN_1801d9560 at 1801d9560
 * undefined FUN_1801d9560(void)
 * Address ranges: 1801d9560-1801d9a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801d9560(undefined8 *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                 int param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint extraout_w1;
  uint uVar10;
  ulonglong uVar11;
  int extraout_w9;
  undefined8 uVar12;
  uint extraout_w10;
  uint *puVar13;
  uint extraout_w11;
  uint *puVar14;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  undefined2 uVar15;
  longlong lVar17;
  undefined8 *local_48;
  uint uVar16;
  
  local_48 = param_8;
  if (((*(uint *)(param_1 + -0xb38) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar4 = true;
    iVar6 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar6 == 0) {
      FUN_1801085c8();
    }
  }
  uVar7 = 0;
  uVar8 = 0x2a;
  uVar16 = param_3;
  if (param_7 == (undefined8 *)0x0) goto LAB_1801d97f8;
  *param_7 = 0;
  iVar5 = FUN_1801074b0(param_1[-0xb42],*(undefined4 *)(param_1 + -0xb32),
                        *(undefined4 *)(param_1 + -0xb3a),*(undefined4 *)(param_1 + -0xb36),param_6,
                        param_4,5,param_5,0);
  iVar6 = iVar5;
  if (iVar5 == 0x876086f) {
    iVar6 = 0;
  }
  iVar1 = iVar6;
  if (1 < param_3) {
    iVar1 = -0x7789f794;
  }
  if ((param_4 & 0x400) != 0) {
    iVar6 = iVar1;
  }
  if (-1 < iVar6) {
    uVar10 = param_2;
    if (param_2 == 0) {
      uVar10 = 1;
    }
    uVar11 = (ulonglong)uVar10;
    uVar16 = 0;
    while (uVar10 != 0) {
      uVar16 = uVar16 + 1;
      uVar11 = uVar11 >> 1;
      uVar10 = (uint)uVar11;
    }
    if (param_3 != 0) {
      uVar16 = param_3;
    }
    FUN_180107140(param_5);
    FUN_1801071f0(extraout_x12 & 0xffffffff);
    iVar6 = FUN_180107018(extraout_x12_00 & 0xffffffff);
    if (((extraout_w11 - 1 & param_2) != 0 && extraout_w11 <= param_2) ||
       (bVar3 = true, (extraout_w10 - 1 & param_2) != 0 && extraout_w10 <= param_2)) {
      bVar3 = false;
    }
    if (param_2 != 0) {
      if (*(int *)(param_1 + -0xb3a) == 2) {
        puVar14 = &DAT_1802462c8;
        puVar13 = &DAT_1802462cc;
      }
      else {
        puVar14 = (uint *)(&DAT_180246478 + (ulonglong)*(uint *)(param_1[-0xb42] + 0x10) * 0x1b0);
        puVar13 = (uint *)(&DAT_18024647c + (ulonglong)*(uint *)(param_1[-0xb42] + 0x10) * 0x1b0);
      }
      if (((param_2 <= *puVar14) && (param_2 <= *puVar13)) &&
         ((bVar3 || iVar6 < 1) && uVar16 <= extraout_w1)) {
        if (param_6 == 0) {
          if (*(int *)(param_1 + -0xb3a) == 1) {
            uVar7 = FUN_18011a3a8(param_2,param_2,uVar16,6,param_5);
          }
          else {
            uVar7 = 0;
          }
LAB_1801d97d0:
          uVar8 = FUN_180106a90(param_5);
          iVar6 = extraout_w9;
          if (extraout_w9 < 0) goto LAB_1801d97fc;
        }
        else {
          uVar7 = 0;
          if (param_6 != 3) goto LAB_1801d97d0;
          uVar8 = 0x2a;
          uVar7 = 0;
        }
        iVar6 = iVar5;
        goto LAB_1801d97fc;
      }
    }
LAB_1801d97f8:
    iVar6 = -0x7789f794;
  }
LAB_1801d97fc:
  uVar15 = (undefined2)uVar16;
  if (iVar6 == 0x876086f) {
    iVar6 = 0;
    uVar15 = 1;
  }
  if ((-1 < iVar6) && (iVar6 = -0x7789f794, local_48 == (undefined8 *)0x0)) {
    iVar6 = -0x7ff8fff2;
    uVar12 = param_1[-0xb34];
    local_48 = param_1;
    puVar9 = (undefined8 *)FUN_1802229a8(0x418);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x14] = 0;
      puVar9[0x15] = puVar9 + 0x13;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar2 = (undefined8 *)0x0;
      if (local_48 != (undefined8 *)0x6838) {
        puVar2 = local_48;
      }
      puVar9[2] = 0;
      puVar9[3] = puVar2;
      *(undefined4 *)(puVar9 + 7) = 0;
      *(undefined4 *)(puVar9 + 4) = 5;
      *(undefined2 *)((longlong)puVar9 + 0x3c) = uVar15;
      puVar9[8] = puVar9 + 0x16;
      puVar9[9] = puVar9 + 0x76;
      puVar9[0xc] = 0;
      *(uint *)(puVar9 + 0xd) = param_2;
      *(uint *)((longlong)puVar9 + 0x6c) = param_2;
      *(undefined2 *)(puVar9 + 0x11) = 0;
      puVar9[10] = uVar12;
      puVar9[0xb] = 0;
      *(uint *)(puVar9 + 0xe) = param_4;
      *(undefined4 *)((longlong)puVar9 + 0x74) = param_5;
      *(undefined4 *)(puVar9 + 0xf) = uVar8;
      *(int *)((longlong)puVar9 + 0x7c) = param_6;
      *(undefined4 *)(puVar9 + 0x10) = 6;
      *(uint *)((longlong)puVar9 + 0x84) = uVar7;
      *puVar9 = &PTR_FUN_18022e3c0;
      puVar9[1] = 0;
      puVar9[0x12] = &PTR_FUN_180229728;
      puVar9[0x13] = &PTR_FUN_18022e310;
      *(undefined4 *)(puVar9 + 0x82) = 2;
      FUN_180222c50(puVar9 + 0x16,0,0x300);
      lVar17 = 0;
      do {
        thunk_FUN_180223c20(puVar9 + lVar17 * 2 + 0x76,0,0,param_2,param_2);
        lVar17 = lVar17 + 1;
      } while (lVar17 != 6);
      iVar6 = -0x7ff8fff2;
      lVar17 = 0;
      if (puVar9[3] != 0) {
        lVar17 = puVar9[3] + -0x6838;
      }
      uVar11 = FUN_180119b20(puVar9,lVar17);
      if ((uVar11 & 1) != 0) {
        local_48 = puVar9;
        uVar11 = FUN_18010be98(param_1 + -0xb2d,&local_48);
        if ((uVar11 & 1) == 0) {
          iVar6 = -0x7ff8fff2;
        }
        else {
          iVar6 = FUN_1801c1ab0(puVar9 + 0x13,&DAT_180229238,param_7);
          if (-1 < iVar6) {
            (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0xb32) * 0x4b] =
                 (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0xb32) * 0x4b] - (ulonglong)uVar7;
            puVar2 = (undefined8 *)0x0;
            if (puVar9 != (undefined8 *)0x0) {
              puVar2 = puVar9 + 0x12;
            }
            FUN_180105a48(param_1 + -0xd07,puVar2);
            goto LAB_1801d99fc;
          }
          FUN_18010b1e8(param_1 + -0xd07,puVar9);
        }
        FUN_18011a5a0(puVar9);
        FUN_180119e68(puVar9);
      }
      puVar9[0x12] = &PTR_FUN_180229728;
      puVar9[0x13] = &PTR_FUN_18022e310;
      *puVar9 = &PTR_D3DPERF_GetStatus_native_180229eb0;
      FUN_180116678(puVar9 + 1);
      FUN_1802229d8(puVar9,0x418);
    }
  }
LAB_1801d99fc:
  if (bVar4) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar6;
}


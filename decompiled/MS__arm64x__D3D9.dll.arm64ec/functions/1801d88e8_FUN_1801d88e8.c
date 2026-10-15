/*
 * FUN_1801d88e8 at 1801d88e8
 * undefined FUN_1801d88e8(void)
 * Address ranges: 1801d88e8-1801d8dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801d88e8(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,int param_7,undefined8 *param_8,longlong param_9)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int extraout_w9;
  uint extraout_w10;
  uint *puVar14;
  uint extraout_w11;
  uint *puVar15;
  undefined2 uVar16;
  undefined8 *local_50 [2];
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar7 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar7 == 0) {
      FUN_1801085c8();
    }
  }
  uVar8 = 0;
  uVar9 = 0x2a;
  if (param_8 == (undefined8 *)0x0) goto LAB_1801d8b98;
  *param_8 = 0;
  iVar6 = FUN_1801074b0(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                        *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                        param_7,param_5,3,param_6,0);
  iVar7 = iVar6;
  if (iVar6 == 0x876086f) {
    iVar7 = 0;
    param_4 = 1;
  }
  iVar1 = iVar7;
  if (1 < param_4) {
    iVar1 = -0x7789f794;
  }
  if ((param_5 & 0x400) != 0) {
    iVar7 = iVar1;
  }
  if (-1 < iVar7) {
    uVar11 = 0;
    uVar12 = param_2;
    if (param_2 < param_3) {
      uVar12 = param_3;
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    uVar13 = (ulonglong)uVar12;
    while (uVar12 != 0) {
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 >> 1;
      uVar12 = (uint)uVar13;
    }
    if (param_4 == 0) {
      param_4 = uVar11;
    }
    FUN_180107140(param_6);
    FUN_1801071f0(param_6);
    iVar7 = FUN_180107018(param_6);
    if (((extraout_w11 - 1 & param_2) != 0 && extraout_w11 <= param_2) ||
       (bVar4 = true, (extraout_w10 - 1 & param_3) != 0 && extraout_w10 <= param_3)) {
      bVar4 = false;
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      if (*(int *)(param_1 + -0x59d0) == 2) {
        puVar15 = &DAT_1802462c8;
        puVar14 = &DAT_1802462cc;
      }
      else {
        uVar12 = *(uint *)(*(longlong *)(param_1 + -0x5a10) + 0x10);
        puVar15 = (uint *)(&DAT_180246478 + (ulonglong)uVar12 * 0x1b0);
        puVar14 = (uint *)(&DAT_18024647c + (ulonglong)uVar12 * 0x1b0);
      }
      if (((param_2 <= *puVar15) && (param_3 <= *puVar14)) &&
         ((bVar4 || iVar7 < 1) && param_4 <= uVar11)) {
        if (param_7 == 0) {
          if (*(int *)(param_1 + -0x59d0) == 1) {
            uVar8 = FUN_18011a3a8(param_2,param_3,param_4,1,param_6);
          }
          else {
            uVar8 = 0;
          }
LAB_1801d8b70:
          uVar9 = FUN_180106a90(param_6);
          iVar7 = extraout_w9;
          if (extraout_w9 < 0) goto LAB_1801d8b9c;
        }
        else {
          uVar8 = 0;
          if (param_7 != 3) goto LAB_1801d8b70;
          uVar9 = 0x2a;
          uVar8 = 0;
        }
        iVar7 = iVar6;
        goto LAB_1801d8b9c;
      }
    }
LAB_1801d8b98:
    iVar7 = -0x7789f794;
  }
LAB_1801d8b9c:
  uVar16 = (undefined2)param_4;
  if (iVar7 == 0x876086f) {
    iVar7 = 0;
    uVar16 = 1;
  }
  if ((-1 < iVar7) && (iVar7 = -0x7789f794, param_9 == 0)) {
    iVar7 = -0x7ff8fff2;
    local_50[0] = *(undefined8 **)(param_1 + -0x59a0);
    puVar10 = (undefined8 *)FUN_1802229a8(0x148);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0x14] = 0;
      puVar10[0x15] = puVar10 + 0x13;
      puVar10[5] = 0;
      puVar10[6] = 0;
      lVar2 = 0;
      if (param_1 != 0x6838) {
        lVar2 = param_1;
      }
      puVar10[2] = 0;
      puVar10[3] = lVar2;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(undefined4 *)(puVar10 + 4) = 3;
      *(undefined2 *)((longlong)puVar10 + 0x3c) = uVar16;
      puVar10[0xc] = 0;
      puVar10[8] = puVar10 + 0x16;
      puVar10[9] = puVar10 + 0x26;
      puVar10[10] = local_50[0];
      puVar10[0xb] = 0;
      *(uint *)(puVar10 + 0xd) = param_2;
      *(uint *)((longlong)puVar10 + 0x6c) = param_3;
      *(undefined2 *)(puVar10 + 0x11) = 0;
      *(uint *)(puVar10 + 0xe) = param_5;
      *(undefined4 *)((longlong)puVar10 + 0x74) = param_6;
      *(undefined4 *)(puVar10 + 0xf) = uVar9;
      *(int *)((longlong)puVar10 + 0x7c) = param_7;
      *(undefined4 *)(puVar10 + 0x10) = 1;
      *(uint *)((longlong)puVar10 + 0x84) = uVar8;
      *puVar10 = &PTR_FUN_18022f0f8;
      puVar10[1] = 0;
      puVar10[0x12] = &PTR_FUN_180229728;
      puVar10[0x13] = &PTR_FUN_18022f048;
      *(undefined4 *)(puVar10 + 0x28) = 2;
      puVar10[0x17] = 0;
      puVar10[0x16] = 0;
      puVar10[0x19] = 0;
      puVar10[0x18] = 0;
      puVar10[0x1b] = 0;
      puVar10[0x1a] = 0;
      puVar10[0x1d] = 0;
      puVar10[0x1c] = 0;
      puVar10[0x1f] = 0;
      puVar10[0x1e] = 0;
      puVar10[0x21] = 0;
      puVar10[0x20] = 0;
      puVar10[0x23] = 0;
      puVar10[0x22] = 0;
      puVar10[0x25] = 0;
      puVar10[0x24] = 0;
      thunk_FUN_180223c20(puVar10 + 0x26,0,0,param_2);
      lVar2 = 0;
      if (puVar10[3] != 0) {
        lVar2 = puVar10[3] + -0x6838;
      }
      uVar13 = FUN_180119b20(puVar10,lVar2);
      if ((uVar13 & 1) != 0) {
        local_50[0] = puVar10;
        uVar13 = FUN_18010be98(param_1 + -0x5978,local_50);
        if ((uVar13 & 1) == 0) {
          iVar7 = -0x7ff8fff2;
        }
        else {
          iVar7 = FUN_1801e2328(puVar10 + 0x13,&DAT_180229228,param_8);
          if (-1 < iVar7) {
            (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                 (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] - (ulonglong)uVar8
            ;
            puVar3 = (undefined8 *)0x0;
            if (puVar10 != (undefined8 *)0x0) {
              puVar3 = puVar10 + 0x12;
            }
            FUN_180105a48(param_1 + -0x6838,puVar3);
            goto LAB_1801d8d90;
          }
          FUN_18010b140(param_1 + -0x6838,puVar10);
        }
        FUN_18011a5a0(puVar10);
        FUN_180119e68(puVar10);
      }
      puVar10[0x12] = &PTR_FUN_180229728;
      puVar10[0x13] = &PTR_FUN_18022f048;
      *puVar10 = &PTR_D3DPERF_GetStatus_native_180229eb0;
      FUN_180116678(puVar10 + 1);
      FUN_1802229d8(puVar10,0x148);
    }
  }
LAB_1801d8d90:
  if (bVar5) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar7;
}


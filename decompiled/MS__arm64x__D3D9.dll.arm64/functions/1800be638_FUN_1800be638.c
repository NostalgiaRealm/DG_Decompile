/*
 * FUN_1800be638 at 1800be638
 * undefined FUN_1800be638(void)
 * Address ranges: 1800be638-1800beafb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800be638(longlong param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                 int param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint extraout_w1;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  int extraout_w9;
  uint extraout_w10;
  uint *puVar12;
  uint extraout_w11;
  int extraout_w15;
  int extraout_w15_00;
  undefined2 uVar13;
  longlong lVar15;
  undefined8 *local_60 [2];
  uint uVar14;
  
  local_60[0] = param_8;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar4 = true;
    iVar5 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar5 == 0) {
      FUN_180003398();
    }
  }
  uVar6 = 0;
  uVar7 = 0x2a;
  uVar14 = param_3;
  if (param_7 == (undefined8 *)0x0) goto LAB_1800be8c4;
  *param_7 = 0;
  iVar5 = FUN_1800022a8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                        *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                        param_6,param_4,5,param_5,0);
  if (iVar5 == 0x876086f) {
    iVar5 = 0;
  }
  iVar1 = iVar5;
  if (1 < param_3) {
    iVar1 = -0x7789f794;
  }
  if ((param_4 & 0x400) != 0) {
    iVar5 = iVar1;
  }
  if (-1 < iVar5) {
    uVar9 = param_2;
    if (param_2 == 0) {
      uVar9 = 1;
    }
    uVar10 = (ulonglong)uVar9;
    uVar14 = 0;
    while (uVar9 != 0) {
      uVar14 = uVar14 + 1;
      uVar10 = uVar10 >> 1;
      uVar9 = (uint)uVar10;
    }
    if (param_3 != 0) {
      uVar14 = param_3;
    }
    func_0x000180107140(param_5);
    func_0x0001801071f0(param_5);
    iVar5 = func_0x000180107018(param_5);
    if (((extraout_w11 - 1 & param_2) != 0 && extraout_w11 <= param_2) ||
       (bVar3 = true, (extraout_w10 - 1 & param_2) != 0 && extraout_w10 <= param_2)) {
      bVar3 = false;
    }
    if (param_2 != 0) {
      if (*(int *)(param_1 + -0x59d0) == 2) {
        puVar11 = &DAT_180248bd8;
        puVar12 = &DAT_180248bdc;
      }
      else {
        uVar9 = *(uint *)(*(longlong *)(param_1 + -0x5a10) + 0x10);
        puVar11 = (uint *)(&DAT_180248d88 + (ulonglong)uVar9 * 0x1b0);
        puVar12 = (uint *)(&DAT_180248d8c + (ulonglong)uVar9 * 0x1b0);
      }
      if (((param_2 <= *puVar11) && (param_2 <= *puVar12)) &&
         ((bVar3 || iVar5 < 1) && uVar14 <= extraout_w1)) {
        if (param_6 == 0) {
          if (*(int *)(param_1 + -0x59d0) == 1) {
            uVar6 = FUN_18000eb00(param_2,param_2,uVar14,6,param_5);
          }
          else {
            uVar6 = 0;
          }
LAB_1800be89c:
          uVar7 = func_0x000180106a90(param_5);
          iVar5 = extraout_w9;
          iVar1 = extraout_w15_00;
          if (extraout_w9 < 0) goto LAB_1800be8c8;
        }
        else {
          uVar6 = 0;
          if (param_6 != 3) goto LAB_1800be89c;
          uVar7 = 0x2a;
          uVar6 = 0;
          iVar1 = extraout_w15;
        }
        iVar5 = iVar1;
        goto LAB_1800be8c8;
      }
    }
LAB_1800be8c4:
    iVar5 = -0x7789f794;
  }
LAB_1800be8c8:
  uVar13 = (undefined2)uVar14;
  if (iVar5 == 0x876086f) {
    uVar13 = 1;
    iVar5 = 0;
  }
  if ((-1 < iVar5) && (iVar5 = -0x7789f794, local_60[0] == (undefined8 *)0x0)) {
    local_60[0] = *(undefined8 **)(param_1 + -0x59a0);
    iVar5 = -0x7ff8fff2;
    puVar8 = (undefined8 *)FUN_180102f80(0x418);
    if (puVar8 != (undefined8 *)0x0) {
      lVar15 = 0;
      if (param_1 != 0x6838) {
        lVar15 = param_1;
      }
      puVar8[0x14] = 0;
      puVar8[0x15] = puVar8 + 0x13;
      puVar8[2] = 0;
      puVar8[3] = lVar15;
      *(uint *)(puVar8 + 0xe) = param_4;
      *(undefined4 *)((longlong)puVar8 + 0x74) = param_5;
      *(undefined4 *)(puVar8 + 4) = 5;
      puVar8[5] = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      puVar8[0xc] = 0;
      *(undefined2 *)((longlong)puVar8 + 0x3c) = uVar13;
      puVar8[8] = puVar8 + 0x16;
      puVar8[9] = puVar8 + 0x76;
      *(uint *)(puVar8 + 0xd) = param_2;
      *(uint *)((longlong)puVar8 + 0x6c) = param_2;
      *(undefined4 *)(puVar8 + 0xf) = uVar7;
      *(int *)((longlong)puVar8 + 0x7c) = param_6;
      *(undefined2 *)(puVar8 + 0x11) = 0;
      puVar8[10] = local_60[0];
      puVar8[0xb] = 0;
      *(undefined4 *)(puVar8 + 0x10) = 6;
      *(uint *)((longlong)puVar8 + 0x84) = uVar6;
      *puVar8 = &PTR_FUN_180236058;
      puVar8[1] = 0;
      puVar8[0x12] = &PTR_DAT_180230270;
      puVar8[0x13] = &PTR_FUN_180235fa8;
      *(undefined4 *)(puVar8 + 0x82) = 2;
      func_0x000180222c50(puVar8 + 0x16,0,0x300);
      lVar15 = 0;
      do {
        (*__imp_USER32_dll_SetRect)(puVar8 + lVar15 * 2 + 0x76,0,0,param_2,param_2);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 6);
      iVar5 = -0x7ff8fff2;
      lVar15 = 0;
      if (puVar8[3] != 0) {
        lVar15 = puVar8[3] + -0x6838;
      }
      uVar10 = FUN_18000e370(puVar8,lVar15);
      if ((uVar10 & 1) != 0) {
        local_60[0] = puVar8;
        uVar10 = FUN_180006748(param_1 + -0x5968,local_60);
        if ((uVar10 & 1) == 0) {
          iVar5 = -0x7ff8fff2;
        }
        else {
          iVar5 = FUN_1800a8a30(puVar8 + 0x13,&DAT_1802294b8,param_7);
          if (-1 < iVar5) {
            (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                 (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] - (ulonglong)uVar6
            ;
            puVar2 = (undefined8 *)0x0;
            if (puVar8 != (undefined8 *)0x0) {
              puVar2 = puVar8 + 0x12;
            }
            FUN_180001928(param_1 + -0x6838,puVar2);
            goto LAB_1800beab4;
          }
          FUN_180005bd0(param_1 + -0x6838,puVar8);
        }
        FUN_1800a88f0(puVar8);
      }
      puVar8[0x12] = &PTR_DAT_180230270;
      puVar8[0x13] = &PTR_FUN_180235fa8;
      *puVar8 = &PTR_D3DPERF_GetStatus_180229eb0;
      FUN_18000b538(puVar8 + 1);
      FUN_180102fc0(puVar8,0x418);
    }
  }
LAB_1800beab4:
  if (bVar4) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar5;
}


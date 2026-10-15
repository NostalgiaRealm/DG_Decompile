/*
 * FUN_1800bda80 at 1800bda80
 * undefined FUN_1800bda80(void)
 * Address ranges: 1800bda80-1800bdf4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bda80(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,int param_7,undefined8 *param_8,longlong param_9)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint extraout_w1;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int extraout_w9;
  uint extraout_w10;
  uint *puVar15;
  uint extraout_w11;
  int extraout_w15;
  int extraout_w15_00;
  undefined2 uVar16;
  undefined8 *local_60 [2];
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar7 == 0) {
      FUN_180003398();
    }
  }
  uVar8 = 0;
  uVar9 = 0x2a;
  if (param_8 == (undefined8 *)0x0) goto LAB_1800bdd24;
  *param_8 = 0;
  iVar7 = FUN_1800022a8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                        *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                        param_7,param_5,3,param_6,0);
  if (iVar7 == 0x876086f) {
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
    uVar12 = param_2;
    if (param_2 < param_3) {
      uVar12 = param_3;
    }
    uVar11 = 0;
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
    func_0x000180107140(param_6);
    func_0x0001801071f0(param_6);
    iVar7 = func_0x000180107018(param_6);
    if (((extraout_w11 - 1 & param_2) != 0 && extraout_w11 <= param_2) ||
       (bVar4 = true, (extraout_w10 - 1 & param_3) != 0 && extraout_w10 <= param_3)) {
      bVar4 = false;
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      if (*(int *)(param_1 + -0x59d0) == 2) {
        puVar14 = &DAT_180248bd8;
        puVar15 = &DAT_180248bdc;
      }
      else {
        uVar12 = *(uint *)(*(longlong *)(param_1 + -0x5a10) + 0x10);
        puVar14 = (uint *)(&DAT_180248d88 + (ulonglong)uVar12 * 0x1b0);
        puVar15 = (uint *)(&DAT_180248d8c + (ulonglong)uVar12 * 0x1b0);
      }
      if (((param_2 <= *puVar14) && (param_3 <= *puVar15)) &&
         ((bVar4 || iVar7 < 1) && param_4 <= extraout_w1)) {
        if (param_7 == 0) {
          if (*(int *)(param_1 + -0x59d0) == 1) {
            uVar8 = FUN_18000eb00(param_2,param_3,param_4,1,param_6);
          }
          else {
            uVar8 = 0;
          }
LAB_1800bdcfc:
          uVar9 = func_0x000180106a90(param_6);
          iVar7 = extraout_w9;
          iVar1 = extraout_w15_00;
          if (extraout_w9 < 0) goto LAB_1800bdd28;
        }
        else {
          uVar8 = 0;
          if (param_7 != 3) goto LAB_1800bdcfc;
          uVar9 = 0x2a;
          uVar8 = 0;
          iVar1 = extraout_w15;
        }
        iVar7 = iVar1;
        goto LAB_1800bdd28;
      }
    }
LAB_1800bdd24:
    iVar7 = -0x7789f794;
  }
LAB_1800bdd28:
  uVar16 = (undefined2)param_4;
  if (iVar7 == 0x876086f) {
    uVar16 = 1;
    iVar7 = 0;
  }
  if ((-1 < iVar7) && (iVar7 = -0x7789f794, param_9 == 0)) {
    local_60[0] = *(undefined8 **)(param_1 + -0x59a0);
    iVar7 = -0x7ff8fff2;
    puVar10 = (undefined8 *)FUN_180102f80(0x148);
    if (puVar10 != (undefined8 *)0x0) {
      lVar2 = 0;
      if (param_1 != 0x6838) {
        lVar2 = param_1;
      }
      puVar10[0x14] = 0;
      puVar10[0x15] = puVar10 + 0x13;
      puVar10[2] = 0;
      puVar10[3] = lVar2;
      puVar10[5] = 0;
      puVar10[6] = 0;
      *(undefined4 *)(puVar10 + 4) = 3;
      *(undefined4 *)(puVar10 + 7) = 0;
      puVar10[8] = puVar10 + 0x16;
      puVar10[9] = puVar10 + 0x26;
      puVar10[0xc] = 0;
      *(undefined2 *)((longlong)puVar10 + 0x3c) = uVar16;
      *(uint *)(puVar10 + 0xd) = param_2;
      *(uint *)((longlong)puVar10 + 0x6c) = param_3;
      *(undefined4 *)(puVar10 + 0xf) = uVar9;
      *(int *)((longlong)puVar10 + 0x7c) = param_7;
      *(undefined2 *)(puVar10 + 0x11) = 0;
      puVar10[10] = local_60[0];
      puVar10[0xb] = 0;
      *(uint *)(puVar10 + 0xe) = param_5;
      *(undefined4 *)((longlong)puVar10 + 0x74) = param_6;
      *(undefined4 *)(puVar10 + 0x10) = 1;
      *(uint *)((longlong)puVar10 + 0x84) = uVar8;
      *puVar10 = &PTR_FUN_180236b60;
      puVar10[1] = 0;
      puVar10[0x12] = &PTR_DAT_180230270;
      puVar10[0x13] = &PTR_FUN_180236ab0;
      *(undefined4 *)(puVar10 + 0x28) = 2;
      pcVar6 = __imp_USER32_dll_SetRect;
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
      (*pcVar6)(puVar10 + 0x26,0,0,param_2,param_3);
      lVar2 = 0;
      if (puVar10[3] != 0) {
        lVar2 = puVar10[3] + -0x6838;
      }
      uVar13 = FUN_18000e370(puVar10,lVar2);
      if ((uVar13 & 1) != 0) {
        local_60[0] = puVar10;
        uVar13 = FUN_180006748(param_1 + -0x5978,local_60);
        if ((uVar13 & 1) == 0) {
          iVar7 = -0x7ff8fff2;
        }
        else {
          iVar7 = FUN_1800c6e60(puVar10 + 0x13,&DAT_1802294a8,param_8);
          if (-1 < iVar7) {
            (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                 (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] - (ulonglong)uVar8
            ;
            puVar3 = (undefined8 *)0x0;
            if (puVar10 != (undefined8 *)0x0) {
              puVar3 = puVar10 + 0x12;
            }
            FUN_180001928(param_1 + -0x6838,puVar3);
            goto LAB_1800bdf04;
          }
          FUN_180005b28(param_1 + -0x6838,puVar10);
        }
        FUN_1800a88f0(puVar10);
      }
      puVar10[0x12] = &PTR_DAT_180230270;
      puVar10[0x13] = &PTR_FUN_180236ab0;
      *puVar10 = &PTR_D3DPERF_GetStatus_180229eb0;
      FUN_18000b538(puVar10 + 1);
      FUN_180102fc0(puVar10,0x148);
    }
  }
LAB_1800bdf04:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar7;
}


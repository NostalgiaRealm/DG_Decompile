/*
 * FUN_1800bd238 at 1800bd238
 * undefined FUN_1800bd238(void)
 * Address ranges: 1800bd238-1800bd6e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bd238(longlong param_1,uint param_2,uint param_3,int param_4,int param_5,
                 undefined8 *param_6,longlong param_7)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar13 = (ulonglong)param_2;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar4 == 0) {
      FUN_180003398();
    }
  }
  uVar14 = 0;
  iVar4 = FUN_1800022a8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                        *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                        param_5,param_3,7,param_4,0);
  if (((-1 < iVar4) && (iVar4 = -0x7789f794, param_2 != 0)) && (param_6 != (undefined8 *)0x0)) {
    uVar8 = 4;
    if (param_4 != 0x66) {
      uVar8 = 2;
    }
    if ((uVar8 <= param_2) &&
       (((param_3 >> 4 & 1) == 0 || ((*(uint *)(param_1 + -0x59c0) >> 6 & 1) == 0)))) {
      *param_6 = 0;
      iVar4 = 0;
      uVar14 = 0;
      if ((param_5 == 0) &&
         ((*(int *)(param_1 + -0x59d0) == 1 &&
          (iVar4 = -0x7789fe84, uVar14 = uVar13,
          uVar13 <= (ulonglong)(&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b]))))
      {
        iVar4 = 0;
      }
    }
  }
  if (param_7 != 0) {
    iVar4 = -0x7789f794;
    goto LAB_1800bd69c;
  }
  if (iVar4 < 0) goto LAB_1800bd69c;
  uVar11 = *(undefined8 *)(param_1 + -0x5998);
  iVar4 = -0x7ff8fff2;
  puVar5 = (undefined8 *)FUN_180102f80(0x90);
  if (puVar5 == (undefined8 *)0x0) goto LAB_1800bd69c;
  lVar6 = 0;
  if (param_1 != 0x6838) {
    lVar6 = param_1;
  }
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar5 + 0xf;
  puVar5[8] = lVar6;
  *(undefined4 *)(puVar5 + 9) = 7;
  *(uint *)(puVar5 + 4) = param_2;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  *(uint *)(puVar5 + 5) = param_2;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar11;
  *puVar5 = &PTR_FUN_180236770;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[0xf] = &PTR_FUN_180236788;
  *(uint *)(puVar5 + 10) = param_3;
  *(int *)((longlong)puVar5 + 0x54) = param_4;
  *(int *)(puVar5 + 0xb) = param_5;
  *(undefined4 *)(puVar5 + 0xe) = 0;
  lVar6 = FUN_180102f80((ulonglong)(*(int *)(puVar5 + 4) + 0x40) + 8);
  uVar13 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar13 - 8) = lVar6;
  puVar5[1] = uVar13;
  func_0x000180222c50(uVar13,0,*(undefined4 *)(puVar5 + 4));
  uVar8 = *(uint *)(puVar5 + 0xb);
  if (uVar8 != 3) {
    if (uVar8 < 2) {
      uVar9 = 3;
      if ((*(uint *)(puVar5 + 10) & 0x10) == 0) {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 2;
      if (uVar8 == 2) {
        uVar9 = 3;
      }
    }
    bVar3 = (*(uint *)(puVar5 + 10) & 0x200) != 0;
    if (bVar3) {
      uVar9 = 1;
    }
    iVar10 = 0x1000;
    if (!bVar3) {
      iVar10 = 0;
    }
    uVar11 = (**(code **)(*(longlong *)puVar5[0xd] + 0x28))
                       ((longlong *)puVar5[0xd],iVar10 + *(int *)(puVar5 + 4),uVar9,
                        *(int *)((longlong)puVar5 + 0x54) == 0x66);
    puVar5[0xc] = uVar11;
  }
  iVar10 = *(int *)(param_1 + -0x591c);
  if (*(int *)(param_1 + -0x5920) == iVar10) {
    uVar8 = iVar10 << 1;
    if (iVar10 == 0) {
      uVar8 = 0x10;
    }
    lVar6 = CONCAT44(0,uVar8) << 3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT44(0,uVar8);
    if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = thunk_FUN_180102f80(lVar6);
    if (lVar6 != 0) {
      thunk_FUN_180001218(lVar6,*(undefined8 *)(param_1 + -0x5928),
                          (ulonglong)*(uint *)(param_1 + -0x591c) << 3);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x5928));
      *(longlong *)(param_1 + -0x5928) = lVar6;
      *(uint *)(param_1 + -0x591c) = uVar8;
      goto LAB_1800bd534;
    }
  }
  else {
LAB_1800bd534:
    *(undefined8 **)(*(longlong *)(param_1 + -0x5928) + (ulonglong)*(uint *)(param_1 + -0x5920) * 8)
         = puVar5;
    *(int *)(param_1 + -0x5920) = *(int *)(param_1 + -0x5920) + 1;
    iVar4 = FUN_1800c1250(puVar5 + 0xf,&DAT_1802294e8,param_6);
    if (-1 < iVar4) {
      (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
           (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] - uVar14;
      goto LAB_1800bd69c;
    }
    if (*(uint *)(param_1 + -0x5920) != 0) {
      uVar13 = 0;
      do {
        uVar8 = (uint)uVar13;
        if (*(undefined8 **)(*(longlong *)(param_1 + -0x5928) + uVar13 * 8) == puVar5) {
          if (uVar8 != 0xffffffff) {
            if ((*(int *)(puVar5 + 0xb) == 0) && (*(int *)(param_1 + -0x59d0) == 1)) {
              (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                   (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] +
                   (ulonglong)*(uint *)(puVar5 + 4);
            }
            uVar12 = *(uint *)(param_1 + -0x5920);
            if (uVar8 < uVar12) {
              while (uVar8 = (int)uVar13 + 1, uVar8 < uVar12) {
                *(undefined8 *)(*(longlong *)(param_1 + -0x5928) + uVar13 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + -0x5928) + (ulonglong)uVar8 * 8);
                uVar13 = (ulonglong)uVar8;
                uVar12 = *(uint *)(param_1 + -0x5920);
              }
              *(uint *)(param_1 + -0x5920) = uVar12 - 1;
            }
          }
          break;
        }
        uVar13 = (ulonglong)(uVar8 + 1);
      } while (uVar8 + 1 < *(uint *)(param_1 + -0x5920));
    }
  }
  puVar7 = (undefined8 *)puVar5[0xc];
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar5[0xc] = 0;
  if (puVar5[1] != 0) {
    FUN_180103118(*(undefined8 *)(puVar5[1] + -8));
  }
  puVar5[0xf] = &PTR_FUN_180236788;
  *puVar5 = &PTR_thunk_EXT_FUN_00242ff2_1802339d8;
  puVar5[1] = 0;
  FUN_18000b538(puVar5 + 6);
  FUN_180102fc0(puVar5,0x90);
LAB_1800bd69c:
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar4;
}


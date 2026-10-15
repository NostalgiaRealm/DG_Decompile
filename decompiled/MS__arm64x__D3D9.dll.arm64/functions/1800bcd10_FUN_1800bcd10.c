/*
 * FUN_1800bcd10 at 1800bcd10
 * undefined FUN_1800bcd10(void)
 * Address ranges: 1800bcd10-1800bd1cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bcd10(longlong param_1,uint param_2,uint param_3,int param_4,int param_5,
                 undefined8 *param_6,longlong param_7)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  undefined1 auStack_2a8 [12];
  uint local_29c;
  
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
  uVar12 = 0;
  uVar14 = 0;
  iVar4 = FUN_1800022a8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                        *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                        param_5,param_3,6,100,0);
  iVar5 = -0x7789f794;
  if ((((-1 < iVar4) && (iVar4 = iVar5, param_2 != 0)) && (param_6 != (undefined8 *)0x0)) &&
     (((param_3 >> 4 & 1) == 0 || ((*(uint *)(param_1 + -0x59c0) >> 6 & 1) == 0)))) {
    uVar14 = 0;
    uVar12 = 0;
    *param_6 = 0;
    if ((param_5 == 0) &&
       ((*(int *)(param_1 + -0x59d0) == 1 &&
        (uVar14 = (ulonglong)param_2,
        (ulonglong)(&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] <
        (ulonglong)param_2)))) {
      iVar4 = -0x7789fe84;
    }
    else {
      iVar4 = 0;
      if (((param_4 != 0) && (uVar8 = FUN_180079830(param_4,1,auStack_2a8), (uVar8 & 1) != 0)) &&
         (uVar12 = local_29c, iVar4 = iVar5, local_29c <= param_2)) {
        iVar4 = 0;
      }
    }
  }
  if ((param_7 != 0) || (iVar5 = iVar4, iVar4 < 0)) goto LAB_1800bd188;
  iVar5 = -0x7ff8fff2;
  if ((*(int *)(param_1 + -0x59d0) == 3) || ((*(uint *)(param_1 + -0x59c0) >> 5 & 1) != 0)) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  uVar10 = *(undefined8 *)(param_1 + -0x5998);
  puVar6 = (undefined8 *)FUN_180102f80(0xa8);
  if (puVar6 == (undefined8 *)0x0) goto LAB_1800bd188;
  lVar7 = 0;
  if (param_1 != 0x6838) {
    lVar7 = param_1;
  }
  puVar6[0x13] = 0;
  puVar6[0x14] = puVar6 + 0x12;
  puVar6[8] = lVar7;
  *(undefined4 *)(puVar6 + 9) = 6;
  *(uint *)(puVar6 + 4) = param_2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  *(uint *)(puVar6 + 5) = param_2;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = uVar10;
  puVar6[0x10] = 0xffffffff00000000;
  *puVar6 = &PTR_FUN_180236c18;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[0x12] = &PTR_FUN_180236ba8;
  *(uint *)(puVar6 + 10) = param_3;
  *(int *)((longlong)puVar6 + 0x54) = param_4;
  *(uint *)(puVar6 + 0xb) = uVar12;
  *(int *)((longlong)puVar6 + 0x5c) = param_5;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  *(undefined1 *)(puVar6 + 0x11) = uVar13;
  *(undefined4 *)((longlong)puVar6 + 0x89) = 0;
  lVar7 = FUN_180102f80((ulonglong)(*(int *)(puVar6 + 4) + 0x40) + 8);
  uVar8 = lVar7 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar8 - 8) = lVar7;
  puVar6[1] = uVar8;
  func_0x000180222c50(uVar8,0,*(undefined4 *)(puVar6 + 4));
  if (((*(uint *)((longlong)puVar6 + 0x5c) < 2) && ((*(uint *)(puVar6 + 10) >> 4 & 1) == 0)) &&
     (*(char *)(puVar6 + 0x11) == '\0')) {
    uVar9 = 2;
    if (*(uint *)((longlong)puVar6 + 0x5c) == 1) {
      uVar9 = 0;
    }
    bVar3 = (*(uint *)(puVar6 + 10) & 0x200) != 0;
    if (bVar3) {
      uVar9 = 1;
    }
    iVar4 = 0x1000;
    if (!bVar3) {
      iVar4 = 0x10;
    }
    uVar10 = (**(code **)(*(longlong *)puVar6[0xf] + 0x20))
                       ((longlong *)puVar6[0xf],iVar4 + *(int *)(puVar6 + 4),uVar9);
    puVar6[0xc] = uVar10;
  }
  *(undefined4 *)(puVar6 + 0x10) = 0;
  iVar4 = *(int *)(param_1 + -0x592c);
  if (*(int *)(param_1 + -0x5930) == iVar4) {
    uVar12 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar12 = 0x10;
    }
    lVar7 = CONCAT44(0,uVar12) << 3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT44(0,uVar12);
    if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
      lVar7 = -1;
    }
    lVar7 = thunk_FUN_180102f80(lVar7);
    if (lVar7 != 0) {
      thunk_FUN_180001218(lVar7,*(undefined8 *)(param_1 + -0x5938),
                          (ulonglong)*(uint *)(param_1 + -0x592c) << 3);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x5938));
      *(longlong *)(param_1 + -0x5938) = lVar7;
      *(uint *)(param_1 + -0x592c) = uVar12;
      goto LAB_1800bd058;
    }
  }
  else {
LAB_1800bd058:
    *(undefined8 **)(*(longlong *)(param_1 + -0x5938) + (ulonglong)*(uint *)(param_1 + -0x5930) * 8)
         = puVar6;
    *(int *)(param_1 + -0x5930) = *(int *)(param_1 + -0x5930) + 1;
    iVar5 = FUN_1800c7bd8(puVar6 + 0x12,&DAT_1802294d8,param_6);
    if (-1 < iVar5) {
      (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
           (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] - uVar14;
      goto LAB_1800bd188;
    }
    if (*(uint *)(param_1 + -0x5930) != 0) {
      uVar14 = 0;
      do {
        uVar12 = (uint)uVar14;
        if (*(undefined8 **)(*(longlong *)(param_1 + -0x5938) + uVar14 * 8) == puVar6) {
          if (uVar12 != 0xffffffff) {
            if ((*(int *)((longlong)puVar6 + 0x5c) == 0) && (*(int *)(param_1 + -0x59d0) == 1)) {
              (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                   (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] +
                   (ulonglong)*(uint *)(puVar6 + 4);
            }
            uVar11 = *(uint *)(param_1 + -0x5930);
            if (uVar12 < uVar11) {
              while (uVar12 = (int)uVar14 + 1, uVar12 < uVar11) {
                *(undefined8 *)(*(longlong *)(param_1 + -0x5938) + uVar14 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + -0x5938) + (ulonglong)uVar12 * 8);
                uVar14 = (ulonglong)uVar12;
                uVar11 = *(uint *)(param_1 + -0x5930);
              }
              *(uint *)(param_1 + -0x5930) = uVar11 - 1;
            }
          }
          break;
        }
        uVar14 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < *(uint *)(param_1 + -0x5930));
    }
  }
  FUN_18000ed80(puVar6);
  puVar6[0x12] = &PTR_FUN_180236ba8;
  *puVar6 = &PTR_thunk_EXT_FUN_00242ff2_1802339d8;
  FUN_18000b538(puVar6 + 6);
  FUN_180102fc0(puVar6,0xa8);
LAB_1800bd188:
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar5;
}


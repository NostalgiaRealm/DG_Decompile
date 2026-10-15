/*
 * FUN_1800b15a0 at 1800b15a0
 * undefined FUN_1800b15a0(void)
 * Address ranges: 1800b15a0-1800b1b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800b15a0(longlong param_1,undefined4 param_2,int param_3,int param_4,longlong param_5,
             longlong param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint in_stack_fffffffffffffbe8;
  undefined4 local_3e0;
  undefined8 local_3c8;
  longlong local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [608];
  
  local_3e0 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar10 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar10 == 0) {
      FUN_180003398();
      bVar8 = true;
    }
  }
  if ((param_5 == 0 || 1 < param_7) ||
     (uVar11 = FUN_1800b4570(param_1 + -0x6838), (uVar11 & 1) == 0)) goto LAB_1800b1acc;
  lVar20 = 0;
  if (*(longlong *)(param_1 + 0x5c58) != 0) {
    lVar20 = FUN_1800c0a50(param_1 + 0x80);
  }
  if (param_6 == 0) {
    uVar15 = *(uint *)(param_5 + -0x3c);
    uVar11 = (ulonglong)uVar15;
    if (uVar15 == 0) goto LAB_1800b1acc;
    uVar3 = *(uint *)(param_1 + -0x5ae4);
    uVar19 = 0;
    if (uVar3 == 0) {
LAB_1800b171c:
      if (uVar3 == *(uint *)(param_1 + -0x5ae8)) {
        uVar18 = CONCAT44(0,*(uint *)(param_1 + -0x5ae8) << 1);
        lVar17 = uVar18 * 0x260;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar18;
        if (SUB168(auVar5 * ZEXT816(0x260),8) != 0) {
          lVar17 = -1;
        }
        lVar17 = thunk_FUN_180102f80(lVar17);
        if (lVar17 != 0) {
          if (*(int *)(param_1 + -0x5ae8) != 0) {
            uVar18 = 0;
            do {
              thunk_FUN_180001218(lVar17 + uVar18 * 0x260,
                                  *(longlong *)(param_1 + -0x5af0) + uVar18 * 0x260,0x260);
              uVar3 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(param_1 + -0x5ae8));
          }
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x5af0));
          *(longlong *)(param_1 + -0x5af0) = lVar17;
          *(int *)(param_1 + -0x5ae8) = *(int *)(param_1 + -0x5ae8) << 1;
        }
      }
      uVar3 = *(uint *)(param_1 + -0x5ae4);
      while (uVar19 < uVar3) {
        thunk_FUN_180001218(*(longlong *)(param_1 + -0x5af0) + (ulonglong)uVar3 * 0x260,
                            *(longlong *)(param_1 + -0x5af0) + (ulonglong)(uVar3 - 1) * 0x260,0x260)
        ;
        uVar3 = uVar3 - 1;
      }
      lVar17 = (ulonglong)uVar19 * 0x260;
      *(ulonglong *)(*(longlong *)(param_1 + -0x5af0) + lVar17) = uVar11;
      *(uint *)(lVar17 + *(longlong *)(param_1 + -0x5af0) + 8) = uVar15;
      FUN_180079830(uVar15,*(undefined1 *)(param_1 + -0x5ae0),auStack_2b0);
      thunk_FUN_180001218(lVar17 + *(longlong *)(param_1 + -0x5af0) + 0xc,auStack_2b0,0x254);
      *(int *)(param_1 + -0x5ae4) = *(int *)(param_1 + -0x5ae4) + 1;
    }
    else {
      uVar16 = 0;
      uVar14 = uVar3;
      do {
        uVar19 = uVar14 + uVar16 >> 1;
        uVar18 = *(ulonglong *)(*(longlong *)(param_1 + -0x5af0) + (ulonglong)uVar19 * 0x260);
        uVar9 = uVar19;
        if (uVar18 <= uVar11) {
          if (uVar11 <= uVar18) break;
          uVar16 = uVar19 + 1;
          uVar19 = uVar19 + 1;
          uVar9 = uVar14;
        }
        uVar14 = uVar9;
      } while (uVar14 != uVar16);
      if ((uVar19 == uVar3) ||
         (*(ulonglong *)(*(longlong *)(param_1 + -0x5af0) + (ulonglong)uVar19 * 0x260) != uVar11))
      goto LAB_1800b171c;
    }
    lVar17 = ((ulonglong)uVar19 * 0x260 | 0xc) + *(longlong *)(param_1 + -0x5af0);
  }
  else {
    if ((lVar20 == 0) || (*(char *)(*(longlong *)(lVar20 + 0x868) + 1) != '\x03')) {
      cVar4 = *(char *)(param_6 + 0x290);
    }
    else {
      cVar4 = *(char *)(param_6 + 0x291);
    }
    lVar17 = 0;
    if (cVar4 != '\0') {
      lVar17 = param_6 + 0x20;
    }
  }
  if (lVar17 == 0) goto LAB_1800b1acc;
  local_3e0 = 0x8876086c;
  if ((lVar20 == 0) || (*(longlong *)(lVar20 + 0x870) == 0)) {
    bVar7 = false;
LAB_1800b1868:
    bVar6 = false;
  }
  else {
    bVar7 = true;
    if (*(byte *)(*(longlong *)(lVar20 + 0x868) + 1) < 3) goto LAB_1800b1868;
    bVar6 = true;
  }
  if ((((*(int *)(lVar17 + 4) != 4) &&
       ((uint)((param_3 + param_4) * *(int *)(lVar17 + 0xc)) <= *(uint *)(param_5 + -0x70))) &&
      (*(char *)(lVar17 + 0x15) == '\x04' || bVar6)) &&
     (lVar21 = *(longlong *)(param_1 + 0x5cb0),
     (*(uint *)(lVar21 + 0x10) & (*(uint *)(param_1 + -0x70) ^ 0xffffffff)) == 0)) {
    local_3c8 = 0;
    uStack_3b8 = 0;
    local_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    local_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    local_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    local_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    local_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    local_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    local_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    local_2c0 = 0;
    iVar10 = FUN_18000ede8(0,param_5 + -0x90,0,0,&local_3c8,param_7 & 0xfffffffe);
    if (-1 < iVar10) {
      iVar10 = *(int *)(param_1 + -0x61a0);
      if (bVar7) {
        lVar13 = *(longlong *)(lVar20 + 0x10);
        lVar12 = 0;
        do {
          if ((*(char *)(lVar13 + 0x10 + lVar12) != '\0') && (*(uint *)(lVar21 + 8) != 0)) {
            uVar11 = 0;
            do {
              lVar2 = lVar21 + (ulonglong)*(byte *)(lVar21 + 0x214 + uVar11) * 8;
              if (*(char *)(lVar13 + lVar12) == *(char *)(lVar2 + 0x19)) {
                lVar1 = param_1 + ((longlong)*(char *)(lVar2 + 0x14) & 0xffffffffU) * 4;
                (&local_3c0)[lVar12 * 2] =
                     (ulonglong)*(byte *)(lVar2 + 0x17) * 4 + (ulonglong)*(uint *)(lVar1 + -0xb0) +
                     *(longlong *)
                      (*(longlong *)
                        (param_1 + ((longlong)*(char *)(lVar2 + 0x14) & 0xffffffffU) * 8 + -0x170) +
                      8);
                *(undefined1 *)((longlong)&uStack_3b8 + lVar12 * 0x10 + 4) =
                     *(undefined1 *)(lVar2 + 0x18);
                *(undefined1 *)((longlong)&uStack_3b8 + lVar12 * 0x10 + 5) =
                     *(undefined1 *)(lVar2 + 0x15);
                *(undefined4 *)(&uStack_3b8 + lVar12 * 2) = *(undefined4 *)(lVar1 + -0xf0);
                break;
              }
              uVar15 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar21 + 8));
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x10);
        lVar21 = 0;
        if (2 < *(byte *)(*(longlong *)(lVar20 + 0x868) + 1)) {
          lVar21 = lVar13 + 0x4850;
        }
        FUN_180009c18(param_1 + -0x6838,*(undefined8 *)(lVar20 + 0x870),
                      *(undefined8 *)(lVar20 + 0x878),lVar13,&local_3c0,param_1 + 0x748,lVar21,
                      local_3c8,lVar17,param_3,param_4,param_2,iVar10 != 0,0);
      }
      else {
        uVar11 = FUN_180006920(param_1 + -0x6838,lVar21,&local_3c0);
        if ((uVar11 & 1) != 0) {
          uVar15 = 3;
          if (iVar10 == 0) {
            uVar15 = 1;
          }
          FUN_180012790(param_1 + -0x6838,&local_3c0,local_3c8,lVar17,
                        uVar15 | (uint)(*(int *)(param_1 + -0x619c) != 0) << 2,param_3,param_4,
                        param_2,param_7 == 1,in_stack_fffffffffffffbe8 & 0xffffff00);
        }
      }
      FUN_18000f080(param_5 + -0x90);
      if (iVar10 != 0) {
        *(byte *)(param_5 + -4) =
             ~(byte)(*(uint *)(param_5 + -0x40) >> 5) & 1 | *(byte *)(param_5 + -4);
      }
      local_3e0 = 0;
    }
  }
LAB_1800b1acc:
  if (bVar8) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return local_3e0;
}


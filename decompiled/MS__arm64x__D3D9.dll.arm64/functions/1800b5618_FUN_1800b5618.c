/*
 * FUN_1800b5618 at 1800b5618
 * undefined FUN_1800b5618(void)
 * Address ranges: 1800b5618-1800b5e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b5618(longlong param_1,undefined8 param_2,int param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int *local_4a8;
  int local_4a0;
  longlong local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  longlong local_380;
  uint local_378 [66];
  undefined1 auStack_270 [272];
  undefined1 auStack_160 [272];
  
  iVar3 = (int)param_2;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    local_4a0 = 0;
  }
  else {
    iVar6 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    param_2 = extraout_x1;
    local_4a0 = 1;
    if (iVar6 == 0) {
      FUN_180003398();
      local_4a0 = 1;
      param_2 = extraout_x1_00;
    }
  }
  uVar15 = 0x8876086c;
  if (((5 < iVar3 - 1U) || (*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4) <= param_4)) ||
     (*(char *)(param_1 + -0x6568) == '\0')) goto LAB_1800b5e08;
  uVar15 = 0;
  uVar5 = func_0x0001801cea00(param_1 + -0x6838,param_2,*(int *)(param_1 + -0x63a4) != 0);
  uVar5 = FUN_1800b4508(param_1 + -0x6838,uVar5);
  uVar7 = FUN_1800aa688(param_1 + -0x6838,uVar5);
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_1800b4570(param_1 + -0x6838), (uVar7 & 1) == 0)) ||
     ((uVar7 = FUN_1800b4958(param_1 + -0x6838), (uVar7 & 1) == 0 ||
      (uVar7 = FUN_1800aa9f8(param_1 + -0x6838), (uVar7 & 1) == 0)))) goto LAB_1800b5e08;
  uVar15 = 0x8876086c;
  if ((((*(uint *)(*(longlong *)(param_1 + 0x5cb0) + 0x10) & *(uint *)(param_1 + -0x6c) &
        (*(uint *)(param_1 + -0x70) ^ 0xffffffff)) != 0) ||
      (uVar15 = 0, *(char *)(param_1 + -0x1f) != '\0')) || (*(longlong *)(param_1 + -0x6808) == 0))
  goto LAB_1800b5e08;
  if (((*(int *)(*(longlong *)(param_1 + 0x5cb0) + 4) == 0) &&
      (*(longlong *)(param_1 + -0x170) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + -0x170) + 0x8c) == '\0')) {
    iVar6 = *(int *)(param_1 + -0x61a0);
LAB_1800b57b4:
    uVar11 = 1;
  }
  else {
    iVar6 = *(int *)(param_1 + -0x61a0);
    if ((iVar6 == 0) && (*(char *)(param_1 + -0x1d) != '\0')) goto LAB_1800b57b4;
    uVar11 = 3;
  }
  local_4a8 = (int *)(param_1 + -0x61a0);
  uVar1 = *(uint *)(param_1 + -0x6444);
  uVar11 = uVar1 & 0xfffffff9 | (uint)(iVar6 != 0) << 2 | uVar11;
  *(uint *)(param_1 + -0x6444) = uVar11;
  *(byte *)(param_1 + -0x5b26) = uVar11 != uVar1 | *(byte *)(param_1 + -0x5b26);
  FUN_1800aaa78(param_1 + -0x6838,*(longlong *)(param_1 + 0x5c50) == 0);
  if (*(char *)(param_1 + 0x5cd0) == '\0') {
    uVar15 = 0;
    FUN_180004c70(param_1 + -0x6838);
    lVar10 = *(longlong *)(param_1 + 0x5cb0);
    uVar14 = (ulonglong)*(uint *)(&DAT_180230410 + (longlong)iVar3 * 4);
    uVar7 = -(ulonglong)(*(uint *)(&DAT_180230410 + (longlong)iVar3 * 4) >> 0x1f) &
            0xfffffff800000000 | uVar14 << 3;
    iVar3 = *(int *)(&DAT_1802303dc + uVar7) + *(int *)(&DAT_1802303d8 + uVar7) * param_4;
    bVar4 = *(int *)(param_1 + -0x619c) != 0;
    uVar11 = *(uint *)(param_1 + -0x6c) & *(uint *)(lVar10 + 0x10);
    uVar1 = uVar11 & *(uint *)(param_1 + -0x60);
    if (uVar1 == uVar11) {
      uVar1 = *(uint *)(param_1 + -0x5c) & uVar11;
      local_4a8 = (int *)CONCAT44(local_4a8._4_4_,uVar1);
      FUN_180006bc8(param_1 + -0x6838,uVar1,0);
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x170))
                (*(longlong **)(param_1 + -0x6810),uVar14,*(undefined8 *)(param_1 + 0x5cb0),
                 *(undefined8 *)(param_1 + 0x5cc0),param_3,iVar3,bVar4);
      FUN_180006a98(param_1 + -0x6838,(ulonglong)local_4a8 & 0xffffffff,0);
      FUN_1800069f8(param_1 + -0x6838,uVar11,0);
    }
    else if (uVar1 == 0) {
      local_498 = *(longlong *)(param_1 + 0x5cc0);
      if (local_498 == 0) {
        if (((*(int *)(lVar10 + 4) == 0) || (*(int *)(param_1 + -0x619c) == 0)) ||
           ((*(uint *)(param_1 + -0x64d8) < 9 || (*(char *)(param_1 + -0x1d) == '\0')))) {
          if ((uVar11 == 1) && (iVar6 = *(int *)(param_1 + -0xf0), *(int *)(lVar10 + 0xc) == iVar6))
          {
            lVar9 = (ulonglong)*(uint *)(param_1 + -0xb0) + (ulonglong)(uint)(iVar6 * param_3) +
                    *(longlong *)(*(longlong *)(param_1 + -0x170) + 8);
            goto LAB_1800b5be0;
          }
          FUN_180006878(param_1 + -0x6838,lVar10,uVar11,param_3,auStack_160);
          (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x48))
                    (*(longlong **)(param_1 + -0x6810),uVar14,*(undefined8 *)(param_1 + 0x5cb8),
                     auStack_160,iVar3,bVar4);
        }
        else {
          iVar6 = *local_4a8;
          uVar5 = FUN_180009af8(param_1 + -0x6838);
          local_4a8 = (int *)CONCAT44(local_4a8._4_4_,uVar5);
          lVar10 = FUN_180007940(param_1 + -0x64f0,&local_4a8);
          uVar7 = FUN_180012408(param_1 + -0x6838,iVar3,*(undefined4 *)(lVar10 + 0xc));
          if ((uVar7 & 1) != 0) {
            uStack_488 = 0;
            local_490 = 0;
            uStack_478 = 0;
            uStack_480 = 0;
            uStack_468 = 0;
            local_470 = 0;
            uStack_458 = 0;
            uStack_460 = 0;
            uStack_448 = 0;
            local_450 = 0;
            uStack_438 = 0;
            uStack_440 = 0;
            uStack_428 = 0;
            local_430 = 0;
            uStack_418 = 0;
            uStack_420 = 0;
            uStack_408 = 0;
            local_410 = 0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            uStack_3e8 = 0;
            local_3f0 = 0;
            uStack_3d8 = 0;
            uStack_3e0 = 0;
            uStack_3c8 = 0;
            local_3d0 = 0;
            uStack_3b8 = 0;
            uStack_3c0 = 0;
            uStack_3a8 = 0;
            local_3b0 = 0;
            uStack_398 = 0;
            uStack_3a0 = 0;
            uStack_388 = 0;
            local_390 = 0;
            FUN_180006920(param_1 + -0x6838,*(undefined8 *)(param_1 + 0x5cb0),&local_490);
            uVar5 = 7;
            if (iVar6 == 0) {
              uVar5 = 5;
            }
            FUN_180012790(param_1 + -0x6838,&local_490,*(undefined8 *)(param_1 + -0x5a50),lVar10,
                          uVar5,0,iVar3,param_3,0,0);
            iVar6 = *(int *)(lVar10 + 0xc);
            lVar9 = *(longlong *)(param_1 + -0x5a50);
            bVar4 = false;
LAB_1800b5be0:
            (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x38))
                      (*(longlong **)(param_1 + -0x6810),uVar14,lVar10,lVar9,iVar6,iVar3,bVar4);
          }
        }
      }
      else if ((uVar11 == 1) && (iVar6 = *(int *)(param_1 + -0xf0), *(int *)(lVar10 + 0xc) == iVar6)
              ) {
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x140))
                  (*(longlong **)(param_1 + -0x6810),uVar14,lVar10,local_498,
                   (ulonglong)*(uint *)(param_1 + -0xb0) + (ulonglong)(uint)(iVar6 * param_3) +
                   *(longlong *)(*(longlong *)(param_1 + -0x170) + 8),iVar6,iVar3);
      }
      else {
        FUN_180006878(param_1 + -0x6838,lVar10,uVar11,param_3,auStack_270);
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x150))
                  (*(longlong **)(param_1 + -0x6810),uVar14,*(undefined8 *)(param_1 + 0x5cb8),
                   local_498,auStack_270,iVar3);
      }
    }
    else {
      uVar7 = FUN_180006ce0(param_1 + -0x6838,uVar11 & (*(uint *)(param_1 + -0x60) ^ 0xffffffff),
                            param_3,iVar3);
      if ((uVar7 & 1) == 0) {
        uVar15 = 0x8876086d;
      }
      else {
        uVar1 = *(uint *)(param_1 + -0x5c) & uVar11;
        local_4a8 = (int *)CONCAT44(local_4a8._4_4_,uVar1);
        FUN_180006bc8(param_1 + -0x6838,uVar1,0);
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x170))
                  (*(longlong **)(param_1 + -0x6810),uVar14,*(undefined8 *)(param_1 + 0x5cb0),
                   *(undefined8 *)(param_1 + 0x5cc0),param_3,iVar3,bVar4);
        FUN_1800069f8(param_1 + -0x6838,uVar11,0);
        FUN_180006a98(param_1 + -0x6838,(ulonglong)local_4a8 & 0xffffffff);
      }
    }
    if ((*(char *)(param_1 + -0x5a17) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f2) == '\0')) {
      bVar4 = false;
      if (*(char *)(param_1 + -0x656b) == '\0') goto LAB_1800b5d90;
    }
    else {
      bVar4 = true;
    }
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x28))();
    (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
              (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
               *(undefined4 *)(param_1 + -0x6570));
    if (bVar4) {
      (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
                (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
                 *(undefined4 *)(param_1 + -0x6570));
      lVar10 = *(longlong *)(param_1 + -0x6820);
      goto LAB_1800b5d7c;
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x5cb0);
    if (*(int *)(lVar10 + 8) != 0) {
      uVar7 = 0;
      do {
        uVar11 = (int)uVar7 + 1;
        lVar12 = (ulonglong)*(byte *)(lVar10 + 0x214 + uVar7) * 8;
        cVar2 = *(char *)(lVar10 + 0x14 + lVar12);
        lVar9 = param_1 + (longlong)(int)cVar2 * 4;
        uVar1 = *(uint *)(lVar9 + -0xf0);
        lVar13 = *(longlong *)(param_1 + (longlong)(int)cVar2 * 8 + -0x170);
        local_378[uVar7 * 4] = uVar1;
        (&local_380)[uVar7 * 2] =
             (ulonglong)(uVar1 * param_3) + (ulonglong)*(byte *)(lVar10 + 0x17 + lVar12) * 4 +
             (ulonglong)*(uint *)(lVar9 + -0xb0) + *(longlong *)(lVar13 + 8);
        local_378[uVar7 * 4 + 1] =
             *(uint *)(param_1 + 0x5c68 + (longlong)(int)cVar2 * 4) & 0x3fffffff;
        uVar7 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(lVar10 + 8));
    }
    uVar11 = *(uint *)(&DAT_180230410 + (longlong)iVar3 * 4);
    uVar7 = -(ulonglong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulonglong)uVar11 << 3;
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x150))
              (*(longlong **)(param_1 + -0x6810),(ulonglong)uVar11,*(undefined8 *)(param_1 + 0x5cb8)
               ,*(undefined8 *)(param_1 + 0x5cc0),&local_380,
               *(int *)(&DAT_1802303dc + uVar7) + *(int *)(&DAT_1802303d8 + uVar7) * param_4);
    if ((*(char *)(param_1 + -0x5a17) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f2) == '\0')) {
      bVar4 = false;
      if (*(char *)(param_1 + -0x656b) == '\0') goto LAB_1800b5d90;
    }
    else {
      bVar4 = true;
    }
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x28))();
    (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
              (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
               *(undefined4 *)(param_1 + -0x6570));
    if (bVar4) {
      (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
                (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
                 *(undefined4 *)(param_1 + -0x6570));
      lVar10 = *(longlong *)(param_1 + -0x6820);
LAB_1800b5d7c:
      if (*(char *)(lVar10 + 0x7f3) != '\0') {
        (*__imp_KERNEL32_dll_DebugBreak)();
      }
    }
  }
LAB_1800b5d90:
  if (*(char *)(param_1 + -0x656a) == '\0') {
    (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x18))();
    if (*(longlong **)(param_1 + -0x67e8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + -0x67e8) + 0x18))();
    }
    *(undefined1 *)(param_1 + -0x656a) = 1;
  }
  if (*(char *)(param_1 + -0x6569) != '\0') {
    if (*(int *)(param_1 + -0x6358) != 0) {
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + -0x6808) + 8) + 0x70);
      (**(code **)(*plVar8 + 0x40))
                (plVar8,*(undefined4 *)(param_1 + -0x6574),*(undefined4 *)(param_1 + -0x6570),1);
    }
    *(undefined1 *)(param_1 + -0x6569) = 0;
  }
LAB_1800b5e08:
  if (local_4a0 == 0) {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  else {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  return uVar15;
}


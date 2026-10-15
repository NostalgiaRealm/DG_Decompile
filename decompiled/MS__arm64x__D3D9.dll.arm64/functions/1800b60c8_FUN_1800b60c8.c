/*
 * FUN_1800b60c8 at 1800b60c8
 * undefined FUN_1800b60c8(void)
 * Address ranges: 1800b60c8-1800b6633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1800b60c8(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,undefined4 param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int local_170;
  uint local_16c;
  longlong local_160;
  undefined8 uStack_158;
  undefined1 auStack_154 [4];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar3 = (int)param_2;
  uVar15 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar8 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    param_2 = extraout_x1;
    if (iVar8 == 0) {
      FUN_180003398();
      param_2 = extraout_x1_00;
    }
  }
  if (((5 < iVar3 - 1U || param_4 == 0) ||
      (*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4) <= param_3)) ||
     (*(char *)(param_1 + -0x6568) == '\0')) goto LAB_1800b65ec;
  uVar15 = 0;
  uVar9 = func_0x0001801cea00(param_1 + -0x6838,param_2,*(int *)(param_1 + -0x63a4) != 0);
  uVar9 = FUN_1800b4508(param_1 + -0x6838,uVar9);
  uVar10 = FUN_1800aa688(param_1 + -0x6838,uVar9);
  if ((((uVar10 & 1) == 0) || (uVar10 = FUN_1800b4570(param_1 + -0x6838), (uVar10 & 1) == 0)) ||
     ((uVar10 = FUN_1800b4958(param_1 + -0x6838), (uVar10 & 1) == 0 ||
      (uVar10 = FUN_1800aa9f8(param_1 + -0x6838), (uVar10 & 1) == 0)))) goto LAB_1800b65ec;
  uVar15 = 0x8876086c;
  if ((((*(uint *)(*(longlong *)(param_1 + 0x5cb0) + 0x10) & *(uint *)(param_1 + -0x6c)) != 1) ||
      (uVar15 = 0, *(char *)(param_1 + -0x1f) != '\0')) || (*(longlong *)(param_1 + -0x6808) == 0))
  goto LAB_1800b65ec;
  if ((*(int *)(param_1 + -0x61a0) == 0) && (*(char *)(param_1 + -0x1d) != '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((*(int *)(param_1 + -0x63a4) != 0) ||
     (uVar14 = 0, *(int *)(*(longlong *)(param_1 + 0x5cb0) + 4) != 0)) {
    uVar14 = 1;
  }
  uVar2 = *(uint *)(param_1 + -0x6444);
  uVar5 = 3;
  if (!bVar6 || uVar14 == 0) {
    uVar5 = 1;
  }
  uVar5 = uVar2 & 0xfffffff9 | (uint)(*(int *)(param_1 + -0x61a0) != 0) << 2 | uVar5;
  *(uint *)(param_1 + -0x6444) = uVar5;
  *(byte *)(param_1 + -0x5b26) = uVar5 != uVar2 | *(byte *)(param_1 + -0x5b26);
  FUN_1800aaa78(param_1 + -0x6838,*(longlong *)(param_1 + 0x5c50) == 0);
  FUN_180004c70(param_1 + -0x6838);
  lVar12 = *(longlong *)(param_1 + 0x5cb0);
  uVar17 = (ulonglong)*(uint *)(&DAT_180230410 + (longlong)iVar3 * 4);
  uVar10 = -(ulonglong)(*(uint *)(&DAT_180230410 + (longlong)iVar3 * 4) >> 0x1f) &
           0xfffffff800000000 | uVar17 << 3;
  if (*(longlong *)(param_1 + 0x5cc0) == 0) {
    iVar3 = *(int *)(param_1 + -0x61a0);
    iVar8 = *(int *)(&DAT_1802303dc + uVar10) + *(int *)(&DAT_1802303d8 + uVar10) * param_3;
    local_16c = (uint)(*(int *)(param_1 + -0x619c) != 0);
    local_170 = iVar3;
    if ((((*(int *)(lVar12 + 4) == 0) || (*(int *)(param_1 + -0x619c) == 0)) ||
        (*(uint *)(param_1 + -0x64d8) < 9)) || (*(char *)(param_1 + -0x1d) == '\0')) {
      if ((iVar3 != 0) && (*(char *)(param_1 + -0x1d) != '\0')) {
        FUN_180013098(param_1 + -0x6838,param_4,lVar12,0,0,iVar8);
      }
      lVar12 = *(longlong *)(param_1 + 0x5cb0);
      uVar14 = local_16c;
    }
    else {
      local_170 = FUN_180012680(param_1 + -0x6838,lVar12);
      lVar12 = FUN_180007940(param_1 + -0x64f0,&local_170);
      uVar10 = FUN_180012408(param_1 + -0x6838,iVar8,*(undefined4 *)(lVar12 + 0xc));
      if ((uVar10 & 1) == 0) goto LAB_1800b64c0;
      uVar15 = 7;
      if (iVar3 == 0) {
        uVar15 = 5;
      }
      lVar16 = *(longlong *)(param_1 + 0x5cb0);
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uVar10 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      if (*(int *)(lVar16 + 8) != 0) {
        do {
          bVar4 = *(byte *)(lVar16 + 0x214 + uVar10);
          uVar13 = (ulonglong)bVar4;
          if ((bVar4 < 0xf) && ((0x7febU >> (ulonglong)(bVar4 & 0x1f) & 1) != 0)) {
            lVar1 = lVar16 + uVar13 * 8;
            (&local_160)[uVar13 * 2] =
                 param_4 + (ulonglong)*(byte *)(lVar16 + 0x17 + uVar13 * 8) * 4;
            auStack_154[uVar13 * 0x10] = *(undefined1 *)(lVar1 + 0x18);
            *(undefined4 *)(&stack0xfffffffffffffea8 + uVar13 * 2) = *(undefined4 *)(lVar16 + 0xc);
            auStack_154[uVar13 * 0x10 + 1] = *(undefined1 *)(lVar1 + 0x15);
          }
          uVar14 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(lVar16 + 8));
      }
      FUN_180012790(param_1 + -0x6838,&local_160,*(undefined8 *)(param_1 + -0x5a50),lVar12,uVar15,0,
                    iVar8,0,0,0);
      param_5 = *(undefined4 *)(lVar12 + 0xc);
      param_4 = *(longlong *)(param_1 + -0x5a50);
      uVar14 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x38))
              (*(longlong **)(param_1 + -0x6810),uVar17,lVar12,param_4,param_5,iVar8,uVar14);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x140))
              (*(longlong **)(param_1 + -0x6810),uVar17,lVar12,*(longlong *)(param_1 + 0x5cc0),
               param_4,param_5,
               *(int *)(&DAT_1802303dc + uVar10) + *(int *)(&DAT_1802303d8 + uVar10) * param_3);
  }
LAB_1800b64c0:
  FUN_180004f18(param_1 + -0x6838,0);
  if ((*(char *)(param_1 + -0x5a17) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f2) == '\0')) {
    bVar6 = false;
    if (*(char *)(param_1 + -0x656b) != '\0') goto LAB_1800b6508;
  }
  else {
    bVar6 = true;
LAB_1800b6508:
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x28))();
    (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
              (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
               *(undefined4 *)(param_1 + -0x6570));
    if ((bVar6) &&
       ((**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
                  (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
                   *(undefined4 *)(param_1 + -0x6570)),
       *(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f3) != '\0')) {
      (*__imp_KERNEL32_dll_DebugBreak)();
    }
  }
  if (*(char *)(param_1 + -0x656a) == '\0') {
    (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x18))();
    if (*(longlong **)(param_1 + -0x67e8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + -0x67e8) + 0x18))();
    }
    *(undefined1 *)(param_1 + -0x656a) = 1;
  }
  if (*(char *)(param_1 + -0x6569) != '\0') {
    if (*(int *)(param_1 + -0x6358) != 0) {
      plVar11 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + -0x6808) + 8) + 0x70);
      (**(code **)(*plVar11 + 0x40))
                (plVar11,*(undefined4 *)(param_1 + -0x6574),*(undefined4 *)(param_1 + -0x6570),1);
    }
    *(undefined1 *)(param_1 + -0x6569) = 0;
  }
  uVar15 = 0;
LAB_1800b65ec:
  if (bVar7) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar15;
}


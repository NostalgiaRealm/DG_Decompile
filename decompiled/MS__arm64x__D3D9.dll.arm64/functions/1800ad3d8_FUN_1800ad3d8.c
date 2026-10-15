/*
 * FUN_1800ad3d8 at 1800ad3d8
 * undefined FUN_1800ad3d8(void)
 * Address ranges: 1800ad3d8-1800ad85b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ad3d8(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong extraout_x10;
  longlong lVar14;
  longlong *plVar15;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar11 = -0x7789f794;
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_3 == 0) {
    return -0x7789f794;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar9 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar9 == 0) {
      FUN_180003398();
    }
  }
  uVar12 = 1;
  lVar14 = param_3 + -0x80;
  if ((((*(uint *)(param_2 + -0x30) & 3) != 0) &&
      (*(int *)(param_2 + -0x20) == *(int *)(param_3 + -0x20))) &&
     (*(int *)(param_2 + -0x1c) == *(int *)(param_3 + -0x1c))) {
    if (((*(int *)(param_2 + -0x28) == 0) || (*(int *)(param_2 + -0x28) == 1)) &&
       (*(int *)(param_2 + -0x24) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar9 = iVar11;
    if (bVar1) goto LAB_1800ad4fc;
    iVar9 = 0;
    if (*(int *)(param_2 + -0x38) != *(int *)(param_3 + -0x38)) {
      iVar9 = iVar11;
    }
    if ((iVar9 < 0) ||
       (((*(int *)(param_2 + -0x2c) == 0 && (*(int *)(param_3 + -0x2c) == 2)) &&
        (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
         ((*(uint *)(*(longlong *)(param_3 + -0x78) + 0x100) >> 0xb & 1) == 0))))))
    goto LAB_1800ad4fc;
  }
  iVar9 = iVar11;
LAB_1800ad4fc:
  bVar1 = false;
  bVar2 = false;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0xb0);
    bVar1 = (*(uint *)(lVar13 + 0x50) & 0x400) != 0 && lVar13 != param_2 + -0x80;
  }
  if (*(longlong *)(param_3 + 0x48) != 0) {
    lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x48) + 0xb0);
    bVar2 = (*(uint *)(lVar13 + 0x50) & 0x400) != 0 && lVar13 != lVar14;
  }
  if (((!bVar1) && (!bVar2)) && (iVar11 = iVar9, -1 < iVar9)) {
    if (*(char *)(param_1 + -0x1f) == '\0') {
      local_a0 = *(longlong *)(param_2 + -0x78);
      uVar3 = *(undefined4 *)(param_2 + -0x20);
      uVar4 = *(undefined4 *)(param_2 + -0x1c);
      lStack_98 = *(longlong *)(param_3 + -0x78);
      if (((*(int *)(*(longlong *)(local_a0 + 0x70) + 8) == 2) &&
          (*(int *)(*(longlong *)(lStack_98 + 0x70) + 8) != 2)) &&
         ((*(uint *)(param_3 + -0x2c) & 0xfffffffd) == 0)) {
        FUN_18000be00(lVar14);
      }
      FUN_18000bc70(lVar14,param_2 + -0x80);
      if ((*(uint *)(param_3 + -0x30) & 1) != 0) {
        local_70 = *(undefined8 *)(*(longlong *)(param_3 + -0x78) + 0x70);
        local_60 = 0;
        uStack_58 = 0;
        uStack_68 = 0;
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x80))
                  (*(longlong **)(param_1 + -0x6810),&local_70,0);
      }
      iVar9 = func_0x000180107140(*(undefined4 *)(param_2 + -0x38));
      iVar10 = func_0x0001801071f0(extraout_x10 & 0xffffffff);
      iVar11 = *(int *)(param_2 + -0x10);
      local_c0 = 0;
      local_b8 = 0;
      local_90 = *(undefined8 *)(*(longlong *)(param_2 + -0x78) + 0x70);
      local_b4 = 1;
      uStack_d8 = 0;
      local_e0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_ac = *(undefined4 *)(local_a0 + 0x94);
      uVar5 = *(undefined4 *)(local_a0 + 0x98);
      local_a4 = *(undefined4 *)(lStack_98 + 0x94);
      local_a8 = *(undefined4 *)(lStack_98 + 0x98);
      uStack_88 = *(undefined8 *)(*(longlong *)(param_3 + -0x78) + 0x70);
      local_b0 = *(int *)(param_3 + -0x10);
      plVar15 = *(longlong **)(param_1 + -0x59a0);
      (*__imp_USER32_dll_SetRect)(&local_d0,0,0,uVar3,uVar4);
      (*__imp_USER32_dll_SetRect)(&local_e0,0,0,uVar3,uVar4);
      if ((iVar11 == local_b0) && (iVar11 - 0xeU < 7)) {
        uVar6 = -iVar9;
        uVar7 = -iVar10;
        local_d0 = CONCAT44(uVar7 & local_d0._4_4_,uVar6 & (uint)local_d0);
        local_c8 = CONCAT44((local_c8._4_4_ + iVar10) - 1U & uVar7,
                            ((int)local_c8 + iVar9) - 1U & uVar6);
        local_e0 = CONCAT44(uVar7 & local_e0._4_4_,uVar6 & (uint)local_e0);
        uStack_d8 = CONCAT44((uStack_d8._4_4_ + iVar10) - 1U & uVar7,
                             ((int)uStack_d8 + iVar9) - 1U & uVar6);
      }
      iVar11 = (*__imp_USER32_dll_IsRectEmpty)(&local_d0);
      if ((iVar11 == 0) && (iVar11 = (*__imp_USER32_dll_IsRectEmpty)(&local_e0), iVar11 == 0)) {
        uVar12 = (**(code **)(*plVar15 + 0x108))
                           (plVar15,local_a4,local_a8,local_ac,uVar5,uStack_88,local_90,&local_e0);
        uVar12 = uVar12 & 1;
      }
      iVar11 = 0;
      if (uVar12 == 0) {
        iVar11 = -0x7789f7d9;
      }
      if (*(longlong *)(*(longlong *)(param_3 + -0x78) + 0x70) != 0) {
        FUN_180005df8(*(undefined8 *)(param_3 + -0x58),lVar14);
      }
      if (uVar12 != 0) {
        if ((((*(int *)(*(longlong *)(param_3 + -0x78) + 0xf0) != 0) &&
             ((*(uint *)(param_3 + -0x30) & 1) != 0)) && (*(uint *)(param_3 + -0x20) < 5)) &&
           (*(uint *)(param_3 + -0x1c) < 5)) {
          plVar15 = *(longlong **)(*(longlong *)(param_3 + -0x78) + 0x70);
          (**(code **)(*plVar15 + 0x68))
                    (plVar15,*(undefined4 *)(lStack_98 + 0x98),*(undefined4 *)(local_a0 + 0x94));
        }
        if (*(longlong *)(param_3 + 0x48) != 0) {
          lVar14 = *(longlong *)(*(longlong *)(param_3 + 0x48) + 0x48);
          local_80 = 0;
          local_78 = uVar3;
          uStack_74 = uVar4;
          (*__imp_USER32_dll_UnionRect)
                    (lVar14 + (ulonglong)*(uint *)(param_3 + -0x14) * 0x10,
                     lVar14 + (ulonglong)*(uint *)(param_3 + -0x14) * 0x10,&local_80);
        }
      }
    }
    else {
      iVar11 = -0x7789f798;
    }
  }
  if (bVar8) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar11;
}


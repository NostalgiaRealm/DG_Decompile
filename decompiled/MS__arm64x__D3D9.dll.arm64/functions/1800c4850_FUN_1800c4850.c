/*
 * FUN_1800c4850 at 1800c4850
 * undefined FUN_1800c4850(void)
 * Address ranges: 1800c4850-1800c4b0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c4850(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [4];
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 0x40);
  iVar6 = FUN_180001590(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) + iVar6 != 0) goto LAB_1800c4ac4;
  lVar11 = param_1 + -0x80;
  if (((*(uint *)(*(longlong *)(param_1 + 0x38) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
  if ((*(longlong *)(param_1 + 0x50) == 0) && (*(longlong *)(param_1 + 0x48) == 0)) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    bVar4 = false;
    uVar9 = 0;
    uVar8 = *(undefined8 *)(lVar10 + 0x50);
    do {
      if (bVar4) break;
      local_60[uVar9] = *(undefined8 *)(lVar10 + 0x30 + uVar9 * 8);
      if (lVar11 == *(longlong *)(lVar10 + 0xc460 + uVar9 * 8)) {
        *(undefined8 *)(lVar10 + 0xc460 + uVar9 * 8) = 0;
        local_60[uVar9] = 0;
        bVar4 = true;
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < 4);
    if (lVar11 == *(longlong *)(lVar10 + 0xc480)) {
      *(undefined8 *)(lVar10 + 0xc480) = 0;
      uVar8 = 0;
LAB_1800c4968:
      if (*(longlong *)(lVar10 + 0xc460) == 0) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x88))
                  (*(longlong **)(lVar10 + 0x28),4,1,&local_e0,&local_100);
      }
      else {
        FUN_1800109c8(lVar10,local_60,uVar8,0);
      }
    }
    else if (bVar4) goto LAB_1800c4968;
    FUN_180005d30(lVar10,lVar11);
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x38);
    bVar4 = false;
    uVar9 = 0;
    uVar8 = *(undefined8 *)(lVar10 + 0x50);
    do {
      if (bVar4) break;
      local_60[uVar9] = *(undefined8 *)(lVar10 + 0x30 + uVar9 * 8);
      if (lVar11 == *(longlong *)(lVar10 + 0xc460 + uVar9 * 8)) {
        bVar4 = true;
        *(undefined8 *)(lVar10 + 0xc460 + uVar9 * 8) = 0;
        local_60[uVar9] = 0;
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < 4);
    if (lVar11 == *(longlong *)(lVar10 + 0xc480)) {
      *(undefined8 *)(lVar10 + 0xc480) = 0;
      uVar8 = 0;
LAB_1800c4a38:
      if (*(longlong *)(lVar10 + 0xc460) == 0) {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x88))
                  (*(longlong **)(lVar10 + 0x28),4,1,&local_a0,&local_f0);
      }
      else {
        FUN_1800109c8(lVar10,local_60,uVar8,0);
      }
    }
    else if (bVar4) goto LAB_1800c4a38;
  }
  FUN_18000bb38(lVar11);
  if (lVar11 != 0) {
    FUN_1800c4370(lVar11);
    FUN_180102fc0(lVar11,0xd8);
  }
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
LAB_1800c4ac4:
  if (plVar3 == (longlong *)0x0) {
    if (iVar6 == 0) {
      FUN_1800a9f28(lVar2 + 0x6838);
    }
  }
  else {
    iVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return iVar6;
}


/*
 * FUN_1800c43c0 at 1800c43c0
 * undefined FUN_1800c43c0(void)
 * Address ranges: 1800c43c0-1800c472f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c43c0(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50 [4];
  
  iVar4 = FUN_180001590(param_1 + 0xac);
  if (iVar4 + *(int *)(param_1 + 0xa8) != 0) {
    return;
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar4 == 0) {
      FUN_180003398();
    }
  }
  if ((*(longlong *)(param_1 + 0xd0) != 0) || (*(longlong *)(param_1 + 200) != 0)) {
    lVar7 = *(longlong *)(param_1 + 0xb8);
    bVar2 = false;
    uVar6 = 0;
    uVar5 = *(undefined8 *)(lVar7 + 0x50);
    do {
      if (bVar2) break;
      local_50[uVar6] = *(undefined8 *)(lVar7 + 0x30 + uVar6 * 8);
      if (param_1 == *(longlong *)(lVar7 + 0xc460 + uVar6 * 8)) {
        bVar2 = true;
        *(undefined8 *)(lVar7 + 0xc460 + uVar6 * 8) = 0;
        local_50[uVar6] = 0;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < 4);
    if (param_1 == *(longlong *)(lVar7 + 0xc480)) {
      *(undefined8 *)(lVar7 + 0xc480) = 0;
      uVar5 = 0;
    }
    else if (!bVar2) goto LAB_1800c45d8;
    if (*(longlong *)(lVar7 + 0xc460) == 0) {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x88))
                (*(longlong **)(lVar7 + 0x28),4,1,&local_90,&local_e0);
    }
    else {
      FUN_1800109c8(lVar7,local_50,uVar5,0);
    }
    goto LAB_1800c45d8;
  }
  lVar7 = *(longlong *)(param_1 + 0xb8);
  bVar2 = false;
  uVar6 = 0;
  uVar5 = *(undefined8 *)(lVar7 + 0x50);
  do {
    if (bVar2) break;
    local_50[uVar6] = *(undefined8 *)(lVar7 + 0x30 + uVar6 * 8);
    if (param_1 == *(longlong *)(lVar7 + 0xc460 + uVar6 * 8)) {
      *(undefined8 *)(lVar7 + 0xc460 + uVar6 * 8) = 0;
      local_50[uVar6] = 0;
      bVar2 = true;
    }
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar1;
  } while (uVar1 < 4);
  if (param_1 == *(longlong *)(lVar7 + 0xc480)) {
    *(undefined8 *)(lVar7 + 0xc480) = 0;
    uVar5 = 0;
LAB_1800c44bc:
    if (*(longlong *)(lVar7 + 0xc460) == 0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x88))
                (*(longlong **)(lVar7 + 0x28),4,1,&local_d0,&local_f0);
    }
    else {
      FUN_1800109c8(lVar7,local_50,uVar5,0);
    }
  }
  else if (bVar2) goto LAB_1800c44bc;
  FUN_180005d30(lVar7,param_1);
LAB_1800c45d8:
  puVar8 = *(undefined8 **)(param_1 + 8);
  iVar4 = *(int *)((longlong)puVar8 + 0x104) + -1;
  *(int *)((longlong)puVar8 + 0x104) = iVar4;
  if (iVar4 == 0) {
    uVar6 = 0;
    if (*(int *)(puVar8 + 0x10) != 0) {
      do {
        (**(code **)(**(longlong **)(puVar8[0xf] + uVar6 * 8) + 0x20))();
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(puVar8 + 0x10));
    }
    thunk_FUN_180102fc0(puVar8[0xf]);
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    if ((*(uint *)(puVar8 + 9) >> 3 & 1) == 0) {
      FUN_180023590(puVar8,puVar8[0x1f],*(int *)(puVar8 + 3) * 0x40 + 0xfffU & 0xfffff000);
    }
    if (puVar8[0x17] != 0) {
      (*__imp_GDI32_dll_DeleteObject)();
      puVar8[0x17] = 0;
      puVar8[0x1c] = 0;
    }
    if (((*(int *)((longlong)puVar8 + 0x94) == 0) && (*(int *)(puVar8 + 0x13) == 0)) &&
       ((longlong *)puVar8[0xe] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)puVar8[0xe] + 0x20))();
    }
    if (puVar8[0x1f] - 1 < 0xfffffffffffffffe) {
      (*__imp_KERNEL32_dll_CloseHandle)();
    }
    puVar8[0x1f] = 0xffffffffffffffff;
    *puVar8 = &PTR_D3DPERF_GetStatus_18022a8e0;
    thunk_FUN_180102fc0(puVar8[0xf]);
    FUN_180102fc0(puVar8,0x108);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_180103118(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1800c4370(param_1);
  FUN_180102fc0(param_1,0xd8);
  if (bVar3) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return;
}


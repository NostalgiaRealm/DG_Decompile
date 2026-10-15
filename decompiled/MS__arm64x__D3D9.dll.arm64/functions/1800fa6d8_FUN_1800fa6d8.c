/*
 * FUN_1800fa6d8 at 1800fa6d8
 * undefined FUN_1800fa6d8(void)
 * Address ranges: 1800fa6d8-1800faa3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fa6d8(longlong param_1,longlong param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,longlong param_8,undefined4 param_9,
                  longlong param_10,undefined4 param_11)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_dc;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_90 [2];
  undefined8 local_88;
  ulonglong uStack_80;
  int local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  plVar1 = (longlong *)(param_2 + 0xdb8);
  lVar12 = 0;
  local_d0 = param_5;
  uStack_cc = param_6;
  do {
    if (plVar1[lVar12] != 0) {
      FUN_1800fdbb0(param_1 + (ulonglong)uVar2 * 0x1ac0 + 0x21b8);
      plVar1[lVar12] = 0;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 2);
  iVar4 = *(int *)(param_2 + 0xdc8);
  if (iVar4 != -1) {
    lVar12 = *(longlong *)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x2230);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar12 + 0x28);
    FUN_1800e70e0(lVar12,iVar4,2);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar12 + 0x28);
    *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
  }
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != 0)) {
    local_88 = 0;
    local_6c = 1;
    lVar12 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    local_64 = 0;
    local_90[0] = 3;
    local_74 = 0x1b00010001;
    uStack_80 = (ulonglong)param_3;
    local_78 = param_4;
    iVar4 = FUN_1800e7220(*(undefined8 *)(lVar12 + 0x2230),2);
    *(int *)(param_2 + 0xdc8) = iVar4;
    if (iVar4 != -1) {
      local_dc = 0;
      lVar9 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20;
      bVar3 = *(char *)(lVar9 + 0x6e8) != '\0';
      uVar10 = 4;
      if (!bVar3) {
        uVar10 = 1;
      }
      uVar11 = 2;
      if (!bVar3) {
        uVar11 = 0;
      }
      local_e8 = CONCAT44(uVar11,uVar10);
      local_e0 = (uint)bVar3;
      lVar5 = FUN_1800fae80(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x21b8,
                            &local_e8,0,local_90);
      if (lVar5 == 0) {
        plVar6 = *(longlong **)(lVar9 + 0x6d0);
        local_f0 = 0;
        (**(code **)(*plVar6 + 0xd8))(plVar6,&local_e8,0,local_90,0,0,&DAT_180235458,&local_f0);
        lVar5 = local_f0;
      }
      *plVar1 = lVar5;
      if (lVar5 != 0) {
        local_c0 = 0x40000001c;
        local_b8 = 0x1688;
        local_b0 = 0xffffffff00000000;
        uStack_a8 = 0;
        local_a0 = 0;
        puVar7 = (undefined8 *)
                 FUN_1800e7b48(*(undefined8 *)(lVar12 + 0x2230),&local_f0,
                               *(undefined4 *)(param_2 + 0xdc8),0);
        plVar6 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0);
        (**(code **)(*plVar6 + 0x90))(plVar6,*plVar1,&local_c0,*puVar7);
        local_e8 = 0;
        local_e0 = 0;
        local_dc = CONCAT44(param_4,param_3);
        uStack_d4 = 1;
        uVar8 = FUN_1800ebbb8(*(undefined8 *)(lVar12 + 0x1e08),*plVar1,0,lVar12 + 0x1fd0,&local_e8,
                              param_8,param_9,0);
        if ((uVar8 & 1) != 0) {
          *(undefined4 *)(param_2 + 0xc50) = param_7;
          *(undefined4 *)(param_2 + 0xc48) = local_d0;
          *(undefined4 *)(param_2 + 0xc4c) = uStack_cc;
          if (param_10 == 0) {
            return;
          }
          lVar9 = FUN_1800fab68(param_1,*(undefined4 *)(param_2 + 0x10),local_90);
          *(longlong *)(param_2 + 0xdc0) = lVar9;
          if (lVar9 != 0) {
            puVar7 = (undefined8 *)
                     FUN_1800e7b48(*(undefined8 *)(lVar12 + 0x2230),&local_f0,
                                   *(undefined4 *)(param_2 + 0xdc8),1);
            plVar6 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0);
            (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_2 + 0xdc0),&local_c0,*puVar7)
            ;
            uVar8 = FUN_1800ebbb8(*(undefined8 *)(lVar12 + 0x1e08),*(undefined8 *)(param_2 + 0xdc0),
                                  0,lVar12 + 0x1fd0,&local_e8,param_10,param_11,0);
            if ((uVar8 & 1) != 0) {
              return;
            }
            (**(code **)(**(longlong **)(param_2 + 0xdc0) + 0x10))();
            *(undefined8 *)(param_2 + 0xdc0) = 0;
          }
        }
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
        *plVar1 = 0;
      }
      iVar4 = *(int *)(param_2 + 0xdc8);
      if (iVar4 != -1) {
        lVar12 = *(longlong *)(lVar12 + 0x2230);
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar12 + 0x28);
        FUN_1800e70e0(lVar12,iVar4,2);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar12 + 0x28);
      }
      *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
    }
  }
  return;
}


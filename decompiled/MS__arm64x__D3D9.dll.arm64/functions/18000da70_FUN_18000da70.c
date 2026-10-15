/*
 * FUN_18000da70 at 18000da70
 * undefined FUN_18000da70(void)
 * Address ranges: 18000da70-18000dfbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18000da70(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int param_5,
             int param_6,ulonglong *param_7,undefined8 *param_8,undefined1 param_9,uint param_10,
             longlong param_11,ulonglong *param_12)

{
  uint uVar1;
  int iVar2;
  ulonglong *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  undefined8 local_d0;
  ulonglong uStack_c8;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  ulonglong *local_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint3 local_78;
  undefined1 uStack_75;
  undefined1 local_74;
  undefined8 local_70;
  ulonglong *puStack_68;
  undefined8 *local_60;
  undefined1 local_58;
  
  if (param_11 == 0) {
    param_11 = param_1[0x11];
  }
  local_b0 = (int)param_1[0x15];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_bc = (undefined4)param_1[3];
  uVar8 = *(undefined4 *)((longlong)param_1 + 0xb4);
  local_b8 = *(int *)((longlong)param_1 + 0xac);
  lVar14 = param_1[0x16];
  plVar17 = (longlong *)param_1[0x10];
  local_d0 = CONCAT44(local_d0._4_4_,(int)param_1[0x18]);
  iVar11 = (int)param_1[0x12];
  local_b4 = *(int *)((longlong)param_1 + 0x94);
  local_c0 = param_6;
  local_a8 = param_7;
  if ((param_5 == -1) &&
     (param_5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))(), param_5 == 0)) {
    param_5 = 1;
  }
  iVar6 = local_c0;
  if ((local_c0 == -1) && (iVar6 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))(), iVar6 == 0)
     ) {
    iVar6 = 1;
  }
  puVar3 = local_a8;
  local_70 = *(undefined8 *)(param_2 + 8);
  puStack_68 = local_a8;
  local_58 = param_9;
  local_60 = param_8;
  plVar12 = (longlong *)
            (**(code **)(*plVar17 + 0x60))
                      (plVar17,param_11,param_5,iVar6,local_d0 & 0xffffffff,local_bc,uVar7,
                       (int)lVar14,uVar8,&local_70);
  if (plVar12 == (longlong *)0x0) {
    uVar16 = 0;
  }
  else {
    cVar5 = (**(code **)(*plVar12 + 0x70))();
    if (cVar5 == '\0') {
      local_80 = 0;
      _local_78 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = 0;
      local_74 = 1;
      if (puVar3 == (ulonglong *)0x0) {
        iVar2 = *(int *)(param_2 + 0x24);
        iVar6 = *(int *)(param_2 + 0x28);
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        (*__imp_USER32_dll_SetRect)(&local_90,0,0,iVar2,iVar6);
      }
      else {
        uStack_88 = puVar3[1];
        local_90 = *puVar3;
      }
      local_78 = (uint3)(byte)local_78;
      if (param_8 == (undefined8 *)0x0) {
        uVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
        uVar8 = (**(code **)(*plVar12 + 0x10))(plVar12);
        (*__imp_USER32_dll_SetRect)(&local_a0,0,0,uVar8,uVar7);
      }
      else {
        uStack_98 = param_8[1];
        local_a0 = *param_8;
      }
      (**(code **)(*plVar17 + 0x108))
                (plVar17,0,0,0,0,plVar12,*(undefined8 *)(param_2 + 8),&local_a0);
    }
    (*__imp_USER32_dll_GetCursorPos)(&local_d0);
    (*__imp_USER32_dll_MapWindowPoints)(0,param_11,&local_d0,1);
    if (local_b4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000dcb8);
      (*pcVar4)();
    }
    iVar6 = 0;
    if (local_b4 != 0) {
      iVar6 = (local_d0._4_4_ * local_b8) / local_b4;
    }
    if (iVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000dcd4);
      (*pcVar4)();
    }
    iVar2 = 0;
    if (iVar11 != 0) {
      iVar2 = ((int)local_d0 * local_b0) / iVar11;
    }
    (**(code **)(*plVar12 + 0x60))(plVar12,iVar2,iVar6);
    lVar13 = (**(code **)(*param_1 + 0x28))(param_1);
    lVar14 = DAT_18024de60;
    if (lVar13 != 0) {
      (*__imp_KERNEL32_dll_EnterCriticalSection)(DAT_18024de60 + 0x388);
      if (*(char *)(lVar14 + 0x7e9) != '\0') {
        (*__imp_USER32_dll_SendMessageW)(lVar13,0x401,0x44454745,plVar12);
      }
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar14 + 0x388);
    }
    lVar14 = (**(code **)(*param_1 + 0x28))(param_1);
    if (lVar14 != 0) {
      uVar15 = (**(code **)(*param_1 + 0x20))(param_1);
      lVar13 = DAT_18024de60;
      local_a8 = (ulonglong *)(&DAT_180253850)[(uVar15 & 0xffffffff) * 0x4b];
      if (param_10 == 0) {
        param_10 = (uint)(*(char *)(DAT_18024de60 + 0x886) != '\0');
      }
      uVar18 = *(uint *)(DAT_18024de60 + 0x9d3);
      iVar11 = *(int *)(DAT_18024de60 + 0x9cf);
      uVar7 = 0;
      if (((iVar11 == 3) || (iVar11 == 2 && *(int *)(param_2 + 0x40) == 0x10)) ||
         ((iVar11 == 1 && *(int *)(param_2 + 0x40) == 0x10 &&
          (cVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x38))
                             (*(longlong **)(param_2 + 8),*(undefined4 *)(param_2 + 0x2c),
                              *(undefined4 *)(param_2 + 0x30)), cVar5 != '\0')))) {
        if (*(int *)(lVar13 + 0x9cb) == 1) {
          uVar7 = 2;
        }
        else {
          uVar7 = 0;
          if (*(int *)(lVar13 + 0x9cb) == 2) {
            uVar7 = 4;
          }
        }
        if (uVar18 == 0) {
          uVar10 = *(uint *)(param_2 + 0x24);
          uVar1 = *(uint *)(param_2 + 0x28);
          plVar17 = *(longlong **)(param_2 + 8);
          uVar9 = (**(code **)(*plVar17 + 0x10))(plVar17);
          if (uVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000de44);
            (*pcVar4)();
          }
          uVar18 = 0;
          if (uVar10 != 0) {
            uVar18 = uVar9 / uVar10;
          }
          uVar10 = (**(code **)(*plVar17 + 0x18))(plVar17);
          if (uVar1 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000de64);
            (*pcVar4)();
          }
          uVar9 = 0;
          if (uVar1 != 0) {
            uVar9 = uVar10 / uVar1;
          }
          if (uVar18 == 0) {
            uVar18 = 1;
          }
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          if (uVar9 <= uVar18) {
            uVar18 = uVar9;
          }
        }
      }
      (**(code **)(**(longlong **)(param_2 + 8) + 0x40))
                (*(longlong **)(param_2 + 8),*(undefined4 *)(param_2 + 0x2c),
                 *(undefined4 *)(param_2 + 0x30),0);
      (*__imp_USER32_dll_SetRectEmpty)(&local_d0);
      if (((param_12 != (ulonglong *)0x0) &&
          (iVar11 = (*__imp_USER32_dll_IsRectEmpty)(param_12), iVar11 == 0)) &&
         (((*(uint *)(lVar13 + 0x8c2) >> 2 & 1) != 0 ||
          (cVar5 = (**(code **)(*plVar12 + 0x28))(plVar12), cVar5 != '\0')))) {
        uStack_c8 = param_12[1];
        local_d0 = *param_12;
      }
      FUN_180024100(param_2);
      uVar15 = FUN_180024100(param_2);
      if ((uVar15 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(lVar13 + 0x89e);
      }
      uStack_88 = CONCAT44(uVar18,uVar7);
      local_a0 = *(undefined8 *)(param_2 + 8);
      local_80._0_5_ = CONCAT14(*(undefined1 *)(lVar13 + 0x883),uVar8);
      local_90 = uStack_c8;
      uStack_98 = local_d0;
      (**(code **)(*local_a8 + 0xf8))(local_a8,lVar14,plVar12,param_10,&local_a0);
    }
    uVar15 = (**(code **)(*param_1 + 0x20))(param_1);
    iVar11 = (**(code **)(*(longlong *)(&DAT_180253850)[(uVar15 & 0xffffffff) * 0x4b] + 0x38))();
    if (iVar11 != 1) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    uVar16 = 1;
  }
  return uVar16;
}


/*
 * FUN_180023080 at 180023080
 * undefined FUN_180023080(void)
 * Address ranges: 180023080-1800232e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180023080(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
             int *param_13)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint3 local_48;
  undefined1 uStack_45;
  undefined1 local_44;
  
  iVar4 = *(int *)(param_2 + 1);
  if ((iVar4 == -1) && (iVar4 = (**(code **)(**(longlong **)(param_4 + 8) + 0x10))(), iVar4 == 0)) {
    iVar4 = 1;
  }
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  if ((iVar5 == -1) && (iVar5 = (**(code **)(**(longlong **)(param_4 + 8) + 0x18))(), iVar5 == 0)) {
    iVar5 = 1;
  }
  local_98 = *(undefined8 *)(param_4 + 8);
  local_80 = param_12;
  puStack_90 = param_7;
  local_88 = param_8;
  plVar8 = (longlong *)
           (**(code **)(*param_3 + 0x60))
                     (param_3,*param_2,iVar4,iVar5,*(undefined4 *)(param_2 + 2),
                      *(undefined4 *)((longlong)param_2 + 0x14),*(undefined4 *)(param_2 + 3),
                      *(undefined4 *)((longlong)param_2 + 0x1c),*(undefined4 *)(param_2 + 4),
                      &local_98);
  if (plVar8 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar8 + 0x70))();
    if (cVar3 == '\0') {
      local_50 = 0;
      _local_48 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      local_44 = 1;
      if (param_7 == (undefined8 *)0x0) {
        iVar5 = *(int *)(param_4 + 0x24);
        iVar4 = *(int *)(param_4 + 0x28);
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        (*__imp_USER32_dll_SetRect)(&local_60,0,0,iVar5,iVar4);
      }
      else {
        uStack_58 = param_7[1];
        local_60 = *param_7;
      }
      local_48 = (uint3)(byte)local_48;
      if (param_8 == (undefined8 *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x18))(plVar8);
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
        (*__imp_USER32_dll_SetRect)(&local_70,0,0,uVar7,uVar6);
      }
      else {
        uStack_68 = param_8[1];
        local_70 = *param_8;
      }
      (**(code **)(*param_3 + 0x108))(param_3,0,0,0,0,plVar8,*(undefined8 *)(param_4 + 8),&local_70)
      ;
    }
    if (param_13 != (int *)0x0) {
      (*__imp_USER32_dll_GetCursorPos)(&local_a0);
      (*__imp_USER32_dll_MapWindowPoints)(0,*param_2,&local_a0,1);
      iVar4 = param_13[3];
      if (iVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18002327c);
        (*pcVar2)();
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = (param_13[2] * local_9c) / iVar4;
      }
      iVar4 = param_13[1];
      if (iVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180023294);
        (*pcVar2)();
      }
      iVar1 = 0;
      if (iVar4 != 0) {
        iVar1 = (*param_13 * local_a0) / iVar4;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,iVar1,iVar5);
    }
    FUN_180022d88(param_1,plVar8,param_4,param_9,param_10);
    uVar9 = 1;
  }
  return uVar9;
}


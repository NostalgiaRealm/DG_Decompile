/*
 * FUN_180022d88 at 180022d88
 * undefined FUN_180022d88(void)
 * Address ranges: 180022d88-180023073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022d88(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  uint param_5)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined1 local_5c;
  
  lVar7 = (**(code **)(*param_1 + 0x28))();
  lVar8 = DAT_18024de60;
  if (lVar7 != 0) {
    (*__imp_KERNEL32_dll_EnterCriticalSection)(DAT_18024de60 + 0x388);
    if (*(char *)(lVar8 + 0x7e9) != '\0') {
      (*__imp_USER32_dll_SendMessageW)(lVar7,0x401,0x44454745,param_2);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar8 + 0x388);
  }
  lVar8 = (**(code **)(*param_1 + 0x28))(param_1);
  if (lVar8 != 0) {
    uVar9 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar7 = DAT_18024de60;
    plVar10 = (longlong *)(&DAT_180253850)[(uVar9 & 0xffffffff) * 0x4b];
    if (param_5 == 0) {
      param_5 = (uint)(*(char *)(DAT_18024de60 + 0x886) != '\0');
    }
    uVar13 = *(uint *)(DAT_18024de60 + 0x9d3);
    iVar6 = *(int *)(DAT_18024de60 + 0x9cf);
    uVar12 = 0;
    if (((iVar6 == 3) || (iVar6 == 2 && *(int *)(param_3 + 0x40) == 0x10)) ||
       ((iVar6 == 1 && *(int *)(param_3 + 0x40) == 0x10 &&
        (cVar3 = (**(code **)(**(longlong **)(param_3 + 8) + 0x38))
                           (*(longlong **)(param_3 + 8),*(undefined4 *)(param_3 + 0x2c),
                            *(undefined4 *)(param_3 + 0x30)), cVar3 != '\0')))) {
      if (*(int *)(lVar7 + 0x9cb) == 1) {
        uVar12 = 2;
      }
      else {
        uVar12 = 0;
        if (*(int *)(lVar7 + 0x9cb) == 2) {
          uVar12 = 4;
        }
      }
      if (uVar13 == 0) {
        uVar5 = *(uint *)(param_3 + 0x24);
        uVar1 = *(uint *)(param_3 + 0x28);
        plVar11 = *(longlong **)(param_3 + 8);
        uVar4 = (**(code **)(*plVar11 + 0x10))();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180022f0c);
          (*pcVar2)();
        }
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar4 / uVar5;
        }
        uVar5 = (**(code **)(*plVar11 + 0x18))();
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180022f2c);
          (*pcVar2)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = uVar5 / uVar1;
        }
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        if (uVar4 <= uVar13) {
          uVar13 = uVar4;
        }
      }
    }
    (**(code **)(**(longlong **)(param_3 + 8) + 0x40))
              (*(longlong **)(param_3 + 8),*(undefined4 *)(param_3 + 0x2c),
               *(undefined4 *)(param_3 + 0x30),0);
    (*__imp_USER32_dll_SetRectEmpty)(&local_90);
    if (((param_4 != (undefined8 *)0x0) &&
        (iVar6 = (*__imp_USER32_dll_IsRectEmpty)(param_4), iVar6 == 0)) &&
       (((*(uint *)(lVar7 + 0x8c2) >> 2 & 1) != 0 ||
        (cVar3 = (**(code **)(*param_2 + 0x28))(param_2), cVar3 != '\0')))) {
      uStack_88 = param_4[1];
      local_90 = *param_4;
    }
    FUN_180024100(param_3);
    uVar9 = FUN_180024100(param_3);
    if ((uVar9 & 1) == 0) {
      local_60 = 0;
    }
    else {
      local_60 = *(undefined4 *)(lVar7 + 0x89e);
    }
    local_5c = *(undefined1 *)(lVar7 + 0x883);
    local_80 = *(undefined8 *)(param_3 + 8);
    uStack_70 = uStack_88;
    local_78 = local_90;
    local_68 = uVar12;
    uStack_64 = uVar13;
    (**(code **)(*plVar10 + 0xf8))(plVar10,lVar8,param_2,param_5,&local_80);
  }
  uVar9 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar6 = (**(code **)(*(longlong *)(&DAT_180253850)[(uVar9 & 0xffffffff) * 0x4b] + 0x38))();
  if (iVar6 != 1) {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}


/*
 * FUN_1800e0bf0 at 1800e0bf0
 * undefined FUN_1800e0bf0(void)
 * Address ranges: 1800e0bf0-1800e0eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e0bf0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  
  plVar2 = (longlong *)(param_2 + 0xd88);
  plVar8 = (longlong *)*plVar2;
  if (plVar8 == (longlong *)0x0) goto LAB_1800e0d58;
  (**(code **)(*plVar8 + 0x50))(plVar8,&local_88);
  uVar11 = *(uint *)(param_2 + 0x20);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800e0c48);
    (*pcVar5)();
  }
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = *(uint *)(param_2 + 0x18) / uVar11;
  }
  if (local_88 == uVar4) {
    uVar11 = *(uint *)(param_2 + 0x24);
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800e0c68);
      (*pcVar5)();
    }
    uVar4 = 0;
    if (uVar11 != 0) {
      uVar4 = *(uint *)(param_2 + 0x1c) / uVar11;
    }
    if (local_84 != uVar4) goto LAB_1800e0c88;
    bVar6 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_1800e0c88:
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar10 = 0;
      do {
        plVar8 = *(longlong **)(param_2 + 0xd98 + uVar10 * 8);
        if (plVar8 != (longlong *)0x0) {
          uVar11 = *(uint *)(param_2 + 0x10);
          (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x620);
          lVar1 = param_1 + (ulonglong)uVar11 * 0x18c0 + 0xbc0;
          lVar9 = 0;
          do {
            if (plVar8 == *(longlong **)(lVar1 + lVar9 * 8)) {
              *(undefined8 *)(lVar1 + lVar9 * 8) = 0;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 != 4);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x620);
          *(undefined8 *)(param_2 + 0xd98 + uVar10 * 8) = 0;
        }
        plVar8 = *(longlong **)(param_2 + 0xda8 + uVar10 * 8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))();
          *(undefined8 *)(param_2 + 0xda8 + uVar10 * 8) = 0;
        }
        if ((longlong *)plVar2[uVar10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar2[uVar10] + 0x10))();
          plVar2[uVar10] = 0;
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_2 + 0x28));
    }
    bVar6 = true;
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  if (!bVar6) {
    return;
  }
LAB_1800e0d58:
  puVar3 = (uint *)(param_2 + 0x28);
  param_1 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
  uVar11 = *(uint *)(param_2 + 0x20);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800e0d74);
    (*pcVar5)();
  }
  local_88 = 0;
  if (uVar11 != 0) {
    local_88 = *(uint *)(param_2 + 0x18) / uVar11;
  }
  uVar11 = *(uint *)(param_2 + 0x24);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800e0d8c);
    (*pcVar5)();
  }
  local_84 = 0;
  if (uVar11 != 0) {
    local_84 = *(uint *)(param_2 + 0x1c) / uVar11;
  }
  local_64 = 0;
  local_80 = 0x100000001;
  uVar11 = *puVar3;
  local_ac = 0;
  local_90 = 0;
  local_78 = *(undefined4 *)(&DAT_180232e38 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_74 = 1;
  local_6c = 0x2800000000;
  local_b8 = *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_b4 = 4;
  local_9c = 4;
  local_94 = 0xffffffff;
  local_a0 = local_b8;
  while( true ) {
    if (param_3 <= uVar11) {
      return;
    }
    lVar1 = param_2 + (ulonglong)uVar11 * 8;
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x28))
                      (*(longlong **)(param_1 + 0x6b0),&local_88,0,lVar1 + 0xd88);
    if (iVar7 < 0) {
      return;
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x48))
                      (*(longlong **)(param_1 + 0x6b0),plVar2[uVar11],&local_b8,lVar1 + 0xd98);
    if (iVar7 < 0) break;
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x38))
                      (*(longlong **)(param_1 + 0x6b0),plVar2[uVar11],&local_a0,lVar1 + 0xda8);
    if (iVar7 < 0) {
      (**(code **)(**(longlong **)(lVar1 + 0xd98) + 0x10))();
      break;
    }
    uVar11 = uVar11 + 1;
    *puVar3 = *puVar3 + 1;
  }
  (**(code **)(**(longlong **)(lVar1 + 0xd88) + 0x10))();
  return;
}


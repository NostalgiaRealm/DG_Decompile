/*
 * FUN_1800e07f0 at 1800e07f0
 * undefined FUN_1800e07f0(void)
 * Address ranges: 1800e07f0-1800e0b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e07f0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  
  uVar11 = *(uint *)(param_2 + 0x10);
  iVar6 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                    (*(longlong **)(param_2 + 8),0,&DAT_18023b418,param_2 + 0xd78);
  if (iVar6 < 0) {
    return 0;
  }
  local_74 = 0;
  local_80 = *(undefined4 *)(&DAT_180232e48 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_7c = 4;
  plVar7 = *(longlong **)(param_1 + (ulonglong)uVar11 * 0x18c0 + 0x6b0);
  iVar6 = (**(code **)(*plVar7 + 0x48))
                    (plVar7,*(undefined8 *)(param_2 + 0xd78),&local_80,param_2 + 0xd80);
  if (iVar6 < 0) {
    (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x10))();
    *(undefined8 *)(param_2 + 0xd78) = 0;
    return 0;
  }
  plVar7 = (longlong *)(param_2 + 0xd88);
  plVar8 = (longlong *)*plVar7;
  if (plVar8 == (longlong *)0x0) goto LAB_1800e09cc;
  (**(code **)(*plVar8 + 0x50))(plVar8,&local_c8);
  uVar11 = *(uint *)(param_2 + 0x20);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e08b8);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar11 != 0) {
    uVar3 = *(uint *)(param_2 + 0x18) / uVar11;
  }
  if (local_c8 == uVar3) {
    uVar11 = *(uint *)(param_2 + 0x24);
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e08d8);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar11 != 0) {
      uVar3 = *(uint *)(param_2 + 0x1c) / uVar11;
    }
    if (local_c4 != uVar3) goto LAB_1800e08f8;
    bVar5 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_1800e08f8:
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
        if ((longlong *)plVar7[uVar10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar7[uVar10] + 0x10))();
          plVar7[uVar10] = 0;
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_2 + 0x28));
    }
    bVar5 = true;
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  if (!bVar5) {
    return 1;
  }
LAB_1800e09cc:
  puVar2 = (uint *)(param_2 + 0x28);
  param_1 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
  uVar11 = *(uint *)(param_2 + 0x20);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e09e8);
    (*pcVar4)();
  }
  local_c8 = 0;
  if (uVar11 != 0) {
    local_c8 = *(uint *)(param_2 + 0x18) / uVar11;
  }
  uVar11 = *(uint *)(param_2 + 0x24);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e0a00);
    (*pcVar4)();
  }
  local_c4 = 0;
  if (uVar11 != 0) {
    local_c4 = *(uint *)(param_2 + 0x1c) / uVar11;
  }
  local_a4 = 0;
  local_c0 = 0x100000001;
  uVar11 = *puVar2;
  local_64 = 4;
  local_5c = 0;
  local_b8 = *(undefined4 *)(&DAT_180232e38 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_94 = 4;
  local_88 = 0;
  local_b4 = 1;
  local_ac = 0x2800000000;
  local_98 = *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_8c = 0xffffffff;
  local_68 = local_98;
  while( true ) {
    if (param_3 <= uVar11) {
      return 1;
    }
    lVar1 = param_2 + (ulonglong)uVar11 * 8;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x28))
                      (*(longlong **)(param_1 + 0x6b0),&local_c8,0,lVar1 + 0xd88);
    if (iVar6 < 0) {
      return 1;
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x48))
                      (*(longlong **)(param_1 + 0x6b0),plVar7[uVar11],&local_68,lVar1 + 0xd98);
    if (iVar6 < 0) break;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x38))
                      (*(longlong **)(param_1 + 0x6b0),plVar7[uVar11],&local_98,lVar1 + 0xda8);
    if (iVar6 < 0) {
      (**(code **)(**(longlong **)(lVar1 + 0xd98) + 0x10))();
      break;
    }
    uVar11 = uVar11 + 1;
    *puVar2 = *puVar2 + 1;
  }
  (**(code **)(**(longlong **)(lVar1 + 0xd88) + 0x10))();
  return 1;
}


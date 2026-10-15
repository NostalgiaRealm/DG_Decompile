/*
 * FUN_18004f720 at 18004f720
 * undefined __cdecl FUN_18004f720(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18004f720-18004f913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f720(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  
  plVar2 = (longlong *)(param_2 + 0xd88);
  plVar7 = (longlong *)*plVar2;
  if (plVar7 == (longlong *)0x0) goto LAB_18004f7c0;
  (**(code **)(*plVar7 + 0x50))(plVar7,&local_60);
  uVar8 = *(uint *)(param_2 + 0x20);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18004f76c);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar8 != 0) {
    uVar3 = *(uint *)(param_2 + 0x18) / uVar8;
  }
  if (local_60 == uVar3) {
    uVar8 = *(uint *)(param_2 + 0x24);
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18004f78c);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = *(uint *)(param_2 + 0x1c) / uVar8;
    }
    if (local_5c != uVar3) goto LAB_18004f7ac;
    bVar5 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_18004f7ac:
    bVar5 = true;
    FUN_18004f918(param_1,param_2);
  }
  if (!bVar5) {
    return;
  }
LAB_18004f7c0:
  lVar9 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
  uVar8 = *(uint *)(param_2 + 0x20);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18004f7dc);
    (*pcVar4)();
  }
  local_60 = 0;
  if (uVar8 != 0) {
    local_60 = *(uint *)(param_2 + 0x18) / uVar8;
  }
  uVar8 = *(uint *)(param_2 + 0x24);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18004f7f4);
    (*pcVar4)();
  }
  local_5c = 0;
  if (uVar8 != 0) {
    local_5c = *(uint *)(param_2 + 0x1c) / uVar8;
  }
  local_3c = 0;
  local_58 = 0x100000001;
  uVar8 = *(uint *)(param_2 + 0x28);
  local_84 = 0;
  local_68 = 0;
  local_50 = *(undefined4 *)(&DAT_1800631a8 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_90 = *(undefined4 *)(&DAT_180063198 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_4c = 1;
  local_44 = 0x2800000000;
  local_8c = 4;
  local_74 = 4;
  local_6c = 0xffffffff;
  local_78 = local_90;
  while( true ) {
    if (param_3 <= uVar8) {
      return;
    }
    lVar1 = param_2 + (ulonglong)uVar8 * 8;
    iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x6b0) + 0x28))
                      (*(longlong **)(lVar9 + 0x6b0),&local_60,0,lVar1 + 0xd88);
    if (iVar6 < 0) {
      return;
    }
    iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x6b0) + 0x48))
                      (*(longlong **)(lVar9 + 0x6b0),plVar2[uVar8],&local_90,lVar1 + 0xd98);
    if (iVar6 < 0) break;
    iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x6b0) + 0x38))
                      (*(longlong **)(lVar9 + 0x6b0),plVar2[uVar8],&local_78,lVar1 + 0xda8);
    if (iVar6 < 0) {
      (**(code **)(**(longlong **)(lVar1 + 0xd98) + 0x10))();
      break;
    }
    uVar8 = uVar8 + 1;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
  }
  (**(code **)(**(longlong **)(lVar1 + 0xd88) + 0x10))();
  return;
}


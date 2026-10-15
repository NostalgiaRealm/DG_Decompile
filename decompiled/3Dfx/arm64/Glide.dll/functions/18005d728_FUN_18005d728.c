/*
 * FUN_18005d728 at 18005d728
 * undefined __cdecl FUN_18005d728(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18005d728-18005d983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d728(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  plVar1 = (longlong *)(param_2 + 0xda0);
  plVar7 = (longlong *)*plVar1;
  if (plVar7 == (longlong *)0x0) goto LAB_18005d7d0;
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x50))(plVar7,&local_c0);
  uVar6 = *(uint *)(param_2 + 0x20);
  uStack_b8 = puVar8[1];
  local_c0 = *puVar8;
  local_a8 = puVar8[3];
  local_b0 = puVar8[2];
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18005d77c);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = *(uint *)(param_2 + 0x18) / uVar6;
  }
  if (local_b0 == uVar3) {
    uVar6 = *(uint *)(param_2 + 0x24);
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18005d79c);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = *(uint *)(param_2 + 0x1c) / uVar6;
    }
    if ((uint)local_a8 != uVar3) goto LAB_18005d7bc;
    bVar5 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_18005d7bc:
    bVar5 = true;
    FUN_18005d990(param_1,param_2);
  }
  if (!bVar5) {
    return;
  }
LAB_18005d7d0:
  uStack_b8 = 0;
  lVar10 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  local_c0 = CONCAT44(local_c0._4_4_,3);
  uVar6 = *(uint *)(param_2 + 0x20);
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18005d7f8);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = *(uint *)(param_2 + 0x18) / uVar6;
  }
  local_b0 = (ulonglong)uVar3;
  uVar6 = *(uint *)(param_2 + 0x24);
  if (uVar6 != 0) {
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = *(uint *)(param_2 + 0x1c) / uVar6;
    }
    local_a8 = CONCAT44(0x10001,uVar3);
    local_78 = 0;
    local_70 = 0;
    local_a0 = *(undefined4 *)(&DAT_1800631a8 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_40 = 0;
    local_80 = *(undefined4 *)(&DAT_180063198 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_9c = 1;
    local_94 = 0x100000000;
    uStack_7c = 4;
    local_5c = 0x168800000004;
    local_50 = 0xffffffff00000000;
    uStack_48 = 0;
    bVar5 = *(int *)(param_2 + 0x28) == 0;
    local_60 = local_80;
    if (bVar5 && (bVar5 && param_3 != 0)) {
      uVar6 = FUN_18004a918(*(longlong *)(lVar10 + 0x2230),2);
      *(uint *)(param_2 + 0xdb0) = uVar6;
      uVar6 = FUN_18004a918(*(longlong *)(lVar10 + 0x2238),2);
      *(uint *)(param_2 + 0xdb4) = uVar6;
    }
    if (((*(int *)(param_2 + 0xdb0) != -1) && (*(int *)(param_2 + 0xdb4) != -1)) &&
       (uVar6 = *(uint *)(param_2 + 0x28), uVar6 < param_3)) {
      lVar2 = param_1 + 0x6d0;
      do {
        lVar9 = FUN_180049fc8(lVar2,(ulonglong)*(uint *)(param_2 + 0x10),&local_c0);
        plVar1[uVar6] = lVar9;
        if (lVar9 == 0) {
          return;
        }
        FUN_18004b248(*(longlong *)(lVar10 + 0x2230),&local_d0,*(uint *)(param_2 + 0xdb0),uVar6);
        plVar7 = *(longlong **)(lVar2 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
        (**(code **)(*plVar7 + 0x90))(plVar7,plVar1[uVar6],&local_60,local_d0);
        FUN_18004b248(*(longlong *)(lVar10 + 0x2238),&local_c8,*(uint *)(param_2 + 0xdb4),uVar6);
        plVar7 = *(longlong **)(lVar2 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
        (**(code **)(*plVar7 + 0xa0))(plVar7,plVar1[uVar6],&local_80,local_c8);
        uVar6 = uVar6 + 1;
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
      } while (uVar6 < param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18005d810);
  (*pcVar4)();
}


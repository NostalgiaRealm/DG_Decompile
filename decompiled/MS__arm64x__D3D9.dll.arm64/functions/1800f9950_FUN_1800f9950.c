/*
 * FUN_1800f9950 at 1800f9950
 * undefined FUN_1800f9950(void)
 * Address ranges: 1800f9950-1800f9bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f9950(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 local_d0;
  undefined8 local_c8;
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
  plVar6 = (longlong *)*plVar1;
  if (plVar6 == (longlong *)0x0) goto LAB_1800f99f8;
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x50))(plVar6,&local_c0);
  uVar9 = *(uint *)(param_2 + 0x20);
  uStack_b8 = puVar7[1];
  local_c0 = *puVar7;
  local_a8 = puVar7[3];
  local_b0 = puVar7[2];
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800f99a4);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18) / uVar9;
  }
  if (local_b0 == uVar2) {
    uVar9 = *(uint *)(param_2 + 0x24);
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800f99c4);
      (*pcVar3)();
    }
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = *(uint *)(param_2 + 0x1c) / uVar9;
    }
    if ((uint)local_a8 != uVar2) goto LAB_1800f99e4;
    bVar4 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_1800f99e4:
    bVar4 = true;
    FUN_1800f9bb8(param_1,param_2);
  }
  if (!bVar4) {
    return;
  }
LAB_1800f99f8:
  uStack_b8 = 0;
  lVar10 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  local_c0 = CONCAT44(local_c0._4_4_,3);
  uVar9 = *(uint *)(param_2 + 0x20);
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800f9a20);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18) / uVar9;
  }
  local_b0 = (ulonglong)uVar2;
  uVar9 = *(uint *)(param_2 + 0x24);
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = *(uint *)(param_2 + 0x1c) / uVar9;
    }
    local_a8 = CONCAT44(0x10001,uVar2);
    local_78 = 0;
    local_70 = 0;
    local_a0 = *(undefined4 *)(&DAT_180232e38 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_40 = 0;
    local_9c = 1;
    local_94 = 0x100000000;
    local_80 = *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(param_2 + 0x34) * 4);
    uStack_7c = 4;
    local_5c = 0x168800000004;
    local_50 = 0xffffffff00000000;
    uStack_48 = 0;
    bVar4 = *(int *)(param_2 + 0x28) == 0;
    local_60 = local_80;
    if (bVar4 && (bVar4 && param_3 != 0)) {
      uVar5 = FUN_1800e7220(*(undefined8 *)(lVar10 + 0x2230),2);
      *(undefined4 *)(param_2 + 0xdb0) = uVar5;
      uVar5 = FUN_1800e7220(*(undefined8 *)(lVar10 + 0x2238),2);
      *(undefined4 *)(param_2 + 0xdb4) = uVar5;
    }
    if (((*(int *)(param_2 + 0xdb0) != -1) && (*(int *)(param_2 + 0xdb4) != -1)) &&
       (uVar9 = *(uint *)(param_2 + 0x28), uVar9 < param_3)) {
      param_1 = param_1 + 0x6d0;
      do {
        lVar8 = FUN_1800e7ca8(param_1,*(undefined4 *)(param_2 + 0x10),&local_c0);
        plVar1[uVar9] = lVar8;
        if (lVar8 == 0) {
          return;
        }
        FUN_1800e7b48(*(undefined8 *)(lVar10 + 0x2230),&local_d0,*(undefined4 *)(param_2 + 0xdb0),
                      uVar9);
        plVar6 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
        (**(code **)(*plVar6 + 0x90))(plVar6,plVar1[uVar9],&local_60,local_d0);
        FUN_1800e7b48(*(undefined8 *)(lVar10 + 0x2238),&local_c8,*(undefined4 *)(param_2 + 0xdb4),
                      uVar9);
        plVar6 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
        (**(code **)(*plVar6 + 0xa0))(plVar6,plVar1[uVar9],&local_80,local_c8);
        uVar9 = uVar9 + 1;
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
      } while (uVar9 < param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800f9a38);
  (*pcVar3)();
}


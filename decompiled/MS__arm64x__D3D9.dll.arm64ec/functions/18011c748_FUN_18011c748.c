/*
 * FUN_18011c748 at 18011c748
 * undefined FUN_18011c748(void)
 * Address ranges: 18011c748-18011ca13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18011c748(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined4 uVar9;
  longlong lVar10;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90 [5];
  undefined8 local_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar10 = *(longlong *)(*param_2 + 8);
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  if (param_3 == 0) {
LAB_18011c7b4:
    if ((param_4 & 1) == 0) goto LAB_18011c7b8;
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
  }
  else {
    lVar8 = *(longlong *)(param_3 + 8);
    if (((*(uint *)(lVar10 + 0x8c) <= *(uint *)(lVar8 + 0x8c)) &&
        (*(uint *)(lVar10 + 0x90) <= *(uint *)(lVar8 + 0x90))) || ((param_4 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(lVar8 + 0xa5);
      goto LAB_18011c7b4;
    }
    param_3 = 0;
LAB_18011c7b8:
    local_90[0] = *(longlong *)(*(longlong *)(*param_2 + 8) + 0x70);
    if (param_2[1] == 0) {
      local_90[1] = 0;
      if ((param_4 & 1) == 0) goto LAB_18011c7e4;
LAB_18011c7fc:
      local_90[2] = 0;
      if ((param_4 & 1) != 0) goto LAB_18011c824;
    }
    else {
      local_90[1] = *(undefined8 *)(*(longlong *)(param_2[1] + 8) + 0x70);
LAB_18011c7e4:
      if (param_2[2] == 0) goto LAB_18011c7fc;
      local_90[2] = *(undefined8 *)(*(longlong *)(param_2[2] + 8) + 0x70);
    }
    if (param_2[3] != 0) {
      local_90[3] = *(undefined8 *)(*(longlong *)(param_2[3] + 8) + 0x70);
      goto LAB_18011c828;
    }
  }
LAB_18011c824:
  local_90[3] = 0;
LAB_18011c828:
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 8) + 0x70);
  }
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (0x180224000,*(undefined8 *)(param_1 + 0x28),param_2,uVar3);
  cVar2 = (*extraout_x11)(uVar3,local_90);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      lVar8 = 0;
    }
    else {
      (*(code *)puVar1)(0x180224000);
      cVar2 = (*extraout_x11_00)(param_3,local_90[0]);
      if (cVar2 == '\0') {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_01)();
      }
      lVar8 = *(longlong *)(param_3 + 8);
      (*(code *)puVar1)(0x180224000);
      lVar8 = (*extraout_x11_02)(param_3,local_90[0],*(undefined8 *)(lVar8 + 0x70));
    }
    local_90[4] = local_90[0];
    lStack_60 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    local_48 = 0;
    local_38 = 0;
    if (local_90[0] == 0) {
      local_68 = 0;
    }
    else {
      local_68 = *(undefined8 *)(lVar10 + 0x94);
    }
    local_a0 = 0;
    local_98 = 0;
    lVar7 = 1;
    do {
      lVar5 = lVar7 * 0x10;
      if (param_2[lVar7] == 0) {
        local_90[lVar7 * 2 + 4] = 0;
        uVar9 = 0;
        *(undefined4 *)(&local_68 + lVar7 * 2) = 0;
      }
      else {
        lVar4 = *(longlong *)(param_2[lVar7] + 8);
        local_90[lVar7 * 2 + 4] = local_90[lVar7];
        *(undefined4 *)(&local_68 + lVar7 * 2) = *(undefined4 *)(lVar4 + 0x94);
        uVar9 = *(undefined4 *)(lVar4 + 0x98);
      }
      lVar7 = lVar7 + 1;
      *(undefined4 *)((longlong)&local_68 + lVar5 + 4) = uVar9;
    } while (lVar7 != 4);
    if (lVar8 != 0) {
      local_a0 = lVar8;
      if (lVar8 == *(longlong *)(*(longlong *)(param_3 + 8) + 0x70)) {
        local_98 = *(undefined8 *)(*(longlong *)(param_3 + 8) + 0x94);
      }
    }
    uVar3 = (*(code *)puVar1)(0x180225000);
    (*extraout_x11_03)(uVar3,4,*(undefined4 *)(lVar10 + 0x9c),local_90 + 4,&local_a0);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(lVar10 + 0x94);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(lVar10 + 0x98);
    if ((param_4 & 1) == 0) {
      uVar6 = *(undefined1 *)(*(longlong *)(*param_2 + 8) + 0xa6);
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x2cd) = uVar6;
    *(undefined2 *)(param_1 + 0x2ce) = 0x100;
    uVar3 = 1;
  }
  return uVar3;
}


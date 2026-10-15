/*
 * FUN_1800109c8 at 1800109c8
 * undefined FUN_1800109c8(void)
 * Address ranges: 1800109c8-180010c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800109c8(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
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
  
  lVar9 = *(longlong *)(*param_2 + 8);
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  if (param_3 == (longlong *)0x0) {
LAB_180010a34:
    if ((param_4 & 1) == 0) goto LAB_180010a38;
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
  }
  else {
    lVar5 = param_3[1];
    if (((*(uint *)(lVar9 + 0x8c) <= *(uint *)(lVar5 + 0x8c)) &&
        (*(uint *)(lVar9 + 0x90) <= *(uint *)(lVar5 + 0x90))) || ((param_4 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(lVar5 + 0xa5);
      goto LAB_180010a34;
    }
    param_3 = (longlong *)0x0;
LAB_180010a38:
    local_90[0] = *(longlong *)(*(longlong *)(*param_2 + 8) + 0x70);
    if (param_2[1] == 0) {
      local_90[1] = 0;
      if ((param_4 & 1) == 0) goto LAB_180010a64;
LAB_180010a7c:
      local_90[2] = 0;
      if ((param_4 & 1) != 0) goto LAB_180010aa4;
    }
    else {
      local_90[1] = *(undefined8 *)(*(longlong *)(param_2[1] + 8) + 0x70);
LAB_180010a64:
      if (param_2[2] == 0) goto LAB_180010a7c;
      local_90[2] = *(undefined8 *)(*(longlong *)(param_2[2] + 8) + 0x70);
    }
    if (param_2[3] != 0) {
      local_90[3] = *(undefined8 *)(*(longlong *)(param_2[3] + 8) + 0x70);
      goto LAB_180010aa8;
    }
  }
LAB_180010aa4:
  local_90[3] = 0;
LAB_180010aa8:
  if (param_3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3[1] + 0x70);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
                    (*(longlong **)(param_1 + 0x28),local_90,uVar2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    if (param_3 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      cVar1 = (**(code **)(*param_3 + 8))(param_3,local_90[0]);
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
      }
      lVar5 = (**(code **)(*param_3 + 0x10))(param_3,local_90[0],*(undefined8 *)(param_3[1] + 0x70))
      ;
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
      local_68 = *(undefined8 *)(lVar9 + 0x94);
    }
    local_a0 = 0;
    local_98 = 0;
    lVar4 = 1;
    do {
      lVar7 = lVar4 * 0x10;
      if (param_2[lVar4] == 0) {
        local_90[lVar4 * 2 + 4] = 0;
        uVar6 = 0;
        *(undefined4 *)(&local_68 + lVar4 * 2) = 0;
      }
      else {
        lVar8 = *(longlong *)(param_2[lVar4] + 8);
        local_90[lVar4 * 2 + 4] = local_90[lVar4];
        *(undefined4 *)(&local_68 + lVar4 * 2) = *(undefined4 *)(lVar8 + 0x94);
        uVar6 = *(undefined4 *)(lVar8 + 0x98);
      }
      lVar4 = lVar4 + 1;
      *(undefined4 *)((longlong)&local_68 + lVar7 + 4) = uVar6;
    } while (lVar4 != 4);
    if (lVar5 != 0) {
      local_a0 = lVar5;
      if (lVar5 == *(longlong *)(param_3[1] + 0x70)) {
        local_98 = *(undefined8 *)(param_3[1] + 0x94);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
              (*(longlong **)(param_1 + 0x28),4,*(undefined4 *)(lVar9 + 0x9c),local_90 + 4,&local_a0
              );
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(lVar9 + 0x94);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(lVar9 + 0x98);
    if ((param_4 & 1) == 0) {
      uVar3 = *(undefined1 *)(*(longlong *)(*param_2 + 8) + 0xa6);
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x2cd) = uVar3;
    *(undefined2 *)(param_1 + 0x2ce) = 0x100;
    uVar2 = 1;
  }
  return uVar2;
}


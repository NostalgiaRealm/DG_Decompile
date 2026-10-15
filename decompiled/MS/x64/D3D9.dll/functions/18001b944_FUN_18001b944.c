/*
 * FUN_18001b944 at 18001b944
 * ulonglong __fastcall FUN_18001b944(longlong param_1, longlong * param_2, longlong * param_3, char param_4)
 * Address ranges: 18001b944-18001bbce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001b944(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98 [5];
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  plVar4 = (longlong *)0x0;
  lVar1 = *(longlong *)(*param_2 + 8);
  uVar8 = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  if (param_3 == (longlong *)0x0) {
LAB_18001b9b5:
    plVar7 = param_3;
    if (param_4 == '\0') goto LAB_18001b9ba;
    local_98[2] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
  }
  else {
    lVar5 = param_3[1];
    if (((*(uint *)(lVar1 + 0x8c) <= *(uint *)(lVar5 + 0x8c)) &&
        (*(uint *)(lVar1 + 0x90) <= *(uint *)(lVar5 + 0x90))) || (plVar7 = plVar4, param_4 != '\0'))
    {
      *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(lVar5 + 0xa5);
      goto LAB_18001b9b5;
    }
LAB_18001b9ba:
    local_98[0] = *(longlong *)(*(longlong *)(*param_2 + 8) + 0x70);
    param_3 = plVar7;
    if (param_2[1] == 0) {
      local_98[1] = 0;
      if (param_4 == '\0') goto LAB_18001b9e9;
LAB_18001ba00:
      local_98[2] = 0;
      if (param_4 != '\0') goto LAB_18001ba2c;
    }
    else {
      local_98[1] = *(undefined8 *)(*(longlong *)(param_2[1] + 8) + 0x70);
LAB_18001b9e9:
      if (param_2[2] == 0) goto LAB_18001ba00;
      local_98[2] = *(undefined8 *)(*(longlong *)(param_2[2] + 8) + 0x70);
    }
    if (param_2[3] != 0) {
      local_98[3] = *(undefined8 *)(*(longlong *)(param_2[3] + 8) + 0x70);
      goto LAB_18001ba30;
    }
  }
LAB_18001ba2c:
  local_98[3] = 0;
LAB_18001ba30:
  plVar7 = plVar4;
  if (param_3 != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_3[1] + 0x70);
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
                    (*(longlong **)(param_1 + 0x28),local_98,plVar7);
  if ((char)uVar3 == '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    if (param_3 != (longlong *)0x0) {
      cVar2 = (**(code **)(*param_3 + 8))(param_3,local_98[0]);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
      }
      plVar4 = (longlong *)
               (**(code **)(*param_3 + 0x10))
                         (param_3,local_98[0],*(undefined8 *)(param_3[1] + 0x70));
    }
    local_98[4] = local_98[0];
    local_40 = 0;
    lStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    if (local_98[0] == 0) {
      local_70 = 0;
    }
    else {
      local_70 = *(undefined8 *)(lVar1 + 0x94);
    }
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    lVar5 = 1;
    do {
      if (param_2[lVar5] == 0) {
        local_98[lVar5 * 2 + 4] = 0;
        uVar9 = 0;
        *(undefined4 *)(&local_70 + lVar5 * 2) = 0;
      }
      else {
        lVar6 = *(longlong *)(param_2[lVar5] + 8);
        local_98[lVar5 * 2 + 4] = local_98[lVar5];
        *(undefined4 *)(&local_70 + lVar5 * 2) = *(undefined4 *)(lVar6 + 0x94);
        uVar9 = *(undefined4 *)(lVar6 + 0x98);
      }
      lVar6 = lVar5 + 1;
      *(undefined4 *)((longlong)&local_70 + lVar5 * 0x10 + 4) = uVar9;
      lVar5 = lVar6;
    } while (lVar6 != 4);
    if ((plVar4 != (longlong *)0x0) &&
       (local_a8 = plVar4, plVar4 == *(longlong **)(param_3[1] + 0x70))) {
      local_a0 = *(undefined8 *)(param_3[1] + 0x94);
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
              (*(longlong **)(param_1 + 0x28),4,*(undefined4 *)(lVar1 + 0x9c),local_98 + 4,&local_a8
              );
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(lVar1 + 0x94);
    uVar9 = *(undefined4 *)(lVar1 + 0x98);
    *(undefined4 *)(param_1 + 0x2c8) = uVar9;
    if (param_4 == '\0') {
      uVar8 = *(undefined1 *)(*(longlong *)(*param_2 + 8) + 0xa6);
    }
    *(undefined1 *)(param_1 + 0x2cd) = uVar8;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar9 >> 8),1);
    *(undefined2 *)(param_1 + 0x2ce) = 0x100;
  }
  return uVar3;
}


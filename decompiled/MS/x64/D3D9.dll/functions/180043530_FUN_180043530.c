/*
 * FUN_180043530 at 180043530
 * undefined __fastcall FUN_180043530(longlong param_1)
 * Address ranges: 180043530-1800437d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043530(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong local_res8;
  
  FUN_180059730(param_1);
  *(undefined8 *)(param_1 + 0xf8f0) = 0;
  *(undefined8 *)(param_1 + 0xf8f8) = 0;
  *(undefined8 *)(param_1 + 0xf900) = 0;
  *(undefined8 *)(param_1 + 0xf908) = 0;
  *(undefined8 *)(param_1 + 0xf910) = 0;
  *(undefined8 *)(param_1 + 0xf918) = 0;
  *(undefined8 *)(param_1 + 0xf920) = 0;
  *(undefined8 *)(param_1 + 0xf928) = 0;
  *(undefined8 *)(param_1 + 0xf930) = 0;
  *(undefined8 *)(param_1 + 0xf938) = 0;
  *(undefined8 *)(param_1 + 0xf940) = 0;
  FUN_1800fbea0((undefined1 *)(param_1 + 0xf94c),0,0x854);
  *(undefined8 *)(param_1 + 0xf8e8) = *(undefined8 *)(param_1 + 0xf6f0);
  *(undefined4 *)(param_1 + 0xf948) = 2;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0xf730) + 0x58))();
  *(undefined8 *)(param_1 + 0xf990) = uVar4;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180);
  uVar7 = uVar1 & 0xffff;
  uVar6 = (ulonglong)(uVar1 >> 0x10);
  lVar5 = 0;
  do {
    *(uint *)(param_1 + 0xfa18 + lVar5 * 4) = uVar1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x50) + uVar6 * 0x10);
    (**(code **)(*plVar3 + 0x48))(plVar3,&local_res8);
    local_res8 = local_res8 + (ulonglong)(uVar7 * *(int *)(lVar2 + 0x20));
    *(longlong *)(param_1 + 0xfa98 + lVar5 * 8) = local_res8;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x10);
  *(uint *)(param_1 + 0xfbc0) = uVar1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
  plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x50) + uVar6 * 0x10);
  (**(code **)(*plVar3 + 0x48))(plVar3,&local_res8);
  local_res8 = local_res8 + (ulonglong)(uVar7 * *(int *)(lVar5 + 0x20));
  *(longlong *)(param_1 + 0xfbd8) = local_res8;
  *(uint *)(param_1 + 0xfbc4) = uVar1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
  plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x50) + uVar6 * 0x10);
  (**(code **)(*plVar3 + 0x48))(plVar3,&local_res8);
  local_res8 = local_res8 + (ulonglong)(uVar7 * *(int *)(lVar5 + 0x20));
  *(longlong *)(param_1 + 0xfbe0) = local_res8;
  *(uint *)(param_1 + 0xfbc8) = uVar1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
  plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x50) + uVar6 * 0x10);
  (**(code **)(*plVar3 + 0x48))(plVar3,&local_res8);
  local_res8 = local_res8 + (ulonglong)(uVar7 * *(int *)(lVar5 + 0x20));
  *(longlong *)(param_1 + 0xfbe8) = local_res8;
  *(uint *)(param_1 + 0xfbcc) = uVar1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
  plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x50) + uVar6 * 0x10);
  (**(code **)(*plVar3 + 0x48))(plVar3,&local_res8);
  local_res8 = local_res8 + (ulonglong)(uVar7 * *(int *)(lVar5 + 0x20));
  *(longlong *)(param_1 + 0xfbf0) = local_res8;
  *(uint *)(param_1 + 0xfbd0) = uVar1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
  plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x50) + uVar6 * 0x10);
  (**(code **)(*plVar3 + 0x48))(plVar3,&local_res8);
  *(ulonglong *)(param_1 + 0xfbf8) = local_res8 + (ulonglong)(uVar7 * *(int *)(lVar5 + 0x20));
  *(undefined4 *)(param_1 + 0xf950) = 1;
  *(undefined8 *)(param_1 + 0xf958) = 0;
  *(undefined8 *)(param_1 + 0xf960) = 0;
  *(undefined8 *)(param_1 + 0xf968) = 0;
  *(undefined8 *)(param_1 + 0xf970) = 0;
  *(undefined8 *)(param_1 + 0xff38) = *(undefined8 *)(param_1 + 0xf718);
  *(undefined8 *)(param_1 + 0xffb8) = *(undefined8 *)(param_1 + 0xf710);
  *(undefined4 *)(param_1 + 0xffc4) = 0;
  return;
}


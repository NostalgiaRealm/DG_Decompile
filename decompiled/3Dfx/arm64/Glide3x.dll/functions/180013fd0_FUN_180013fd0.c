/*
 * FUN_180013fd0 at 180013fd0
 * undefined __cdecl FUN_180013fd0(longlong * param_1)
 * Address ranges: 180013fd0-180014183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013fd0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  plVar5 = (longlong *)param_1[0x660];
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = plVar5[1];
  lVar3 = *(longlong *)(lVar4 + 8);
  iVar1 = *(int *)(lVar3 + 0xd2);
  if (iVar1 == 2) {
    local_48 = 1;
  }
  else if (iVar1 == 3) {
    local_48 = 2;
  }
  else if (iVar1 == 4) {
    local_48 = 3;
  }
  else {
    local_48 = 0;
  }
  local_3c = *(undefined1 *)(lVar3 + 0x26);
  local_30 = *(undefined4 *)(lVar3 + 0xde);
  uStack_34 = *(undefined4 *)(lVar3 + 0xda);
  uStack_44 = *(undefined4 *)(&DAT_180065f58 + (longlong)*(int *)(lVar3 + 0xce) * 4);
  local_58 = *(undefined4 *)(lVar4 + 0xc4);
  uStack_54 = *(undefined4 *)(lVar4 + 200);
  local_60 = *(undefined4 *)(lVar4 + 0xb8);
  uStack_5c = *(undefined4 *)(lVar4 + 0xbc);
  local_68 = *(undefined4 *)(lVar4 + 0xb0);
  uStack_64 = *(undefined4 *)(lVar4 + 0xb4);
  local_50 = *(undefined4 *)(&DAT_180065f70 + (longlong)*(int *)(lVar3 + 0x1c) * 4);
  local_70 = *(undefined8 *)(lVar4 + 0xa0);
  local_78 = *(undefined4 *)(lVar4 + 0x29f8);
  local_3b = *(int *)(lVar3 + 0x18) == 1;
  uStack_4c = 0;
  local_40 = (uint)((*(uint *)(lVar3 + 0xc2) & 4) != 0);
  local_38 = 0;
  local_80 = plVar5;
  puVar2 = FUN_180056100(*(longlong **)(lVar4 + 0x29f0),&local_80);
  FUN_180056c68(*(longlong **)(plVar5[1] + 0x29f0),*(longlong *)(plVar5[1] + 0xa0),0);
  FUN_180015640((longlong)plVar5);
  lVar4 = plVar5[1];
  lVar3 = 0x1de8;
  if (*(char *)(*(longlong *)(lVar4 + 8) + 0x50) != '\0') {
    lVar3 = 0x11e8;
  }
  FUN_180056f58(*(undefined8 *)(lVar4 + 0x29f0),plVar5[2],lVar4 + lVar3,
                (undefined8 *)(lVar4 + 0x29e8));
  if (puVar2 != (undefined8 *)0x0) {
    plVar5[2] = (longlong)puVar2;
    (**(code **)(*plVar5 + 0x30))(plVar5);
  }
  *(undefined1 *)((longlong)param_1 + 0x2c7d) = 1;
  (**(code **)(*param_1 + 0x260))
            (param_1,(int)param_1[0x57a],*(undefined4 *)((longlong)param_1 + 0x2bd4),
             (int)param_1[0x57b],*(undefined4 *)((longlong)param_1 + 0x2bdc));
  FUN_180015348(param_1,(int *)((longlong)param_1 + 0x2a1c));
  return;
}


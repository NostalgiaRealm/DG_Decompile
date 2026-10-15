/*
 * FUN_18004ae88 at 18004ae88
 * undefined __fastcall FUN_18004ae88(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18004ae88-18004b03d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ae88(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  if (*(longlong **)(param_2 + 0xd88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xd88) + 0x50))();
    if ((local_78 == *(uint *)(param_2 + 0x18) / *(uint *)(param_2 + 0x20)) &&
       (local_74 == *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24))) {
      bVar7 = *(uint *)(param_2 + 0x28) < param_3;
    }
    else {
      bVar7 = true;
      FUN_18004b040(param_1,param_2);
    }
    if (!bVar7) {
      return;
    }
  }
  lVar6 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
  local_78 = *(uint *)(param_2 + 0x18) / *(uint *)(param_2 + 0x20);
  local_5c = 0;
  local_74 = *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24);
  local_50 = 0;
  uVar4 = *(uint *)(param_2 + 0x28);
  local_68 = *(undefined4 *)(&DAT_180061200 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_a8 = *(undefined4 *)(&DAT_1800611f0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_80 = 0;
  local_70 = 1;
  local_6c = 1;
  local_64 = 1;
  local_58 = 0x28;
  local_a4 = 4;
  local_9c = 0;
  local_8c = 4;
  local_84 = 0xffffffff;
  local_90 = local_a8;
  while( true ) {
    if (param_3 <= uVar4) {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x6b0 + lVar6);
    uVar5 = (ulonglong)uVar4;
    lVar1 = param_2 + uVar5 * 8;
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_78,0,lVar1 + 0xd88);
    if (iVar3 < 0) {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x6b0 + lVar6);
    iVar3 = (**(code **)(*plVar2 + 0x48))
                      (plVar2,*(undefined8 *)(lVar1 + 0xd88),&local_a8,param_2 + 0xd98 + uVar5 * 8);
    if (iVar3 < 0) break;
    plVar2 = *(longlong **)(param_1 + 0x6b0 + lVar6);
    iVar3 = (**(code **)(*plVar2 + 0x38))
                      (plVar2,*(undefined8 *)(lVar1 + 0xd88),&local_90,param_2 + 0xda8 + uVar5 * 8);
    if (iVar3 < 0) {
      (**(code **)(**(longlong **)(param_2 + 0xd98 + uVar5 * 8) + 0x10))();
      break;
    }
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    uVar4 = uVar4 + 1;
  }
  (**(code **)(**(longlong **)(param_2 + 0xd88 + uVar5 * 8) + 0x10))();
  return;
}


/*
 * FUN_180025f28 at 180025f28
 * undefined __cdecl FUN_180025f28(longlong param_1, longlong param_2, undefined4 * param_3, char param_4)
 * Address ranges: 180025f28-1800260bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180025f28(longlong param_1,longlong param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  bVar2 = param_4 == '\0';
  local_48 = 0;
  lVar3 = 0x150;
  if (bVar2) {
    lVar3 = 0x120;
  }
  local_70 = 0;
  local_80 = *(undefined8 *)(param_2 + lVar3);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  local_78 = 1;
  local_40 = 0;
  lVar4 = 0x164;
  if (bVar2) {
    lVar4 = 0x134;
  }
  _local_60 = CONCAT44(1,*(undefined4 *)(param_2 + 0x24));
  _uStack_68 = CONCAT44(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + lVar4));
  lVar4 = 0x168;
  if (bVar2) {
    lVar4 = 0x138;
  }
  local_58 = (ulonglong)*(uint *)(param_2 + lVar4);
  lVar4 = 0x140;
  if (bVar2) {
    lVar4 = 0x110;
  }
  local_50 = *(ulonglong *)(param_2 + lVar4);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508);
  *(int *)(lVar4 + 0x684) = *(int *)(lVar4 + 0x684) + 1;
  FUN_18004b098(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                local_50,0,0,0x400);
  FUN_18004b098(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                *(ulonglong *)(param_2 + lVar3),0,1,0x800);
  FUN_18004c2b0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                &local_50,*param_3,param_3[1],0,&local_80,param_3);
  FUN_18004b098(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                *(ulonglong *)(param_2 + lVar3),0,1,0);
  lVar3 = FUN_18004b168(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508));
  *(longlong *)(param_2 + 0xd0) = lVar3;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508);
  iVar1 = *(int *)(lVar3 + 0x684) + -1;
  *(int *)(lVar3 + 0x684) = iVar1;
  if ((iVar1 == 0) && (*(int *)(lVar3 + 0x680) <= *(int *)(lVar3 + 0x678))) {
    FUN_18004aca0(lVar3 + 8,0);
  }
  return;
}


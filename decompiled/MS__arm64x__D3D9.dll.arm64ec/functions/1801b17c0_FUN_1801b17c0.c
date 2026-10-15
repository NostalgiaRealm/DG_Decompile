/*
 * FUN_1801b17c0 at 1801b17c0
 * undefined FUN_1801b17c0(void)
 * Address ranges: 1801b17c0-1801b1977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801b17c0(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  longlong lVar6;
  longlong lVar7;
  longlong local_c0 [2];
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  uVar2 = FUN_1801bad48(&local_b0,*(undefined4 *)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(&DAT_18022d000 + (ulonglong)uVar2 * 4);
  if (uVar2 < 0xe) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    local_b0 = 0x1c0000001b;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10);
  local_80 = 1;
  uStack_78 = 0;
  local_70 = 0;
  local_44 = 1;
  local_3c = 0;
  lVar6 = lVar7 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x1ac0;
  local_68[0] = 4;
  uStack_58 = (ulonglong)*(uint *)(param_1 + 8);
  local_50 = *(undefined4 *)(param_1 + 0xc);
  local_4c = *(undefined2 *)(param_1 + 0x10);
  local_60 = 0;
  local_4a = *(undefined2 *)(param_1 + 0x18);
  local_48 = (undefined4)local_b0;
  lVar4 = FUN_18021a1e8(lVar6 + 0x21b8,&local_80,0,local_68);
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (lVar4 == 0) {
    local_c0[0] = 0;
    FUN_18020d338(lVar7 + 0x6d0,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28),&local_80,0,
                  local_68,0,0,in_x7,local_c0);
    *(longlong *)(param_1 + 0x40) = local_c0[0];
    if (local_c0[0] == 0) {
      return false;
    }
  }
  iVar3 = FUN_18020c7c8(*(undefined8 *)(lVar6 + 0x2230),2);
  *(int *)(param_1 + 0x48) = iVar3;
  if (iVar3 == -1) {
    FUN_18021d418(lVar6 + 0x21b8,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    _uStack_a8 = CONCAT44(uStack_a4,uVar1);
    local_b0 = CONCAT44(8,local_b0._4_4_);
    local_a0 = 0xffffffff00000000;
    local_90 = 0;
    uStack_98 = 0;
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28);
    puVar5 = (undefined8 *)FUN_18020d168(*(undefined8 *)(lVar6 + 0x2230),local_c0,iVar3,0);
    FUN_18020d3a0(lVar7 + 0x6d0,uVar1,*(undefined8 *)(param_1 + 0x40),&local_b0,*puVar5);
  }
  return iVar3 != -1;
}


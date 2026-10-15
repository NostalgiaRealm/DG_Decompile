/*
 * FUN_100c5280 at 100c5280
 * undefined FUN_100c5280(void)
 * Address ranges: 100c5280-100c5493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100c5280(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 in_x7;
  uint extraout_w15;
  int local_d0 [4];
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  ulonglong uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  
  FUN_100ce8c8(*(undefined4 *)(param_1 + 0x10));
  uVar4 = *(undefined4 *)(&DAT_101625d0 + extraout_w15 * 4);
  if (extraout_w15 < 0xe) {
    local_c0 = 0x1c0000001b;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  piVar1 = (int *)(param_1 + 0x30);
  iVar5 = *(int *)(*piVar1 + 0x1cf00);
  local_90 = 1;
  uStack_88 = 0;
  local_54 = 1;
  local_80 = 0;
  local_4c = 0;
  iVar7 = iVar5 + *(int *)(*piVar1 + 0x14) * 0x16c0;
  local_78[0] = 4;
  uStack_68 = (ulonglong)*(uint *)(param_1 + 4);
  iVar3 = iVar7 + 0x1c40;
  local_70 = 0;
  local_60 = *(undefined4 *)(param_1 + 8);
  local_5c = *(undefined2 *)(param_1 + 0xc);
  local_5a = *(undefined2 *)(param_1 + 0x14);
  local_58 = (undefined4)local_c0;
  iVar6 = FUN_101292c8(iVar3,&local_90,0,local_78);
  piVar2 = (int *)(param_1 + 0x34);
  *piVar2 = iVar6;
  iVar5 = iVar5 + 0x520;
  if (iVar6 == 0) {
    local_d0[0] = 0;
    FUN_10112948(iVar5,*(undefined4 *)(*piVar1 + 0x14),&local_90,0,local_78,0,0,in_x7,local_d0);
    *piVar2 = local_d0[0];
    if (local_d0[0] == 0) {
      return false;
    }
  }
  puVar8 = (undefined4 *)(iVar7 + 0x1c98);
  iVar7 = FUN_10111c30(*puVar8,2);
  *(int *)(param_1 + 0x38) = iVar7;
  if (iVar7 == -1) {
    FUN_1012bc98(iVar3,*piVar2);
    *piVar2 = 0;
  }
  else {
    _uStack_b8 = CONCAT44(uStack_b4,uVar4);
    local_c0 = CONCAT44(8,local_c0._4_4_);
    local_b0 = 0xffffffff00000000;
    local_a0 = 0;
    uStack_a8 = 0;
    uVar4 = *(undefined4 *)(*piVar1 + 0x14);
    puVar8 = (undefined4 *)FUN_10112730(*puVar8,local_d0,iVar7,0);
    FUN_101129b8(iVar5,uVar4,*piVar2,&local_c0,*puVar8);
  }
  return iVar7 != -1;
}


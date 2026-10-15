/*
 * FUN_10030848 at 10030848
 * undefined FUN_10030848(void)
 * Address ranges: 10030848-100309ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030848(int param_1,int param_2,undefined4 *param_3,byte param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar4 = param_2 + (uint)param_4 * 0x20;
  piVar1 = (int *)(param_1 + 0x138);
  local_78 = 0;
  puVar2 = (undefined4 *)(iVar4 + 0xe4);
  local_80 = *puVar2;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_50 = 0;
  uStack_7c = 1;
  _local_70 = CONCAT44(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(iVar4 + 0xf4));
  _local_68 = CONCAT44(1,*(undefined4 *)(param_2 + 0x24));
  local_60 = (ulonglong)*(uint *)(iVar4 + 0xf8);
  local_58 = *(undefined4 *)(iVar4 + 0xdc);
  uStack_54 = 0;
  piVar3 = (int *)(*(int *)(*(int *)(*piVar1 + 0x3188) + 0x1304) + 0x634);
  *piVar3 = *piVar3 + 1;
  FUN_10060198(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),local_58,0,0,0x400);
  FUN_10060198(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),*puVar2,0,1,0x800);
  FUN_10061e10(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),&local_58,*param_3,param_3[1],0,
               &local_80,param_3);
  FUN_10060198(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),*puVar2,0,1,0);
  uVar5 = FUN_100602c0(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304));
  *(undefined8 *)(param_2 + 0xb0) = uVar5;
  FUN_10060100(*(int *)(*(int *)(*piVar1 + 0x3188) + 0x1304) + 4,0);
  return;
}


/*
 * FUN_10058891 at 10058891
 * int __thiscall FUN_10058891(void * this, uint param_1)
 * Address ranges: 10058891-10058b0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10058891(void *this,uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  int *local_48;
  undefined1 local_44 [4];
  uint local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  SIZE_T local_2c;
  undefined4 local_28;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  SIZE_T local_10;
  uint local_c;
  
  uVar6 = *(uint *)((int)this + 0x2c);
  if (uVar6 < param_1 * 2) {
    uVar2 = *(uint *)((int)this + 0x30);
    uVar6 = (3 - (uint)(uVar6 * 3 < param_1)) * param_1;
    if (((uVar2 != 0) && (uVar2 < *(int *)((int)this + 0x34) + uVar6)) &&
       (param_1 <= uVar2 - *(int *)((int)this + 0x34))) {
      uVar6 = param_1;
    }
  }
  uVar2 = *(uint *)((int)this + 0x28);
  uVar6 = (uVar2 - 1) + uVar6 & -uVar2;
  if ((*(int *)((int)this + 0x30) != 0) &&
     (*(uint *)((int)this + 0x30) < *(int *)((int)this + 0x34) + uVar6)) {
    return 0;
  }
  local_3c = 0;
  local_4c = uVar6;
  local_40 = uVar6;
  FUN_100583de(&local_1c,uVar6 / uVar2);
  uVar2 = local_14;
  local_38 = (int *)FUN_1005c789(local_14);
  local_34 = (int *)FUN_1005c789(local_10);
  local_2c = local_10;
  local_30 = uVar2;
  local_28 = 0;
  local_58 = CONCAT44(local_58._4_4_,(uint)local_58);
  if ((local_38 == (int *)0x0) ||
     (local_58 = CONCAT44(local_58._4_4_,(uint)local_58), local_34 == (int *)0x0))
  goto LAB_10058af6;
  FUN_1005c9cc(local_38,0,uVar2);
  FUN_1005c9cc(local_34,0,local_10);
  *(int *)((int)local_38 + ((uVar2 & 0xfffffffc) - 4)) = local_1c;
  *(undefined4 *)((int)local_34 + ((local_10 & 0xfffffffc) - 4)) = local_18;
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 == 0) {
    local_6c = 2;
    if (*(char *)((int)this + 0x5c) != '\0') {
      local_6c = 5;
    }
  }
  else {
    local_6c = 4;
  }
  local_a0 = 0x10000;
  local_68 = -(uint)(iVar3 != 0) & 3;
  local_64 = (uint)(iVar3 != 0);
  local_a8[0] = 1;
  local_60 = 0;
  local_5c = 0;
  local_9c = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uVar1 = 0xac3;
  if (iVar3 == 1) {
    uVar1 = 0x400;
  }
  local_90 = 1;
  local_8c = 1;
  local_8a = 1;
  local_84 = 1;
  local_7c = 1;
  local_98 = uVar6;
  uVar2 = FUN_10051db1(*(void **)this,*(int *)((int)this + 4),&local_6c,0,local_a8,uVar1,iVar3,iVar3
                       ,&local_48);
  if ((char)uVar2 == '\0') goto LAB_10058af6;
  local_14 = 0;
  local_10 = 0;
  iVar3 = (**(code **)(*local_48 + 0x20))(local_48,0,&local_14,local_44);
  if (-1 < iVar3) {
    local_58 = (**(code **)(*local_48 + 0x2c))(local_48);
    uVar2 = (uint)((ulonglong)local_58 >> 0x20);
    local_c = (uint)local_58;
    local_50 = FUN_10056ae4((void *)((int)this + 0x3c),local_c,uVar2);
    if (local_50 == *(uint *)((int)this + 0x44)) {
LAB_10058ac0:
      FUN_100591ca((void *)((int)this + 0x3c),local_50,local_c,uVar2,(undefined4 *)&local_58,
                   &local_48);
    }
    else {
      iVar3 = *(int *)((int)this + 0x40);
      iVar4 = local_50 * 0x38;
      if ((*(uint *)(iVar4 + iVar3) != local_c) || (*(uint *)(iVar4 + 4 + iVar3) != uVar2))
      goto LAB_10058ac0;
      ppiVar7 = &local_48;
      puVar8 = (undefined4 *)(iVar3 + 0x10 + iVar4);
      for (iVar5 = 10; uVar6 = local_4c, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *ppiVar7;
        ppiVar7 = ppiVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    iVar3 = FUN_1005918d((void *)((int)this + 0x3c),(uint *)&local_58);
    if (iVar3 != 0) {
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + uVar6;
      return iVar3;
    }
  }
  (**(code **)(*local_48 + 8))(local_48);
LAB_10058af6:
  thunk_FUN_1005c76c(local_38);
  thunk_FUN_1005c76c(local_34);
  return 0;
}


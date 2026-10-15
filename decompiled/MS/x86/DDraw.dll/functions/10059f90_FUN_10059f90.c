/*
 * FUN_10059f90 at 10059f90
 * int __thiscall FUN_10059f90(void * this, uint param_1)
 * Address ranges: 10059f90-1005a21d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10059f90(void *this,uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
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
  int *local_48;
  undefined1 local_44 [4];
  uint local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  SIZE_T local_2c;
  undefined4 local_28;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  SIZE_T local_14;
  uint local_10;
  uint local_c;
  
  uVar5 = *(uint *)((int)this + 0x2c);
  if (uVar5 < param_1 * 2) {
    uVar6 = *(uint *)((int)this + 0x30);
    uVar5 = (3 - (uint)(uVar5 * 3 < param_1)) * param_1;
    if (((uVar6 != 0) && (uVar6 < *(int *)((int)this + 0x34) + uVar5)) &&
       (param_1 <= uVar6 - *(int *)((int)this + 0x34))) {
      uVar5 = param_1;
    }
  }
  uVar6 = *(uint *)((int)this + 0x28);
  uVar5 = (uVar6 - 1) + uVar5 & -uVar6;
  if ((*(int *)((int)this + 0x30) == 0) ||
     (*(int *)((int)this + 0x34) + uVar5 <= *(uint *)((int)this + 0x30))) {
    local_3c = 0;
    local_40 = uVar5;
    local_c = uVar5;
    FUN_1005aadf(&local_20,uVar5 / uVar6);
    uVar6 = local_18;
    local_38 = (int *)FUN_10060bfe(local_18);
    local_34 = (int *)FUN_10060bfe(local_14);
    local_2c = local_14;
    local_30 = uVar6;
    local_28 = 0;
    local_58 = CONCAT44(local_58._4_4_,(uint)local_58);
    if ((local_38 != (int *)0x0) &&
       (local_58 = CONCAT44(local_58._4_4_,(uint)local_58), local_34 != (int *)0x0)) {
      FUN_10060d45(local_38,0,uVar6);
      FUN_10060d45(local_34,0,local_14);
      *(int *)((int)local_38 + ((uVar6 & 0xfffffffc) - 4)) = local_20;
      *(undefined4 *)((int)local_34 + ((local_14 & 0xfffffffc) - 4)) = local_1c;
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
      local_60 = 0;
      local_5c = 0;
      local_a8[0] = 1;
      local_90 = 1;
      local_8c = 1;
      local_8a = 1;
      local_84 = 1;
      local_7c = 1;
      local_9c = 0;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      piVar1 = *(int **)(*(int *)((int)this + 4) * 0x18 + *(int *)this);
      uVar2 = 0xac3;
      if (iVar3 == 1) {
        uVar2 = 0x400;
      }
      local_98 = uVar5;
      iVar3 = (**(code **)(*piVar1 + 0x6c))
                        (piVar1,&local_6c,0,local_a8,uVar2,0,&DAT_10063c78,&local_48);
      if (-1 < iVar3) {
        local_18 = 0;
        local_14 = 0;
        iVar3 = (**(code **)(*local_48 + 0x20))(local_48,0,&local_18,local_44);
        if (-1 < iVar3) {
          local_58 = (**(code **)(*local_48 + 0x2c))(local_48);
          uVar6 = (uint)((ulonglong)local_58 >> 0x20);
          local_10 = (uint)local_58;
          local_50 = FUN_1005696e((void *)((int)this + 0x3c),local_10,uVar6);
          if (((local_50 == *(uint *)((int)this + 0x44)) ||
              (iVar3 = local_50 * 0x38, *(uint *)(iVar3 + *(int *)((int)this + 0x40)) != local_10))
             || (uVar5 = local_c, *(uint *)(iVar3 + 4 + *(int *)((int)this + 0x40)) != uVar6)) {
            FUN_1005a99d((void *)((int)this + 0x3c),local_50,local_10,uVar6,(undefined4 *)&local_58,
                         &local_48);
          }
          else {
            ppiVar7 = &local_48;
            puVar8 = (undefined4 *)(*(int *)((int)this + 0x40) + 0x10 + iVar3);
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *ppiVar7;
              ppiVar7 = ppiVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          iVar3 = FUN_1005a960((void *)((int)this + 0x3c),(uint *)&local_58);
          if (iVar3 != 0) {
            *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + uVar5;
            return iVar3;
          }
        }
        (**(code **)(*local_48 + 8))(local_48);
      }
    }
    thunk_FUN_10060be1(local_38);
    thunk_FUN_10060be1(local_34);
  }
  return 0;
}


/*
 * FUN_10063209 at 10063209
 * undefined4 __thiscall FUN_10063209(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5)
 * Address ranges: 10063209-1006336b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10063209(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  uint3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_5;
  local_c = 0;
  local_8 = 0;
  local_24 = this;
  cVar2 = FUN_10062998(this,param_1,param_2,2,'\x01',&local_c,&local_8);
  if (CONCAT31(extraout_var,cVar2) == 0) {
    iVar3 = *(int *)((int)this + 0x1c);
    local_1c = (uint)(byte)(&DAT_100b0660)[iVar3];
    local_18 = (uint)(byte)(&DAT_100b067c)[iVar3];
    local_14 = *(uint *)(&DAT_100b04f0 + iVar3 * 4);
    if (*(uint *)(&DAT_100b04f0 + iVar3 * 4) == 0x18) {
      local_14 = 0x20;
    }
    local_20 = *(uint *)(&DAT_100b05f0 + iVar3 * 4);
    if (7 < local_14) {
      local_20 = local_14 >> 3;
    }
    local_10 = *param_5;
    param_5 = (int *)FUN_100791d2(this,*(uint *)((int)this + 0x14),(byte)param_1);
    if (local_14 < 8) {
      param_5 = (int *)((uint)param_5 / local_1c);
    }
    uVar5 = piVar1[1];
    if (uVar5 <= (uint)piVar1[3]) {
      iVar3 = *piVar1;
      bVar6 = uVar5 == piVar1[3];
      do {
        if (bVar6) {
          param_5 = (int *)piVar1[2];
        }
        FUN_100adac0((undefined4 *)(uVar5 * local_8 + iVar3 * local_20 + local_c),
                     (undefined4 *)(uVar5 * param_4 + iVar3 * local_20 + param_3),
                     ((int)param_5 - local_10) * local_20);
        iVar3 = 0;
        local_10 = 0;
        uVar5 = uVar5 + 1;
        bVar6 = uVar5 == piVar1[3];
        this = local_24;
      } while (uVar5 <= (uint)piVar1[3]);
    }
    FUN_10062a22(this,param_1,param_2);
    local_30 = piVar1[1];
    local_34 = 0;
    if (local_14 < 8) {
      local_30 = local_30 * local_18;
    }
    local_2c = *(uint *)((int)this + 0x14) >> ((byte)param_1 & 0x1f);
    if (local_2c == 0) {
      local_2c = 1;
    }
    local_28 = piVar1[3] + 1;
    if (local_14 < 8) {
      local_28 = local_28 * local_18;
    }
    uVar4 = (**(code **)(*(int *)this + 8))
                      (*(int *)((int)this + 0x2c) * param_2 + param_1,&local_34);
    iVar3 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  else {
    iVar3 = (uint)extraout_var << 8;
  }
  return iVar3;
}


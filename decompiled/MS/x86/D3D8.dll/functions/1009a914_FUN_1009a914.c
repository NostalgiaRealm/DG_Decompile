/*
 * FUN_1009a914 at 1009a914
 * undefined4 __thiscall FUN_1009a914(void * this, uint param_1, uint param_2, void * param_3, int param_4, int * param_5)
 * Address ranges: 1009a914-1009aa7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1009a914(void *this,uint param_1,uint param_2,void *param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50 [4];
  int local_40;
  int local_3c;
  undefined4 local_38;
  uint local_30 [3];
  undefined4 local_24;
  undefined4 local_20 [7];
  
  FUN_1009ed73(*(void **)((int)this + 0x8e4),*(uint *)(param_4 + 4),0,1,*(int *)((int)this + 0x8e0),
               (int)this,0x800,*(int *)((int)this + 0x938),*(int *)((int)this + 0x93c));
  FUN_100989a6(this,param_1,param_2,0,0x400);
  FUN_1009e3fc(param_3,*(int *)(param_4 + 0x18),*(int *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc)
               ,*(uint *)(param_4 + 0x10),*(uint *)(param_4 + 0x14),
               *(int **)(*(int *)((int)this + 0x8e0) + 0xc),*(uint *)((int)this + 0x938),
               *(undefined4 *)((int)this + 0x93c));
  local_58 = *(undefined4 *)(param_4 + 4);
  local_54 = 1;
  piVar3 = local_50;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_50[0] = *(uint *)(param_4 + 8) - *(uint *)(param_4 + 0x10);
  local_50[1] = (*(int *)(param_4 + 0xc) - *(int *)(param_4 + 0x14)) -
                (uint)(*(uint *)(param_4 + 8) < *(uint *)(param_4 + 0x10));
  local_50[2] = *(undefined4 *)(param_4 + 0x20);
  local_60 = param_5[4] - param_5[1];
  local_64 = param_5[3] - *param_5;
  local_5c = param_5[5] - param_5[2];
  local_30[1] = 0;
  local_24 = 0;
  local_38 = *(undefined4 *)(param_4 + 0x1c);
  local_30[0] = param_1;
  local_30[2] = param_2;
  puVar4 = local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_50[3] = local_64;
  local_40 = local_60;
  local_3c = local_5c;
  FUN_1009827e((int)this);
  FUN_10098377((int)this);
  (**(code **)(**(int **)((int)this + 0x638) + 0x40))
            (*(int **)((int)this + 0x638),local_30,*param_5,param_5[1],param_5[2],&local_58,
             &local_70);
  uVar1 = FUN_1009832f((int)this);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


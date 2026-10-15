/*
 * FUN_100418fa at 100418fa
 * undefined4 __thiscall FUN_100418fa(void * this, uint param_1, uint param_2, void * param_3, int param_4, int * param_5)
 * Address ranges: 100418fa-10041a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100418fa(void *this,uint param_1,uint param_2,void *param_3,int param_4,int *param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint local_78 [3];
  undefined4 local_6c;
  undefined4 local_68 [6];
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  
  local_c = this;
  FUN_1003c285(*(void **)((int)this + 0x8e4),*(uint *)(param_4 + 4),0,1,*(int *)((int)this + 0x8e0),
               (int)this,0x800,*(int *)((int)this + 0x938),*(int *)((int)this + 0x93c));
  FUN_1003fc13(this,param_1,param_2,0,0x400);
  FUN_1004cb7c(param_3,*(int *)(param_4 + 0x18),*(int *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc)
               ,*(uint *)(param_4 + 0x10),*(uint *)(param_4 + 0x14),
               *(int **)(*(int *)((int)this + 0x8e0) + 0xc),*(uint *)((int)this + 0x938),
               *(undefined4 *)((int)this + 0x93c));
  local_50 = *(undefined4 *)(param_4 + 4);
  local_4c = 1;
  piVar4 = local_48;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_48[0] = *(uint *)(param_4 + 8) - *(uint *)(param_4 + 0x10);
  local_48[1] = (*(int *)(param_4 + 0xc) - *(int *)(param_4 + 0x14)) -
                (uint)(*(uint *)(param_4 + 8) < *(uint *)(param_4 + 0x10));
  local_48[2] = *(undefined4 *)(param_4 + 0x20);
  local_14 = param_5[4] - param_5[1];
  local_48[3] = param_5[3] - *param_5;
  local_34 = param_5[5] - param_5[2];
  local_78[1] = 0;
  local_6c = 0;
  local_30 = *(undefined4 *)(param_4 + 0x1c);
  local_78[0] = param_1;
  local_78[2] = param_2;
  puVar5 = local_68;
  local_38 = local_14;
  for (iVar3 = 6; pvVar1 = local_c, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = local_48[3];
  local_10 = local_34;
  FUN_1003f506((int)local_c);
  FUN_1003f5ff((int)pvVar1);
  (**(code **)(**(int **)((int)pvVar1 + 0x638) + 0x40))
            (*(int **)((int)pvVar1 + 0x638),local_78,*param_5,param_5[1],param_5[2],&local_50,
             &local_24);
  uVar2 = FUN_1003f5b7((int)pvVar1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


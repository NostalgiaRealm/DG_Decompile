/*
 * FUN_100c4cd9 at 100c4cd9
 * undefined __thiscall FUN_100c4cd9(void * this, undefined4 * param_1, uint param_2, uint param_3, int param_4)
 * Address ranges: 100c4cd9-100c4ed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c4cd9(void *this,undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = param_2 >> 1;
  local_20 = 0;
  local_1c = 0;
  local_24 = param_3 >> 1;
  local_18 = (float)local_28 + 0.0;
  local_10 = 0;
  iVar1 = *(int *)(param_4 + 0x10);
  local_c = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_14 = (float)local_24 + 0.0;
  FUN_100bbee4(*(int *)(*(int *)(param_4 + 0xc) + 0x1304),1,(int)&local_20);
  FUN_100bbe59(*(int *)(*(int *)(param_4 + 0xc) + 0x1304),1,(int)&local_30);
  piVar3 = *(int **)(*(int *)(iVar1 + 8) * 0x18 + 0x520 + (int)this);
  (**(code **)(*piVar3 + 0x60))
            (piVar3,1,(*(int *)(param_4 + 0x24) + *(int *)(param_4 + 0x1c)) *
                      *(int *)(*(int *)(param_4 + 4) + 0x10) + *(int *)(*(int *)(param_4 + 4) + 8),
             *(undefined4 *)(param_4 + 0x18));
  puVar2 = *(uint **)(param_4 + 4);
  uVar5 = (*(int *)(param_4 + 0x24) + *(int *)(param_4 + 0x1c)) * puVar2[4];
  FUN_100bb78a(*(int *)(*(int *)(param_4 + 0xc) + 0x1304),1,uVar5 + *puVar2,
               puVar2[1] + (uint)CARRY4(uVar5,*puVar2));
  FUN_100ba192(*(void **)(*(int *)(param_4 + 0xc) + 0x15dc),(int *)&stack0xffffffb4,
               *(uint *)(iVar1 + 0xd88),*(int *)(param_4 + 0x20));
  FUN_100bbcc8(*(int *)(*(int *)(param_4 + 0xc) + 0x1304),1,(int *)&stack0xffffffb4,0,(int *)0x0);
  puVar6 = (undefined4 *)
           ((*(int *)(param_4 + 0x24) + 3) * 0x40 + *(int *)(*(int *)(param_4 + 8) + 8));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_100baf7e(*(void **)(*(int *)(param_4 + 0xc) + 0x1304),
               *(uint *)(iVar1 + 0xd7c + *(int *)(param_4 + 0x20) * 4),0,0,4);
  FUN_100baf7e(*(void **)(*(int *)(param_4 + 0xc) + 0x1304),*(uint *)(param_4 + 0x14),0,0,0x80);
  FUN_100bc10f(*(int *)(*(int *)(param_4 + 0xc) + 0x1304),4,1,*(int *)(param_4 + 0x24) * 4 + 0xc,0);
  piVar3 = FUN_100ba192(*(void **)(*(int *)(param_4 + 0xc) + 0x15d8),(int *)&stack0xffffffb8,
                        *(int *)(iVar1 + 0xd84) + *(int *)(param_4 + 0x20),0);
  *(int *)(param_4 + 0x18) = *piVar3;
  *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(iVar1 + 0xd7c + *(int *)(param_4 + 0x20) * 4);
  *(int *)(param_4 + 0x24) = *(int *)(param_4 + 0x24) + 1;
  *(uint *)(param_4 + 0x20) = *(int *)(param_4 + 0x20) - 1U & 1;
  return;
}


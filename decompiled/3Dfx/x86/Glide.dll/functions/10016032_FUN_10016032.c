/*
 * FUN_10016032 at 10016032
 * undefined __fastcall FUN_10016032(int param_1)
 * Address ranges: 10016032-10016107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10016032(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  int local_8;
  
  uVar2 = FUN_1003c646(*(void **)(*(int *)(param_1 + 0x3188) + 0x15dc),2);
  *(uint *)(param_1 + 0x31b8) = uVar2;
  if (uVar2 != 0xffffffff) {
    FUN_1003c902(*(void **)(*(int *)(param_1 + 0x3188) + 0x15dc),&local_8,uVar2,0);
    local_24 = 0x1c;
    local_20 = 6;
    local_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    piVar1 = *(int **)(*(int *)(param_1 + 0x3184) * 0x18 + 0x520 + *(int *)(param_1 + 0x3180));
    (**(code **)(*piVar1 + 0x50))(piVar1,0,&local_24,local_8);
    FUN_1003c902(*(void **)(*(int *)(param_1 + 0x3188) + 0x15dc),&local_c,
                 *(uint *)(param_1 + 0x31b8),0);
    local_3c = 0x39;
    local_38 = 6;
    local_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    piVar1 = *(int **)(*(int *)(param_1 + 0x3184) * 0x18 + 0x520 + *(int *)(param_1 + 0x3180));
    (**(code **)(*piVar1 + 0x50))(piVar1,0,&local_3c,local_c);
  }
  return;
}


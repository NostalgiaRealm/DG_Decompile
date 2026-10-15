/*
 * FUN_10009af4 at 10009af4
 * undefined __fastcall FUN_10009af4(int param_1)
 * Address ranges: 10009af4-10009bc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10009af4(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar2 = 0;
  do {
    local_30 = 3;
    local_28 = 1;
    local_24 = 8;
    local_2c = 0;
    local_20 = 0;
    local_1c = 0;
    local_3c = *(undefined4 *)(&DAT_10055654 + ((uVar2 >> 1 & 1) * 2 | uVar2 & 1) * 4);
    local_38 = (uVar2 >> 2 & 1) * 2 | 1;
    local_18 = 0;
    local_34 = (uVar2 >> 3 & 1) * 2 | 1;
    local_14 = 0;
    local_10 = 0;
    local_c = 0x7f7fffff;
    (**(code **)(**(int **)(param_1 + 0x3334) + 0x24))(*(int **)(param_1 + 0x3334),&local_8);
    local_8 = local_8 + *(int *)(param_1 + 0x3310) * uVar2;
    piVar1 = *(int **)(*(int *)(param_1 + 0x3300) + 0x520 + *(int *)(param_1 + 0x3304) * 0x18);
    (**(code **)(*piVar1 + 0x58))(piVar1,&local_3c,local_8);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}


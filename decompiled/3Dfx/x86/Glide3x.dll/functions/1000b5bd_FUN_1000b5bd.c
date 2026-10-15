/*
 * FUN_1000b5bd at 1000b5bd
 * undefined4 __fastcall FUN_1000b5bd(int param_1)
 * Address ranges: 1000b5bd-1000b66a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000b5bd(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_24 = 2;
  local_20 = 4;
  local_28 = 0x670;
  local_14 = 0x670;
  local_1c = 0x10000;
  local_18 = 0;
  uVar2 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3308) + 0xc))
                    ((int *)**(undefined4 **)(param_1 + 0x3308),&local_28,0,
                     (undefined4 *)(param_1 + 0x330c));
  if (-1 < (int)uVar2) {
    local_3c = 1;
    local_40 = 0xd50;
    local_2c = 0xd50;
    local_38 = 4;
    local_34 = 0;
    local_30 = 0;
    local_10 = &DAT_1005a328;
    local_c = 0;
    local_8 = 0;
    iVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3308) + 0xc))
                      ((int *)**(undefined4 **)(param_1 + 0x3308),&local_40,&local_10,
                       param_1 + 0x3310);
    if (-1 < iVar3) {
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
    piVar1 = *(int **)(param_1 + 0x330c);
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
  }
  return uVar2 & 0xffffff00;
}


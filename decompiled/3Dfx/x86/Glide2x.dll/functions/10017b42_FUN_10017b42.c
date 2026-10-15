/*
 * FUN_10017b42 at 10017b42
 * undefined4 __fastcall FUN_10017b42(int param_1)
 * Address ranges: 10017b42-10017bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10017b42(int param_1)

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
  local_28 = 0x590;
  local_14 = 0x590;
  local_1c = 0x10000;
  local_18 = 0;
  uVar2 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3188) + 0xc))
                    ((int *)**(undefined4 **)(param_1 + 0x3188),&local_28,0,
                     (undefined4 *)(param_1 + 0x318c));
  if (-1 < (int)uVar2) {
    local_3c = 1;
    local_40 = 0xd50;
    local_2c = 0xd50;
    local_38 = 4;
    local_34 = 0;
    local_30 = 0;
    local_10 = &DAT_100584c8;
    local_c = 0;
    local_8 = 0;
    iVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3188) + 0xc))
                      ((int *)**(undefined4 **)(param_1 + 0x3188),&local_40,&local_10,
                       param_1 + 0x3190);
    if (-1 < iVar3) {
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
    piVar1 = *(int **)(param_1 + 0x318c);
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
  }
  return uVar2 & 0xffffff00;
}


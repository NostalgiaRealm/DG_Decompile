/*
 * FUN_10017e28 at 10017e28
 * undefined4 __fastcall FUN_10017e28(int param_1)
 * Address ranges: 10017e28-10017ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10017e28(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c [6];
  
  puVar1 = (undefined4 *)(param_1 + 0x31ac);
  uVar4 = *(int *)(*(int *)(param_1 + 4) + 0x33) * *(int *)(*(int *)(param_1 + 4) + 0x2f);
  local_1c[1] = 0;
  local_1c[3] = 0;
  local_1c[2] = 8;
  local_1c[4] = 0x40;
  local_1c[5] = 4;
  local_1c[0] = uVar4;
  uVar2 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3188) + 0xc))
                    ((int *)**(undefined4 **)(param_1 + 0x3188),local_1c,0,puVar1);
  if (-1 < (int)uVar2) {
    local_34 = 0;
    local_24 = 0;
    local_20 = 0;
    local_30 = 1;
    local_2c = 0;
    local_28 = uVar4 >> 2;
    iVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3188) + 0x1c))
                      ((int *)**(undefined4 **)(param_1 + 0x3188),*puVar1,&local_34,param_1 + 0x31b0
                      );
    if (-1 < iVar3) {
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
    uVar2 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  }
  return uVar2 & 0xffffff00;
}


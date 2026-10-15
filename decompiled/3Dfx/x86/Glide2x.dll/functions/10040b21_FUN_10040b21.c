/*
 * FUN_10040b21 at 10040b21
 * undefined __thiscall FUN_10040b21(void * this, int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7, undefined4 param_8, int param_9, undefined4 param_10)
 * Address ranges: 10040b21-10040cbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10040b21(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  local_8 = this;
  FUN_1003fe08(param_1);
  if (((param_2 != 0) && (param_3 != 0)) && (param_7 != 0)) {
    local_64 = param_2;
    iVar5 = *(int *)(param_1 + 8) * 0x1510;
    local_60 = param_3;
    local_4c = 0;
    local_40 = 0;
    local_3c = 0;
    local_c = 0;
    local_5c = 1;
    local_58 = 1;
    local_50 = 1;
    local_48 = 1;
    local_54 = 0x1b;
    local_44 = 8;
    local_14 = param_7;
    local_10 = param_8;
    piVar3 = *(int **)(iVar5 + 0x510 + (int)this);
    iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_64,&local_14,param_1 + 0xd88);
    if (-1 < iVar4) {
      local_38 = 0x1c;
      local_28 = 0;
      local_24 = 0;
      piVar3 = *(int **)(iVar5 + 0x510 + (int)this);
      puVar1 = (undefined4 *)(param_1 + 0xd8c);
      local_34 = 4;
      local_30 = 0;
      local_2c = 0xffffffff;
      iVar4 = (**(code **)(*piVar3 + 0x1c))
                        (piVar3,*(undefined4 *)(param_1 + 0xd88),&local_38,puVar1);
      if (-1 < iVar4) {
        *(undefined4 *)(param_1 + 0xc40) = param_4;
        *(undefined4 *)(param_1 + 0xc44) = param_5;
        *(undefined4 *)(param_1 + 0xc48) = param_6;
        if (param_9 == 0) {
          return;
        }
        local_20 = param_9;
        local_1c = param_10;
        local_18 = 0;
        piVar3 = *(int **)(iVar5 + 0x510 + (int)this);
        puVar2 = (undefined4 *)(param_1 + 0xd90);
        iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_64,&local_20,puVar2);
        if (-1 < iVar4) {
          piVar3 = *(int **)(iVar5 + 0x510 + (int)local_8);
          iVar4 = (**(code **)(*piVar3 + 0x1c))(piVar3,*puVar2,&local_38,param_1 + 0xd94);
          if (-1 < iVar4) {
            return;
          }
          (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
          *puVar2 = 0;
        }
        (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
        *puVar1 = 0;
      }
      piVar3 = *(int **)(param_1 + 0xd88);
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(param_1 + 0xd88) = 0;
    }
  }
  return;
}


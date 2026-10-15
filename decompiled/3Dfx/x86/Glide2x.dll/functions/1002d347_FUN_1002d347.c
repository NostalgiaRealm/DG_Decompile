/*
 * FUN_1002d347 at 1002d347
 * undefined4 __thiscall FUN_1002d347(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7, undefined4 * param_8, undefined4 param_9)
 * Address ranges: 1002d347-1002d51e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1002d347(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 param_9)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  byte extraout_var;
  byte bVar4;
  int iVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [7];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24 [6];
  int local_c;
  
  local_60 = 0x28;
  cVar1 = *(char *)((int)this + 0x48);
  local_c = ((cVar1 != '\0') - 1 & 0xffffffe5) + 0x39;
  local_80 = param_1;
  local_7c = param_2;
  iVar5 = ((cVar1 != '\0') - 1 & 0xffffffe3) + 0x39;
  local_78 = 1;
  local_74 = 1;
  local_68 = 0;
  local_64 = 0;
  local_70 = ((cVar1 != '\0') - 1 & 0xffffffe6) + 0x35;
  local_5c = 0;
  local_6c = param_3;
  local_58 = 0;
  local_24[5] = iVar5;
  uVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x14))
                    ((int *)**(undefined4 **)((int)this + 0xa8),&local_80,0,param_4);
  if (-1 < (int)uVar3) {
    local_24[3] = 0;
    local_24[4] = 0;
    local_24[1] = 6;
    local_24[2] = 0;
    local_24[0] = iVar5;
    iVar5 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x24))
                      ((int *)**(undefined4 **)((int)this + 0xa8),*param_4,local_24,param_6);
    if (-1 < iVar5) {
      piVar2 = (int *)*param_6;
      *param_5 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      bVar4 = 1;
      if (param_3 == 1) {
        piVar2 = (int *)*param_4;
        *param_7 = piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      else {
        local_6c = 1;
        (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x14))
                  ((int *)**(undefined4 **)((int)this + 0xa8),&local_80,0,param_7);
        bVar4 = extraout_var >> 7 ^ 1;
      }
      if (bVar4 != 0) {
        local_54[6] = local_c;
        local_2c = 0;
        local_28 = 0;
        local_38 = 4;
        local_34 = 0;
        local_30 = 0xffffffff;
        iVar5 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x1c))
                          ((int *)**(undefined4 **)((int)this + 0xa8),*param_7,local_54 + 6,param_8)
        ;
        if (-1 < iVar5) {
          local_54[0] = local_24[5];
          local_54[4] = 0;
          local_54[5] = 0;
          local_54[1] = 4;
          local_54[2] = 0;
          local_54[3] = 0xffffffff;
          iVar5 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x1c))
                            ((int *)**(undefined4 **)((int)this + 0xa8),*param_7,local_54,param_9);
          if (-1 < iVar5) {
            return CONCAT31((int3)((uint)iVar5 >> 8),1);
          }
          (**(code **)(*(int *)*param_8 + 8))((int *)*param_8);
        }
        (**(code **)(*(int *)*param_7 + 8))((int *)*param_7);
      }
      (**(code **)(*(int *)*param_6 + 8))((int *)*param_6);
      (**(code **)(*(int *)*param_5 + 8))((int *)*param_5);
    }
    uVar3 = (**(code **)(*(int *)*param_4 + 8))((int *)*param_4);
  }
  return uVar3 & 0xffffff00;
}


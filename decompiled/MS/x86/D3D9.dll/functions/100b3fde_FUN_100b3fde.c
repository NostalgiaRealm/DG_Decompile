/*
 * FUN_100b3fde at 100b3fde
 * undefined4 __thiscall FUN_100b3fde(void * this, int param_1, uint param_2)
 * Address ranges: 100b3fde-100b407a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100b3fde(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = *(int *)(param_1 + 8);
  puVar1 = (undefined4 *)(param_1 + 0xd68);
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x24))
                    (*(int **)(param_1 + 4),0,&DAT_100d8454,puVar1);
  if (-1 < (int)uVar3) {
    local_14 = 4;
    local_10 = 0;
    local_18 = *(undefined4 *)(&DAT_100d3f84 + *(int *)(param_1 + 0x2c) * 4);
    piVar2 = *(int **)(iVar4 * 0x1510 + 0x510 + (int)this);
    local_c = 0;
    local_8 = 0;
    iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2,*puVar1,&local_18,param_1 + 0xd6c);
    if (-1 < iVar4) {
      uVar5 = FUN_100b319f(this,param_1,param_2);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    uVar3 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    *puVar1 = 0;
  }
  return uVar3 & 0xffffff00;
}


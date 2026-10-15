/*
 * FUN_1006038f at 1006038f
 * undefined4 __thiscall FUN_1006038f(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4, int * param_5, int param_6, int param_7, int param_8)
 * Address ranges: 1006038f-10060418
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1006038f(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,
            int param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = (param_5[3] - *param_5) + param_6;
  local_14 = param_8;
  local_c = (param_5[4] - param_5[1]) + param_7;
  local_18 = param_7;
  local_8 = (param_5[5] - param_5[2]) + param_8;
  local_1c = param_6;
  piVar1 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
  puVar3 = (undefined4 *)(param_4 + 0x18);
  if (param_4 == 0) {
    puVar3 = (undefined4 *)&DAT_00000034;
  }
  puVar4 = (undefined4 *)(param_3 + 0x18);
  if (param_3 == 0) {
    puVar4 = (undefined4 *)&DAT_00000034;
  }
  uVar2 = (**(code **)(*piVar1 + 0xb8))
                    (piVar1,*puVar4,param_1,*param_5,param_5[1],param_5[2],*puVar3,param_2,&local_1c
                    );
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


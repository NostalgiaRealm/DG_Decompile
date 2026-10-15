/*
 * FUN_1004180a at 1004180a
 * uint __thiscall FUN_1004180a(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 1004180a-10041839
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1004180a(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 * 0x18 + (int)this);
  uVar2 = (**(code **)(*piVar1 + 0x6c))
                    (piVar1,param_2,param_3,param_4,param_5,0,&DAT_1005896c,param_8);
  return uVar2 >> 0x1f ^ 1;
}


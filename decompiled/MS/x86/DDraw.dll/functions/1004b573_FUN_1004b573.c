/*
 * FUN_1004b573 at 1004b573
 * uint __thiscall FUN_1004b573(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 1004b573-1004b5a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1004b573(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 * 0x18 + (int)this);
  uVar2 = (**(code **)(*piVar1 + 0x6c))
                    (piVar1,param_2,param_3,param_4,param_5,param_6,&DAT_10063c78,param_8);
  return uVar2 >> 0x1f ^ 1;
}


/*
 * FUN_100643f9 at 100643f9
 * undefined __thiscall FUN_100643f9(void * this, uint * param_1, int * param_2, int param_3, undefined4 param_4, uint param_5)
 * Address ranges: 100643f9-1006445b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100643f9(void *this,uint *param_1,int *param_2,int param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1[0x3d] + 0x2f0 + uVar1 * 4) != 0) {
      param_1[0xbe] = 0xffffffff;
      FUN_1006438f(this,param_1,param_2,
                   (uint *)(param_3 + *(int *)(param_1[0x3d] + 0x2f0 + uVar1 * 4) * 4),param_4,
                   param_5);
      FUN_100c3be1((int *)param_1,param_2,0x3e);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}


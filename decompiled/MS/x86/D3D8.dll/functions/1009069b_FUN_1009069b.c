/*
 * FUN_1009069b at 1009069b
 * undefined4 * __thiscall FUN_1009069b(void * this, undefined4 * param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5)
 * Address ranges: 1009069b-10090754
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1009069b(void *this,undefined4 *param_1,uint param_2,uint param_3,uint param_4,
            undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_3 = param_2;
  uVar2 = FUN_10007b6a((void *)((int)this + 0x250),(int *)&param_3);
  if (uVar2 != 0xffffffff) {
    param_3 = uVar2 * 0xc;
    if (uVar3 < *(uint *)(param_3 + 0xd4 + (int)this)) {
      if (*(int *)(*(int *)(param_3 + 0xd0 + (int)this) + uVar3 * 8) == 0) {
        FUN_10090483(this,param_2,uVar3,param_5);
      }
      iVar1 = *(int *)(*(int *)(param_3 + 0x10 + (int)this) + uVar3 * 4);
      if (param_4 < *(uint *)(*(int *)(param_3 + 0xd0 + (int)this) + uVar3 * 8)) {
        iVar4 = param_4 * 0x1c;
        param_1[5] = 0x20;
        *param_1 = *(undefined4 *)(iVar4 + iVar1);
        param_1[1] = *(undefined4 *)(iVar4 + 4 + iVar1);
        uVar3 = *(uint *)(iVar4 + 8 + iVar1);
        uVar2 = *(uint *)(iVar4 + 0xc + iVar1);
        param_1[2] = uVar3;
        param_1[3] = uVar2;
        if (uVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 / uVar2;
        }
        param_1[4] = uVar3;
      }
    }
  }
  return param_1;
}


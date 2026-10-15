/*
 * FUN_1004927c at 1004927c
 * undefined4 * __thiscall FUN_1004927c(void * this, undefined4 * param_1, int param_2, uint param_3, uint param_4, undefined4 param_5)
 * Address ranges: 1004927c-10049328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1004927c(void *this,undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5
            )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = FUN_10048c8d(this,param_2);
  if (uVar3 != 0xffffffff) {
    iVar4 = uVar3 * 0xc;
    if (param_3 < *(uint *)(iVar4 + 0xd4 + (int)this)) {
      if (*(int *)(*(int *)(iVar4 + 0xd0 + (int)this) + param_3 * 8) == 0) {
        FUN_10049071(this,param_2,param_3,param_5);
      }
      iVar1 = *(int *)(*(int *)(iVar4 + 0x10 + (int)this) + param_3 * 4);
      if (param_4 < *(uint *)(*(int *)(iVar4 + 0xd0 + (int)this) + param_3 * 8)) {
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


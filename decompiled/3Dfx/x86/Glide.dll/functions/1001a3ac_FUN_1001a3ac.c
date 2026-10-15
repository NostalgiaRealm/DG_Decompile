/*
 * FUN_1001a3ac at 1001a3ac
 * uint * __thiscall FUN_1001a3ac(void * this, uint * param_1, int param_2, uint * param_3, int param_4)
 * Address ranges: 1001a3ac-1001a425
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_1001a3ac(void *this,uint *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)((int)this + param_2 * 8 + 0x14);
  uVar4 = *(uint *)((int)this + param_2 * 8 + 0x18);
  if (param_4 == 0) {
    param_4 = *(int *)((int)this + 4);
  }
  uVar1 = *(uint *)(param_4 + 0xa2);
  uVar2 = *(uint *)(param_4 + 0xa6);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  if ((uVar1 == 0) || (uVar2 == 0)) {
    uVar3 = uVar3 / *param_3;
    uVar4 = uVar4 / param_3[1];
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar1 == uVar2) {
      if (uVar3 < uVar4) {
        uVar4 = uVar3;
      }
      *param_1 = uVar4;
    }
    else if (uVar1 == 0) {
      *param_1 = uVar3;
      return param_1;
    }
    param_1[1] = uVar4;
  }
  return param_1;
}


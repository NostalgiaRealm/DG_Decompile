/*
 * FUN_10056371 at 10056371
 * uint __thiscall FUN_10056371(void * this, uint param_1)
 * Address ranges: 10056371-100563aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10056371(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if (param_1 < uVar2) {
    while (param_1 = param_1 + 1, param_1 < uVar2) {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + -8 + param_1 * 8) = *(undefined4 *)(iVar1 + param_1 * 8);
      *(undefined4 *)(iVar1 + -4 + param_1 * 8) = *(undefined4 *)(iVar1 + 4 + param_1 * 8);
      uVar2 = *(uint *)((int)this + 4);
    }
    *(uint *)((int)this + 4) = uVar2 - 1;
    uVar2 = CONCAT31((int3)(uVar2 - 1 >> 8),1);
  }
  else {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}


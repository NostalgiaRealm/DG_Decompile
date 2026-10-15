/*
 * FUN_10007b3a at 10007b3a
 * uint __thiscall FUN_10007b3a(void * this, uint param_1)
 * Address ranges: 10007b3a-10007b69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10007b3a(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (param_1 < uVar1) {
    while (param_1 = param_1 + 1, param_1 < uVar1) {
      *(undefined4 *)(*(int *)this + -4 + param_1 * 4) = *(undefined4 *)(*(int *)this + param_1 * 4)
      ;
      uVar1 = *(uint *)((int)this + 4);
    }
    *(uint *)((int)this + 4) = uVar1 - 1;
    uVar1 = CONCAT31((int3)(uVar1 - 1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}


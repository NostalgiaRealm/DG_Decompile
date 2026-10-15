/*
 * FUN_1009383f at 1009383f
 * undefined4 __thiscall FUN_1009383f(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1009383f-1009389a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1009383f(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_8;
  
  uVar1 = 0x88760868;
  if (*(char *)((int)this + 0x669d) == '\0') {
    uStack_8 = this;
    FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0xe0))
                      (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x14),param_2,
                       param_3,param_4);
    FUN_10003e89((char *)((int)&uStack_8 + 3));
  }
  return uVar1;
}


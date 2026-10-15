/*
 * FUN_10013af7 at 10013af7
 * undefined4 __thiscall FUN_10013af7(void * this, undefined4 * param_1)
 * Address ranges: 10013af7-10013b4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10013af7(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uStack_8;
  
  uVar1 = 0x8876086c;
  if (param_1 != (undefined4 *)0x0) {
    uStack_8 = this;
    FUN_10003e40((void *)((int)&uStack_8 + 3),
                 (byte)(*(uint *)(*(int *)((int)this + 0x2c) + 0xdd0) >> 2) & 1);
    FUN_10003582(*(void **)(*(int *)((int)this + 0x2c) + 0xd90),*(int *)((int)this + 0xa4),param_1);
    uVar1 = 0;
    FUN_10003e89((char *)((int)&uStack_8 + 3));
  }
  return uVar1;
}


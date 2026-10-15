/*
 * FUN_100091df at 100091df
 * undefined4 __thiscall FUN_100091df(void * this, undefined4 * param_1)
 * Address ranges: 100091df-1000924c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100091df(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = param_1;
  uVar3 = 0x8876086c;
  iVar1 = **(int **)((int)this + 0xad0);
  if (param_1 != (undefined4 *)0x0) {
    FUN_10003838((void *)((int)&param_1 + 3),
                 (byte)(*(uint *)(*(int *)(iVar1 + 0x2c) + 0xb0c) >> 2) & 1);
    FUN_10003167(*(void **)(*(int *)(iVar1 + 0x2c) + 0xacc),*(int *)(iVar1 + 0xa4),puVar2);
    uVar3 = 0;
    FUN_10003881((char *)((int)&param_1 + 3));
    *(undefined4 *)((int)this + 0xb1c) = puVar2[3];
  }
  return uVar3;
}


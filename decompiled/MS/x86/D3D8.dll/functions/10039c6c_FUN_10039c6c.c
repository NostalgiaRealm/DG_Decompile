/*
 * FUN_10039c6c at 10039c6c
 * undefined4 * __thiscall FUN_10039c6c(void * this, undefined4 param_1, int param_2, undefined4 * param_3)
 * Address ranges: 10039c6c-10039ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10039c6c(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100401c7(*(undefined4 *)((int)this + 0xd9b4),*(undefined4 *)((int)this + 0x10),
                        param_3,param_1,param_2,*(undefined4 *)((int)this + 0x7c),
                        *(undefined1 *)((int)this + 0x86));
  puVar2 = puVar1 + 6;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}


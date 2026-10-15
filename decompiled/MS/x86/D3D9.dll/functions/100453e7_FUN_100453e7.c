/*
 * FUN_100453e7 at 100453e7
 * undefined4 * __thiscall FUN_100453e7(void * this, undefined4 param_1, int param_2)
 * Address ranges: 100453e7-1004541c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100453e7(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1004df9d(*(undefined4 *)((int)this + 0xf6b4),*(uint *)((int)this + 0x10),this,param_1
                        ,param_2,*(undefined4 *)((int)this + 0x7c),*(undefined1 *)((int)this + 0x86)
                       );
  puVar2 = puVar1 + 6;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}


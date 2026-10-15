/*
 * FUN_100145ec at 100145ec
 * undefined4 * __thiscall FUN_100145ec(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100145ec-10014658
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100145ec(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_1005c755(0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 0x134);
    puVar3[1] = *(undefined4 *)((int)this + 0x130);
    puVar3[4] = uVar1;
    puVar3[5] = param_1;
    *puVar3 = &PTR_FUN_1005e9c0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = param_2;
    bVar2 = FUN_10019845((int)puVar3);
    if (bVar2 != 0) {
      return puVar3;
    }
    FUN_1001982f(puVar3);
    FUN_1005c76c(puVar3);
  }
  return (undefined4 *)0x0;
}


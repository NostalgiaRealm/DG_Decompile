/*
 * FUN_1002eac7 at 1002eac7
 * undefined4 * __thiscall FUN_1002eac7(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1002eac7-1002eb34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002eac7(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_100cfd55(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x14c);
    puVar1[1] = *(undefined4 *)((int)this + 0x148);
    puVar1[5] = uVar2;
    puVar1[6] = param_1;
    *puVar1 = &PTR_FUN_100d5538;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = param_2;
    uVar2 = FUN_10036c41((int)puVar1);
    if ((char)uVar2 == '\0') {
      FUN_10036c2b(puVar1);
      FUN_100cfd6c(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}


/*
 * FUN_100271c0 at 100271c0
 * undefined4 * __thiscall FUN_100271c0(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100271c0-1002722d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100271c0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_100ad475(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x14c);
    puVar1[1] = *(undefined4 *)((int)this + 0x148);
    puVar1[5] = uVar2;
    puVar1[6] = param_1;
    *puVar1 = &PTR_FUN_100b2004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = param_2;
    uVar2 = FUN_1002d4bc((int)puVar1);
    if ((char)uVar2 == '\0') {
      FUN_1002d4a6(puVar1);
      FUN_100ad48c(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}


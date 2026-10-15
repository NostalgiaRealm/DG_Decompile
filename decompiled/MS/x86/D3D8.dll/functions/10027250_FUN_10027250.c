/*
 * FUN_10027250 at 10027250
 * undefined4 * __thiscall FUN_10027250(void * this, undefined4 param_1, undefined4 param_2, undefined1 param_3)
 * Address ranges: 10027250-100272c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10027250(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_100ad475(0x24);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x14c);
    puVar3[1] = *(undefined4 *)((int)this + 0x148);
    puVar3[5] = param_1;
    puVar3[7] = param_2;
    puVar3[2] = uVar1;
    *puVar3 = &PTR_FUN_100b1fd4;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 8) = param_3;
    bVar2 = FUN_1002d34d((int)puVar3);
    if (bVar2 == 0) {
      FUN_1002d28f(puVar3);
      FUN_100ad48c(puVar3);
      puVar3 = (undefined4 *)0x0;
    }
  }
  return puVar3;
}


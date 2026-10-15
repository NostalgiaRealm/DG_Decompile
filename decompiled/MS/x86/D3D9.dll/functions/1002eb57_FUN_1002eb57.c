/*
 * FUN_1002eb57 at 1002eb57
 * undefined4 * __thiscall FUN_1002eb57(void * this, undefined4 param_1, undefined4 param_2, undefined1 param_3)
 * Address ranges: 1002eb57-1002ebca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1002eb57(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_100cfd55(0x24);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x14c);
    puVar3[1] = *(undefined4 *)((int)this + 0x148);
    puVar3[5] = param_1;
    puVar3[7] = param_2;
    puVar3[2] = uVar1;
    *puVar3 = &PTR_FUN_100d54e0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 8) = param_3;
    bVar2 = FUN_100369e2((int)puVar3);
    if (bVar2 == 0) {
      FUN_10036924(puVar3);
      FUN_100cfd6c(puVar3);
      puVar3 = (undefined4 *)0x0;
    }
  }
  return puVar3;
}


/*
 * FUN_1001af83 at 1001af83
 * undefined4 * __thiscall FUN_1001af83(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1001af83-1001b011
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001af83(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_1005c755(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0xd0);
    puVar1[3] = *(undefined4 *)((int)this + 0xcc);
    puVar1[5] = uVar2;
    puVar1[6] = param_1;
    puVar1[2] = this;
    puVar1[4] = 0;
    puVar1[7] = param_2;
    puVar1[8] = 0xffffffff;
    *(undefined2 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &PTR_FUN_1005ed50;
    puVar1[1] = &PTR_LAB_1005ebf8;
    uVar2 = FUN_1001b0cf((int)(puVar1 + 1));
    if ((char)uVar2 == '\0') {
      FUN_10027d19(puVar1);
      FUN_1005c76c(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}


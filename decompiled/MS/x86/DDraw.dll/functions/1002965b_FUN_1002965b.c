/*
 * FUN_1002965b at 1002965b
 * undefined __thiscall FUN_1002965b(void * this, undefined4 * param_1)
 * Address ranges: 1002965b-10029694
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002965b(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((*(uint *)((int)this + 0x10) & 0x400) == 0) {
    uVar2 = 0;
    do {
      param_1[uVar2] = *(uint *)((int)this + uVar2 * 4 + 0x14) | 0xff000000;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    puVar3 = (undefined4 *)((int)this + 0x14);
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


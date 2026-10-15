/*
 * FUN_10028f7b at 10028f7b
 * undefined4 * __thiscall FUN_10028f7b(void * this, undefined4 param_1)
 * Address ranges: 10028f7b-10029005
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10028f7b(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_1001b238(this,param_1);
  *(undefined4 *)((int)this + 0x138) = param_1;
  *(undefined ***)this = &PTR_grCheckForRoom_10053d88;
  iVar2 = 3;
  puVar3 = (undefined4 *)((int)this + 0x1c0);
  do {
    puVar4 = puVar3;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 0x41;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  FUN_100501d1((int *)((int)this + 0x13c),0,0x30c);
  FUN_100501d1((int *)((int)this + 0x448),0,0x5c);
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  return this;
}


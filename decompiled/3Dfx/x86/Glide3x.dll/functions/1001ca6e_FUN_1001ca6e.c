/*
 * FUN_1001ca6e at 1001ca6e
 * undefined4 * __thiscall FUN_1001ca6e(void * this, undefined4 param_1)
 * Address ranges: 1001ca6e-1001caf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001ca6e(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_1000f3ac(this,param_1);
  *(undefined4 *)((int)this + 0x138) = param_1;
  *(undefined ***)this = &PTR_grErrorSetCallback_10055e9c;
  iVar2 = 7;
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
  *(undefined4 *)((int)this + 0x8cc) = 0;
  *(undefined4 *)((int)this + 0x8d0) = 0;
  FUN_10052de1((int *)((int)this + 0x13c),0,0x71c);
  FUN_10052de1((int *)((int)this + 0x858),0,0x5c);
  *(undefined4 *)((int)this + 0x8b4) = 0;
  *(undefined4 *)((int)this + 0x8b8) = 0;
  *(undefined4 *)((int)this + 0x8bc) = 0;
  *(undefined4 *)((int)this + 0x8c0) = 0;
  *(undefined4 *)((int)this + 0x8c4) = 0;
  *(undefined4 *)((int)this + 0x8c8) = 0;
  return this;
}


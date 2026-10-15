/*
 * FUN_10012d52 at 10012d52
 * undefined4 * __thiscall FUN_10012d52(void * this, int param_1, int * param_2, undefined4 * param_3, undefined4 param_4)
 * Address ranges: 10012d52-10012e1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10012d52(void *this,int param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0xd90);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar2 = iVar1 + 4;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *(int *)((int)this + 4) = iVar2;
  *(undefined4 *)((int)this + 0x24) = 1;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined2 *)((int)this + 0xd4) = 0;
  *(int *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0xcc) = param_4;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_100d4c78;
  *(undefined ***)((int)this + 0x28) = &PTR_FUN_100d4c54;
  *(int **)((int)this + 0x44) = param_2;
  puVar3 = (undefined4 *)((int)this + 0x48);
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  iVar2 = (**(code **)(*param_2 + 0x1c))();
  *(bool *)((int)this + 0x25) = iVar2 == 1;
  return this;
}


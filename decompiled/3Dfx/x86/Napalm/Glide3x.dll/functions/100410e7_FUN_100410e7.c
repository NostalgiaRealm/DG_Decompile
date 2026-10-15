/*
 * FUN_100410e7 at 100410e7
 * undefined4 * __thiscall FUN_100410e7(void * this, undefined4 param_1)
 * Address ranges: 100410e7-10041183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100410e7(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_10049628(this,param_1,&PTR_s_DGD3D12ROOT_1005f5b8);
  iVar3 = 0x10;
  puVar1 = (undefined4 *)((int)this + 0x520);
  iVar2 = iVar3;
  do {
    *puVar1 = 0;
    puVar1[2] = 0xc000;
    puVar1[4] = 0;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 6;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x6a0) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 *)((int)this + 0x51c) = 0;
  iVar2 = (int)this + 0x6c0;
  *(void **)((int)this + 0x510) = this;
  *(undefined ***)this = &PTR_LAB_1005a90c;
  *(undefined ***)((int)this + 0x508) = &PTR_FUN_1005a9e8;
  *(undefined ***)((int)this + 0x50c) = &PTR_FUN_1005a954;
  do {
    FUN_10040079(iVar2);
    iVar2 = iVar2 + 0x16c0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = FUN_1003f0ab();
  *(undefined4 **)((int)this + 0x172c0) = puVar1;
  return this;
}


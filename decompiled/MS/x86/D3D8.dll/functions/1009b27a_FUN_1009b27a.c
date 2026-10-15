/*
 * FUN_1009b27a at 1009b27a
 * undefined4 * __thiscall FUN_1009b27a(void * this, undefined4 param_1)
 * Address ranges: 1009b27a-1009b316
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1009b27a(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_10095ed1(this,param_1,&PTR_s_DGD3D12ROOT_100b8fc8);
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
  *(undefined ***)this = &PTR_LAB_100b5130;
  *(undefined ***)((int)this + 0x508) = &PTR_FUN_100b520c;
  *(undefined ***)((int)this + 0x50c) = &PTR_FUN_100b5178;
  do {
    FUN_100a3b4a(iVar2);
    iVar2 = iVar2 + 0x16c0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = FUN_1009e78a();
  *(undefined4 **)((int)this + 0x172c0) = puVar1;
  return this;
}


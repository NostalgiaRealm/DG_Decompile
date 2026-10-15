/*
 * FUN_100097d6 at 100097d6
 * undefined4 * __thiscall FUN_100097d6(void * this, undefined4 param_1)
 * Address ranges: 100097d6-10009967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100097d6(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_1000e8e2(this,param_1,(int)this + 0x3940,(int)this + 0x42e8,(int)this + 0x4668,
               (int)this + 0x768c,(int)this + 0xa6b0);
  *(undefined4 *)((int)this + 0x3684) = param_1;
  *(undefined ***)this = &PTR_FUN_1005898c;
  *(undefined ***)((int)this + 0x2b10) = &PTR_FUN_10058bac;
  *(undefined4 *)((int)this + 0x3680) = 0;
  *(undefined4 *)((int)this + 0x3688) = 0;
  *(undefined4 *)((int)this + 0x368c) = 0;
  *(undefined4 *)((int)this + 0x3690) = 0;
  *(undefined4 *)((int)this + 0x3694) = 0;
  *(undefined4 *)((int)this + 0x3698) = 0;
  *(undefined4 *)((int)this + 0x369c) = 0;
  *(undefined4 *)((int)this + 0x36a0) = 0;
  *(undefined4 *)((int)this + 0x36a4) = 0;
  *(undefined4 *)((int)this + 0x36a8) = 0;
  *(undefined4 *)((int)this + 0x36ac) = 0;
  *(undefined4 *)((int)this + 14000) = 0;
  *(undefined4 *)((int)this + 0x36b4) = 0;
  *(undefined4 *)((int)this + 0x36b8) = 0xffffffff;
  FUN_10010686((undefined4 *)((int)this + 0x3940),this);
  *(undefined4 *)((int)this + 0x3940) = &PTR_grErrorSetCallback_100591a4;
  *(void **)((int)this + 0x3a78) = this;
  iVar2 = 7;
  puVar3 = (undefined4 *)((int)this + 0x3b04);
  do {
    puVar4 = puVar3;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 0x48;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x42e0) = 0;
  *(undefined4 *)((int)this + 0x42e4) = 0;
  FUN_100561f1((int *)((int)this + 0x4260),0,0x74);
  *(undefined4 *)((int)this + 0x42d4) = 0;
  *(undefined4 *)((int)this + 0x42d8) = 0;
  *(undefined4 *)((int)this + 0x42dc) = 0;
  FUN_1001c786((void *)((int)this + 0x42e8),(int)this);
  FUN_1001c1d9((void *)((int)this + 0x4668),this,(int)this + 12000,0);
  FUN_1001c1d9((void *)((int)this + 0x768c),this,(int)this + 0x3130,1);
  FUN_1001c1d9((void *)((int)this + 0xa6b0),this,(int)this + 0x3380,2);
  *(void **)((int)this + 55000) = (void *)((int)this + 0x768c);
  *(undefined4 *)((int)this + 0xd6e0) = 0;
  *(undefined4 *)((int)this + 0xd6e4) = 0;
  *(undefined4 *)((int)this + 0xd6e8) = 0;
  *(undefined4 *)((int)this + 0xd6ec) = 0;
  *(void **)((int)this + 0xd6dc) = (void *)((int)this + 0xa6b0);
  *(int *)((int)this + 0xd6d4) = (int)this + 0x4668;
  return this;
}


/*
 * FUN_10006aae at 10006aae
 * undefined4 * __thiscall FUN_10006aae(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 * param_8)
 * Address ranges: 10006aae-10006d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10006aae(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_1001772e(this,DAT_100dea74,(undefined4 *)(-(uint)(param_1 != 0) & param_1 + 0xcU),this,this,
               param_5,param_6);
  *(undefined ***)this = &PTR_FUN_100d1548;
  *(undefined4 *)((int)this + 0xd94) = 0;
  *(undefined4 *)((int)this + 0xd98) = 0;
  *(undefined4 *)((int)this + 0xd9c) = 0;
  *(undefined4 *)((int)this + 0xda0) = 0;
  *(undefined4 *)((int)this + 0xda4) = 0;
  *(undefined4 *)((int)this + 0xda8) = 0;
  *(undefined4 *)((int)this + 0xdac) = 0;
  *(undefined4 *)((int)this + 0xdb0) = 0;
  *(undefined4 *)((int)this + 0xdb4) = 0;
  *(int *)((int)this + 0xd90) = param_1;
  *(undefined4 *)((int)this + 0xdc4) = param_2;
  *(undefined4 *)((int)this + 0xdc8) = param_3;
  *(undefined4 *)((int)this + 0xdcc) = param_4;
  *(undefined4 *)((int)this + 0xdd0) = *param_8;
  *(undefined4 *)((int)this + 0xdd4) = param_8[1];
  *(undefined4 *)((int)this + 0xdd8) = param_8[2];
  *(undefined4 *)((int)this + 0xddc) = param_8[3];
  *(undefined4 *)((int)this + 0xde0) = 0;
  *(undefined4 *)((int)this + 0xde4) = 0;
  *(undefined4 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xdec) = 0;
  *(undefined4 *)((int)this + 0xdf0) = 0;
  *(undefined4 *)((int)this + 0xdf4) = 0;
  *(undefined4 *)((int)this + 0xdf8) = 0;
  *(undefined4 *)((int)this + 0xdfc) = 0;
  *(undefined4 *)((int)this + 0xe00) = 0;
  *(undefined4 *)((int)this + 0xe04) = 0;
  *(undefined4 *)((int)this + 0xe08) = 0;
  *(undefined4 *)((int)this + 0xe0c) = 0;
  *(undefined4 *)((int)this + 0xe10) = 0;
  *(undefined4 *)((int)this + 0xe14) = 0;
  *(undefined4 *)((int)this + 0xe18) = 0;
  *(undefined4 *)((int)this + 0xe1c) = 0;
  *(undefined4 *)((int)this + 0xe20) = 0;
  *(undefined4 *)((int)this + 0xe24) = 0;
  *(undefined4 *)((int)this + 0xe28) = 0;
  *(undefined4 *)((int)this + 0xe2c) = 0;
  *(undefined4 *)((int)this + 0xe30) = 0;
  *(undefined4 *)((int)this + 0xe34) = 0;
  *(undefined4 *)((int)this + 0xe38) = 0;
  *(undefined4 *)((int)this + 0xe3c) = 0;
  *(undefined4 *)((int)this + 0xe40) = 0;
  *(undefined4 *)((int)this + 0xe44) = 0;
  *(undefined4 *)((int)this + 0xe48) = 0;
  *(undefined4 *)((int)this + 0xe4c) = 0;
  *(undefined4 *)((int)this + 0xe50) = 0;
  *(undefined4 *)((int)this + 0xe54) = 0;
  *(undefined4 *)((int)this + 0x658c) = 0;
  *(undefined4 *)((int)this + 0x6650) = 0;
  *(undefined4 *)((int)this + 0x6654) = 0xffffffff;
  *(undefined4 *)((int)this + 0x6658) = 0;
  *(undefined4 *)((int)this + 0x665c) = 0;
  *(undefined4 *)((int)this + 0x6660) = 0;
  *(undefined4 *)((int)this + 0x6664) = 0;
  *(undefined4 *)((int)this + 0x6668) = 0;
  *(undefined4 *)((int)this + 0x666c) = 0;
  *(undefined4 *)((int)this + 0x6670) = 0;
  *(undefined4 *)((int)this + 0x6674) = 0xffff;
  *(undefined4 *)((int)this + 0x667c) = 0xffff;
  *(undefined4 *)((int)this + 0x6680) = 0x1f;
  *(undefined4 *)((int)this + 0x6688) = 0x1f;
  *(undefined4 *)((int)this + 0x668c) = 0xffff;
  *(undefined4 *)((int)this + 0x6678) = 0;
  *(undefined4 *)((int)this + 0x6684) = 0;
  *(undefined4 *)((int)this + 0x6698) = 0;
  *(undefined4 *)((int)this + 0x6694) = 0;
  *(undefined4 *)((int)this + 0x6690) = 0;
  *(undefined1 *)((int)this + 0x66a0) = 0;
  *(undefined4 *)((int)this + 0x669c) = 0x10001;
  puVar2 = (undefined4 *)((int)this + 0xda0);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_100cfed0((int *)((int)this + 26000),0,0x40);
  FUN_100cfed0((int *)((int)this + 0x65d0),0,0x40);
  FUN_100cfed0((int *)((int)this + 0x6610),0,0x40);
  FUN_100cfed0((int *)((int)this + 0x12ac),0,0x4000);
  FUN_100cfed0((int *)((int)this + 0x52ac),0,0xe00);
  FUN_100cfed0((int *)((int)this + 0x1258),0,0x40);
  puVar2 = (undefined4 *)((int)this + 0xe58);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return this;
}


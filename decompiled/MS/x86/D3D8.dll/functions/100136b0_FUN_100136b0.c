/*
 * FUN_100136b0 at 100136b0
 * undefined4 * __thiscall FUN_100136b0(void * this, undefined4 param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100136b0-100138da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100136b0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined ***)this = &PTR_FUN_100b19ac;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0x1000000;
  *(undefined1 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  uVar1 = FUN_100ad4a9(0xc00);
  *(undefined4 *)((int)this + 0x168) = uVar1;
  *(undefined4 *)((int)this + 0x16c) = 0x10;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x20c) = 7;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined1 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x9d4) = 0;
  *(undefined4 *)((int)this + 0x9d8) = 0;
  *(undefined1 *)((int)this + 0x9dc) = 0;
  puVar3 = (undefined4 *)((int)this + 0x9e0);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)((int)this + 0xa00) = 0;
  *(undefined4 *)((int)this + 0xa04) = 0xff;
  *(undefined4 *)((int)this + 0xa08) = 0xff;
  *(undefined1 *)((int)this + 0xa02) = 1;
  puVar3 = (undefined4 *)((int)this + 0xa0c);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_100ad4a9(0x6000);
  *(undefined4 *)((int)this + 0xa30) = uVar1;
  *(undefined4 *)((int)this + 0xa34) = 0x80;
  *(undefined4 *)((int)this + 0xa38) = 0;
  *(undefined1 *)((int)this + 0xa3c) = 1;
  FUN_10021331((int *)((int)this + 0xa54));
  *(undefined4 *)((int)this + 0xa94) = 0;
  *(int *)((int)this + 0xab0) = (int)this + 0x31c;
  *(int *)((int)this + 0xab4) = (int)this + 800;
  *(undefined4 *)((int)this + 0xa98) = 0;
  *(undefined4 *)((int)this + 0xa9c) = 0;
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0;
  *(undefined4 *)((int)this + 0xaac) = 0;
  *(int *)((int)this + 0xab8) = (int)this + 0x324;
  *(undefined4 *)((int)this + 0xabc) = 0;
  *(undefined2 *)((int)this + 0xac9) = 0;
  *(undefined1 *)((int)this + 0xacb) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_1005d293((int *)((int)this + 0x44));
  *(undefined4 *)((int)this + 0x9c4) = 0;
  *(undefined4 *)((int)this + 0x9c8) = 0;
  *(undefined4 *)((int)this + 0x9cc) = 0;
  *(undefined4 *)((int)this + 0x9d0) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xa40) = *param_2;
  *(undefined4 *)((int)this + 0xa44) = param_2[1];
  *(undefined4 *)((int)this + 0xa48) = param_2[2];
  *(undefined4 *)((int)this + 0xa4c) = param_2[3];
  *(undefined4 *)((int)this + 0xa50) = param_2[4];
  FUN_1001489d(this,param_5,param_6);
  return this;
}


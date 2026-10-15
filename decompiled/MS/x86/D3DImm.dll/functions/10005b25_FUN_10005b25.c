/*
 * FUN_10005b25 at 10005b25
 * undefined4 * __thiscall FUN_10005b25(void * this, undefined4 param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 10005b25-10005d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10005b25(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined ***)this = &PTR_FUN_1005d2f8;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0x1000000;
  *(undefined1 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  uVar1 = FUN_1005c789(0xc00);
  *(undefined4 *)((int)this + 0x16c) = uVar1;
  *(undefined4 *)((int)this + 0x170) = 0x10;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x210) = 7;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined1 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x904) = 0;
  *(undefined4 *)((int)this + 0x908) = 0;
  *(undefined1 *)((int)this + 0x90c) = 0;
  puVar3 = (undefined4 *)((int)this + 0x910);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)((int)this + 0x930) = 0;
  *(undefined1 *)((int)this + 0x932) = 1;
  *(undefined4 *)((int)this + 0x934) = 0xff;
  *(undefined4 *)((int)this + 0x938) = 0xff;
  *(undefined4 *)((int)this + 0x93c) = 0;
  uVar1 = FUN_1005c789(0x6000);
  *(undefined4 *)((int)this + 0x940) = uVar1;
  *(undefined4 *)((int)this + 0x944) = 0x80;
  *(undefined4 *)((int)this + 0x948) = 0;
  *(undefined1 *)((int)this + 0x94c) = param_7;
  FUN_10013705((int *)((int)this + 0x964));
  *(undefined4 *)((int)this + 0x9a4) = 0;
  *(int *)((int)this + 0x9c0) = (int)this + 800;
  *(int *)((int)this + 0x9c4) = (int)this + 0x324;
  *(undefined4 *)((int)this + 0x9a8) = 0;
  *(undefined4 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  *(undefined4 *)((int)this + 0x9b4) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0;
  *(undefined4 *)((int)this + 0x9bc) = 0;
  *(int *)((int)this + 0x9c8) = (int)this + 0x328;
  *(undefined4 *)((int)this + 0x9cc) = 0;
  *(undefined2 *)((int)this + 0x9d9) = 0;
  *(undefined1 *)((int)this + 0x9db) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_1003c306((int *)((int)this + 0x44));
  *(undefined4 *)((int)this + 0x8f4) = 0;
  *(undefined4 *)((int)this + 0x8f8) = 0;
  *(undefined4 *)((int)this + 0x8fc) = 0;
  *(undefined4 *)((int)this + 0x900) = 0;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x950) = *param_2;
  *(undefined4 *)((int)this + 0x954) = param_2[1];
  *(undefined4 *)((int)this + 0x958) = param_2[2];
  *(undefined4 *)((int)this + 0x95c) = param_2[3];
  *(undefined4 *)((int)this + 0x960) = param_2[4];
  *(undefined4 *)((int)this + 0x34) = param_5;
  *(undefined4 *)((int)this + 0x38) = param_6;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  return this;
}


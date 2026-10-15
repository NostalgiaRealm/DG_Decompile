/*
 * FUN_1000eaa3 at 1000eaa3
 * undefined __thiscall FUN_1000eaa3(void * this, undefined4 param_1, int param_2, undefined4 param_3)
 * Address ranges: 1000eaa3-1000ed60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000eaa3(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_100561f1((int *)((int)this + 0x2dc8),0,0x888);
  fVar2 = (float)*(int *)((int)this + 0x98);
  if (*(int *)((int)this + 0x98) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2dc0) = fVar2;
  fVar2 = (float)*(int *)((int)this + 0x9c);
  if (*(int *)((int)this + 0x9c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(undefined4 *)((int)this + 0x2b14) = param_1;
  iVar3 = 0;
  *(float *)((int)this + 0x2dc4) = fVar2;
  *(undefined4 *)((int)this + 0x3670) = param_3;
  *(undefined4 *)((int)this + 0x2d08) = 1;
  *(undefined4 *)((int)this + 0x2d0c) = 0;
  *(undefined1 *)((int)this + 0x2da8) = 1;
  *(undefined1 *)((int)this + 0x2da9) = 1;
  *(undefined1 *)((int)this + 0x2daa) = 1;
  *(undefined1 *)((int)this + 0x2dac) = 1;
  *(undefined1 *)((int)this + 0x2dab) = 1;
  *(undefined1 *)((int)this + 0x2dad) = 1;
  *(undefined1 *)((int)this + 0x2dae) = 1;
  *(undefined1 *)((int)this + 0x2daf) = 1;
  *(undefined1 *)((int)this + 0x2db0) = 1;
  *(undefined1 *)((int)this + 0x2db1) = 0;
  *(undefined4 *)((int)this + 0x2c10) = 0;
  *(undefined4 *)((int)this + 0x2c14) = 0;
  *(undefined4 *)((int)this + 0x2c18) = 0;
  *(undefined4 *)((int)this + 0x2c1c) = 0;
  *(undefined4 *)((int)this + 0x2c5c) = 0xffffffff;
  do {
    *(undefined1 *)((int)this + iVar3 + 0x3653) = 0;
    iVar1 = *(int *)(param_2 + 0x33);
    *(undefined1 *)((int)this + iVar3 + 0x3659) = 0;
    *(bool *)((int)this + iVar3 + 0x3656) = iVar3 < iVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  *(undefined4 *)((int)this + 0x2c20) = 0;
  *(uint *)((int)this + 0x2e6c) = (uint)(byte)(&DAT_10058f20)[*(int *)((int)this + 0xd4)];
  *(undefined4 *)((int)this + 0x2c24) = 1;
  *(undefined4 *)((int)this + 0x2c28) = 1;
  *(undefined4 *)((int)this + 0x2c2c) = 0;
  *(undefined2 *)((int)this + 0x2c30) = 0xffff;
  *(undefined4 *)((int)this + 0x2c38) = 1;
  *(undefined4 *)((int)this + 0x2c34) = 1;
  *(undefined4 *)((int)this + 0x2c3c) = 1;
  *(undefined4 *)((int)this + 0x2c40) = 1;
  *(undefined4 *)((int)this + 0x2c48) = 1;
  *(undefined4 *)((int)this + 0x2c44) = 1;
  *(undefined4 *)((int)this + 0x2c4c) = 1;
  *(undefined4 *)((int)this + 0x2c50) = 1;
  *(undefined4 *)((int)this + 0x2c58) = 0;
  *(undefined4 *)((int)this + 0x2c54) = 0;
  FUN_100561f1((int *)((int)this + 0x2c60),0,0x40);
  *(undefined4 *)((int)this + 0x2cb0) = 0;
  *(undefined1 *)((int)this + 0x2c9c) = 0xf;
  *(undefined4 *)((int)this + 0x2cb4) = 0;
  *(undefined4 *)((int)this + 0x2cc8) = 0;
  *(undefined4 *)((int)this + 0x2ca4) = 1;
  *(undefined4 *)((int)this + 0x2ca8) = 1;
  *(undefined4 *)((int)this + 0x2ca0) = 3;
  *(undefined4 *)((int)this + 0x2cac) = 0;
  *(undefined4 *)((int)this + 0x2cb8) = 0;
  *(undefined4 *)((int)this + 0x2cbc) = 0;
  *(undefined4 *)((int)this + 0x2cc0) = 0;
  *(undefined4 *)((int)this + 0x2cc4) = 0;
  *(undefined4 *)((int)this + 0x2ccc) = 0;
  fVar2 = (float)*(int *)((int)this + 0xa0);
  if (*(int *)((int)this + 0xa0) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2cd0) = fVar2;
  fVar2 = (float)*(int *)((int)this + 0xa4);
  if (*(int *)((int)this + 0xa4) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2cd4) = fVar2;
  *(undefined4 *)((int)this + 0x2cd8) = 0;
  *(int *)((int)this + 0x2d00) = *(int *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x2cdc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2cf8) = 0;
  *(undefined4 *)((int)this + 0x2cfc) = 0;
  *(int *)((int)this + 0x2d04) = *(int *)((int)this + 0x9c);
  FUN_100088eb(this,0,0,*(int *)((int)this + 0x98),*(int *)((int)this + 0x9c));
  *(undefined4 *)((int)this + 0x2cf0) = 0;
  *(undefined4 *)((int)this + 0x2cf4) = 0x3f800000;
  SetRect((LPRECT)((int)this + 0x2b3c),0,0,*(int *)((int)this + 0x98),*(int *)((int)this + 0x9c));
  FUN_10009517((undefined4 *)((int)this + 0x1f10));
  puVar4 = (undefined4 *)((int)this + 0x1f10);
  puVar5 = (undefined4 *)((int)this + 0x1310);
  for (iVar3 = 0x300; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


/*
 * FUN_1001d3ec at 1001d3ec
 * undefined __thiscall FUN_1001d3ec(void * this, undefined4 param_1, int param_2, undefined4 param_3)
 * Address ranges: 1001d3ec-1001d669
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d3ec(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  int xRight;
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_100501d1((int *)((int)this + 0x2bd8),0,0x578);
  fVar1 = (float)*(int *)((int)this + 0x98);
  if (*(int *)((int)this + 0x98) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2bd0) = fVar1;
  fVar1 = (float)*(int *)((int)this + 0x9c);
  if (*(int *)((int)this + 0x9c) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(undefined4 *)((int)this + 0x295c) = param_1;
  *(undefined4 *)((int)this + 0x3170) = param_3;
  *(float *)((int)this + 0x2bd4) = fVar1;
  *(undefined4 *)((int)this + 0x2b28) = 1;
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x2b2c) = 0;
  *(undefined4 *)((int)this + 0x2bc0) = 0x1010101;
  *(undefined4 *)((int)this + 0x2bc4) = 0x1010101;
  *(undefined2 *)((int)this + 0x2bc8) = 1;
  *(undefined4 *)((int)this + 0x2a30) = 0;
  *(undefined4 *)((int)this + 0x2a34) = 0;
  *(undefined4 *)((int)this + 0x2a38) = 0;
  *(undefined4 *)((int)this + 0x2a3c) = 0;
  *(undefined4 *)((int)this + 0x2a7c) = 0xffffffff;
  do {
    *(undefined1 *)((int)this + iVar2 + 0x3153) = 0;
    *(bool *)((int)this + iVar2 + 0x3156) = iVar2 < *(int *)(param_2 + 0x33);
    *(undefined1 *)((int)this + iVar2 + 0x3159) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *(undefined4 *)((int)this + 0x2a40) = 0;
  *(undefined4 *)((int)this + 0x2a4c) = 0;
  *(undefined4 *)((int)this + 0x2a78) = 0;
  *(undefined4 *)((int)this + 0x2a44) = 1;
  *(undefined4 *)((int)this + 0x2a48) = 1;
  *(undefined2 *)((int)this + 0x2a50) = 0xffff;
  *(undefined4 *)((int)this + 0x2a58) = 1;
  *(undefined4 *)((int)this + 0x2a54) = 1;
  *(undefined4 *)((int)this + 0x2a5c) = 1;
  *(undefined4 *)((int)this + 0x2a60) = 1;
  *(undefined4 *)((int)this + 0x2a68) = 1;
  *(undefined4 *)((int)this + 0x2a64) = 1;
  *(undefined4 *)((int)this + 0x2a6c) = 1;
  *(undefined4 *)((int)this + 0x2a70) = 1;
  *(undefined4 *)((int)this + 0x2a74) = 1;
  FUN_100501d1((int *)((int)this + 0x2a80),0,0x40);
  *(undefined4 *)((int)this + 0x2ac4) = 1;
  *(undefined4 *)((int)this + 0x2ac8) = 1;
  *(undefined1 *)((int)this + 0x2abc) = 0xf;
  *(undefined4 *)((int)this + 0x2ac0) = 3;
  *(undefined4 *)((int)this + 0x2acc) = 0;
  *(undefined4 *)((int)this + 0x2ad8) = 0;
  *(undefined4 *)((int)this + 0x2adc) = 0;
  *(undefined4 *)((int)this + 0x2ae0) = 0;
  *(undefined4 *)((int)this + 0x2ae4) = 0;
  *(undefined4 *)((int)this + 0x2ad0) = 0;
  *(undefined4 *)((int)this + 0x2ad4) = 0;
  *(undefined4 *)((int)this + 0x2ae8) = 0;
  *(undefined4 *)((int)this + 0x2aec) = 0;
  fVar1 = (float)*(int *)((int)this + 0xa0);
  if (*(int *)((int)this + 0xa0) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2af0) = fVar1;
  fVar1 = (float)*(int *)((int)this + 0xa4);
  if (*(int *)((int)this + 0xa4) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar2 = *(int *)((int)this + 0x9c);
  xRight = *(int *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x2b18) = 0;
  *(undefined4 *)((int)this + 0x2b1c) = 0;
  *(float *)((int)this + 0x2af4) = fVar1;
  *(undefined4 *)((int)this + 11000) = 0;
  *(int *)((int)this + 0x2b24) = iVar2;
  *(undefined4 *)((int)this + 0x2afc) = 0x3f800000;
  puVar4 = (undefined4 *)((int)this + 0x2ae8);
  puVar5 = (undefined4 *)((int)this + 0x2b00);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(int *)((int)this + 0x2b20) = xRight;
  SetRect((LPRECT)((int)this + 0x2984),0,0,xRight,iVar2);
  FUN_10019df7((undefined4 *)((int)this + 0x1d58));
  puVar4 = (undefined4 *)((int)this + 0x1d58);
  puVar5 = (undefined4 *)((int)this + 0x1158);
  for (iVar2 = 0x300; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


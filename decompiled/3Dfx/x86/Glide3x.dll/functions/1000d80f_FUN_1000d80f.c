/*
 * FUN_1000d80f at 1000d80f
 * undefined __thiscall FUN_1000d80f(void * this, undefined4 param_1, int param_2, undefined4 param_3)
 * Address ranges: 1000d80f-1000dab9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000d80f(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_10052de1((int *)((int)this + 0x2c78),0,0x658);
  fVar2 = (float)*(int *)((int)this + 0x98);
  if (*(int *)((int)this + 0x98) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2c70) = fVar2;
  fVar2 = (float)*(int *)((int)this + 0x9c);
  if (*(int *)((int)this + 0x9c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(undefined4 *)((int)this + 0x29d8) = param_1;
  iVar3 = 0;
  *(float *)((int)this + 0x2c74) = fVar2;
  *(undefined4 *)((int)this + 0x32f0) = param_3;
  *(undefined4 *)((int)this + 0x2bc8) = 1;
  *(undefined4 *)((int)this + 0x2bcc) = 0;
  *(undefined1 *)((int)this + 0x2c60) = 1;
  *(undefined1 *)((int)this + 0x2c61) = 1;
  *(undefined1 *)((int)this + 0x2c62) = 1;
  *(undefined1 *)((int)this + 0x2c64) = 1;
  *(undefined1 *)((int)this + 0x2c63) = 1;
  *(undefined1 *)((int)this + 0x2c65) = 1;
  *(undefined1 *)((int)this + 0x2c66) = 1;
  *(undefined1 *)((int)this + 0x2c67) = 1;
  *(undefined1 *)((int)this + 0x2c68) = 1;
  *(undefined1 *)((int)this + 0x2c69) = 0;
  *(undefined4 *)((int)this + 0x2ad0) = 0;
  *(undefined4 *)((int)this + 0x2ad4) = 0;
  *(undefined4 *)((int)this + 0x2ad8) = 0;
  *(undefined4 *)((int)this + 0x2adc) = 0;
  *(undefined4 *)((int)this + 0x2b1c) = 0xffffffff;
  do {
    *(undefined1 *)((int)this + iVar3 + 0x32d3) = 0;
    iVar1 = *(int *)(param_2 + 0x33);
    *(undefined1 *)((int)this + iVar3 + 0x32d9) = 0;
    *(bool *)((int)this + iVar3 + 0x32d6) = iVar3 < iVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  *(undefined4 *)((int)this + 0x2ae0) = 0;
  *(undefined4 *)((int)this + 0x2ae4) = 1;
  *(undefined4 *)((int)this + 0x2ae8) = 1;
  *(undefined4 *)((int)this + 0x2aec) = 0;
  *(undefined2 *)((int)this + 0x2af0) = 0xffff;
  *(undefined4 *)((int)this + 11000) = 1;
  *(undefined4 *)((int)this + 0x2af4) = 1;
  *(undefined4 *)((int)this + 0x2afc) = 1;
  *(undefined4 *)((int)this + 0x2b00) = 1;
  *(undefined4 *)((int)this + 0x2b08) = 1;
  *(undefined4 *)((int)this + 0x2b04) = 1;
  *(undefined4 *)((int)this + 0x2b0c) = 1;
  *(undefined4 *)((int)this + 0x2b10) = 1;
  *(undefined4 *)((int)this + 0x2b18) = 0;
  *(undefined4 *)((int)this + 0x2b14) = 1;
  FUN_10052de1((int *)((int)this + 0x2b20),0,0x40);
  *(undefined4 *)((int)this + 0x2b70) = 0;
  *(undefined1 *)((int)this + 0x2b5c) = 0xf;
  *(undefined4 *)((int)this + 0x2b74) = 0;
  *(undefined4 *)((int)this + 0x2b88) = 0;
  *(undefined4 *)((int)this + 0x2b64) = 1;
  *(undefined4 *)((int)this + 0x2b68) = 1;
  *(undefined4 *)((int)this + 0x2b60) = 3;
  *(undefined4 *)((int)this + 0x2b6c) = 0;
  *(undefined4 *)((int)this + 0x2b78) = 0;
  *(undefined4 *)((int)this + 0x2b7c) = 0;
  *(undefined4 *)((int)this + 0x2b80) = 0;
  *(undefined4 *)((int)this + 0x2b84) = 0;
  *(undefined4 *)((int)this + 0x2b8c) = 0;
  fVar2 = (float)*(int *)((int)this + 0xa0);
  if (*(int *)((int)this + 0xa0) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2b90) = fVar2;
  fVar2 = (float)*(int *)((int)this + 0xa4);
  if (*(int *)((int)this + 0xa4) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x2b94) = fVar2;
  *(undefined4 *)((int)this + 0x2b98) = 0;
  *(int *)((int)this + 0x2bc0) = *(int *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x2b9c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2bb8) = 0;
  *(undefined4 *)((int)this + 0x2bbc) = 0;
  *(int *)((int)this + 0x2bc4) = *(int *)((int)this + 0x9c);
  FUN_10008341(this,0,0,*(int *)((int)this + 0x98),*(int *)((int)this + 0x9c));
  *(undefined4 *)((int)this + 0x2bb0) = 0;
  *(undefined4 *)((int)this + 0x2bb4) = 0x3f800000;
  SetRect((LPRECT)((int)this + 0x2a00),0,0,*(int *)((int)this + 0x98),*(int *)((int)this + 0x9c));
  FUN_10008ccb((undefined4 *)((int)this + 0x1dd4));
  puVar4 = (undefined4 *)((int)this + 0x1dd4);
  puVar5 = (undefined4 *)((int)this + 0x11d4);
  for (iVar3 = 0x300; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


/*
 * FUN_1001d94c at 1001d94c
 * undefined4 __thiscall FUN_1001d94c(void * this, int param_1)
 * Address ranges: 1001d94c-1001dc1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001d94c(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  puVar1 = (undefined4 *)((int)this + 0x2b34);
  puVar2 = (undefined4 *)((int)this + 0x2a44);
  iVar3 = 0;
  if ((*(uint *)((int)this + 0x2b2c) & 2) != 0) {
    *(undefined4 *)((int)this + 0x2a4c) = 1;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x2a5c) = 3;
      *(undefined4 *)((int)this + 0x2a6c) = 3;
      *(undefined4 *)((int)this + 0x2a48) =
           *(undefined4 *)(&DAT_10051ab0 + *(int *)((int)this + 0x2b54) * 4);
      *(undefined4 *)((int)this + 0x2b30) = *(undefined4 *)((int)this + 0x2bec);
      *(undefined4 *)((int)this + 0x2b38) = *(undefined4 *)((int)this + 0x2bf8);
      *puVar1 = *puVar2;
      *(uint *)((int)this + 0x2b3c) = (uint)*(byte *)((int)this + 0x2a9c);
      *puVar2 = 0;
      *(undefined4 *)((int)this + 0x2bf8) = 0;
      *(undefined1 *)((int)this + 0x2a9c) = 0;
      *(undefined4 *)((int)this + 0x2c64) = 1;
      *(undefined4 *)((int)this + 0x2a60) = 8;
      *(undefined4 *)((int)this + 0x2a58) = 2;
      *(undefined4 *)((int)this + 0x2a70) = 8;
      *(undefined4 *)((int)this + 0x2a68) = 2;
      *(undefined4 *)((int)this + 0x2bec) = 0xff0004;
      *(undefined1 *)((int)this + 0x3150) = 1;
      *(undefined2 *)((int)this + 0x2bc0) = 0x101;
      return 1;
    }
    *(undefined4 *)((int)this + 0x2a60) = 3;
    *(undefined4 *)((int)this + 0x2a70) = 3;
    *(undefined4 *)((int)this + 0x2c64) = 0;
    *(undefined4 *)((int)this + 0x2a68) = 1;
    param_1 = param_1 + -1;
    *(undefined4 *)((int)this + 0x2a6c) = 1;
    *puVar2 = *puVar1;
    *(undefined1 *)((int)this + 0x2a9c) = *(undefined1 *)((int)this + 0x2b3c);
    *(undefined4 *)((int)this + 0x2bec) = *(undefined4 *)((int)this + 0x2b30);
    iVar3 = *(int *)((int)this + 0x2b38);
    *(undefined4 *)((int)this + 0x2a58) = 1;
    *(undefined4 *)((int)this + 0x2a5c) = 1;
    *(undefined4 *)((int)this + 0x2a48) = 8;
    *(int *)((int)this + 0x2bf8) = iVar3;
    *(undefined1 *)((int)this + 0x3150) = 1;
    *(undefined2 *)((int)this + 0x2bc0) = 0x101;
  }
  if ((*(uint *)((int)this + 0x2b2c) & 1) != 0) {
    if (param_1 == 0) {
      iVar3 = *(int *)((int)this + 0x2c5c);
      uVar4 = 0;
      if ((iVar3 != 0) && (*(int *)((int)this + 0x2a80) != 0)) {
        *(int *)((int)this + 0x2b30) = iVar3;
        *puVar1 = *(undefined4 *)((int)this + 0x2a8c);
        uVar4 = 1;
        *(undefined4 *)((int)this + 0x2b38) = *(undefined4 *)((int)this + 0x2a98);
        *(undefined4 *)((int)this + 0x2b3c) = *(undefined4 *)((int)this + 0x2a84);
        *(undefined4 *)((int)this + 0x2b40) = *(undefined4 *)((int)this + 0x2a90);
        *(undefined4 *)((int)this + 0x2b44) = *(undefined4 *)((int)this + 0x2a94);
        *(undefined4 *)((int)this + 0x2b48) = *(undefined4 *)((int)this + 0x2bec);
        *(undefined4 *)((int)this + 0x2b4c) = *puVar2;
        iVar3 = *(int *)((int)this + 0x2bf8);
        *(undefined4 *)((int)this + 0x2c5c) = 0;
        *(undefined4 *)((int)this + 0x2a8c) = 1;
        *(undefined4 *)((int)this + 0x2a98) = 1;
        *(undefined4 *)((int)this + 0x2a84) = 1;
        *(undefined4 *)((int)this + 0x2a88) = 3;
        *(undefined4 *)((int)this + 0x2a90) = 1;
        *(undefined4 *)((int)this + 0x2a94) = 2;
        *(undefined4 *)((int)this + 0x2bec) = 0xff0004;
        *puVar2 = 0;
        *(int *)((int)this + 0x2b50) = iVar3;
        *(undefined4 *)((int)this + 0x2bf8) = 0;
      }
    }
    else {
      if (param_1 != 1) goto LAB_1001dc13;
      *(undefined4 *)((int)this + 0x2c5c) = *(undefined4 *)((int)this + 0x2b30);
      *(undefined4 *)((int)this + 0x2a8c) = *puVar1;
      *(undefined4 *)((int)this + 0x2a98) = *(undefined4 *)((int)this + 0x2b38);
      *(undefined4 *)((int)this + 0x2a84) = *(undefined4 *)((int)this + 0x2b3c);
      *(undefined4 *)((int)this + 0x2a90) = *(undefined4 *)((int)this + 0x2b40);
      *(undefined4 *)((int)this + 0x2a94) = *(undefined4 *)((int)this + 0x2b44);
      *puVar2 = *(undefined4 *)((int)this + 0x2b4c);
      *(undefined4 *)((int)this + 0x2bf8) = *(undefined4 *)((int)this + 0x2b50);
      iVar3 = *(int *)((int)this + 0x2b48);
      *(undefined4 *)((int)this + 0x2a88) = 2;
      *(int *)((int)this + 0x2bec) = iVar3;
    }
    *(undefined2 *)((int)this + 0x2bc0) = 0x101;
    *(undefined1 *)((int)this + 0x3150) = 1;
  }
LAB_1001dc13:
  return CONCAT31((int3)((uint)iVar3 >> 8),uVar4);
}


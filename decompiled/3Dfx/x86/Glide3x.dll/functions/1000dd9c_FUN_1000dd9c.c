/*
 * FUN_1000dd9c at 1000dd9c
 * undefined4 __thiscall FUN_1000dd9c(void * this, int param_1)
 * Address ranges: 1000dd9c-1000e06b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000dd9c(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  puVar1 = (undefined4 *)((int)this + 0x2bd4);
  puVar2 = (undefined4 *)((int)this + 0x2ae4);
  iVar3 = 0;
  if ((*(uint *)((int)this + 0x2bcc) & 2) != 0) {
    *(undefined4 *)((int)this + 0x2aec) = 1;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x2afc) = 3;
      *(undefined4 *)((int)this + 0x2b0c) = 3;
      *(undefined4 *)((int)this + 0x2ae8) =
           *(undefined4 *)(&DAT_10054814 + *(int *)((int)this + 0x2bf4) * 4);
      *(undefined4 *)((int)this + 0x2bd0) = *(undefined4 *)((int)this + 0x2c8c);
      *(undefined4 *)((int)this + 0x2bd8) = *(undefined4 *)((int)this + 0x2c98);
      *puVar1 = *puVar2;
      *(uint *)((int)this + 0x2bdc) = (uint)*(byte *)((int)this + 0x2b3c);
      *puVar2 = 0;
      *(undefined4 *)((int)this + 0x2c98) = 0;
      *(undefined1 *)((int)this + 0x2b3c) = 0;
      *(undefined4 *)((int)this + 0x2d04) = 1;
      *(undefined4 *)((int)this + 0x2b00) = 8;
      *(undefined4 *)((int)this + 11000) = 2;
      *(undefined4 *)((int)this + 0x2b10) = 8;
      *(undefined4 *)((int)this + 0x2b08) = 2;
      *(undefined4 *)((int)this + 0x2c8c) = 0xff0004;
      *(undefined1 *)((int)this + 0x32d0) = 1;
      *(undefined2 *)((int)this + 0x2c60) = 0x101;
      return 1;
    }
    *(undefined4 *)((int)this + 0x2b00) = 3;
    *(undefined4 *)((int)this + 0x2b10) = 3;
    *(undefined4 *)((int)this + 0x2d04) = 0;
    *(undefined4 *)((int)this + 0x2b08) = 1;
    param_1 = param_1 + -1;
    *(undefined4 *)((int)this + 0x2b0c) = 1;
    *puVar2 = *puVar1;
    *(undefined1 *)((int)this + 0x2b3c) = *(undefined1 *)((int)this + 0x2bdc);
    *(undefined4 *)((int)this + 0x2c8c) = *(undefined4 *)((int)this + 0x2bd0);
    iVar3 = *(int *)((int)this + 0x2bd8);
    *(undefined4 *)((int)this + 11000) = 1;
    *(undefined4 *)((int)this + 0x2afc) = 1;
    *(undefined4 *)((int)this + 0x2ae8) = 8;
    *(int *)((int)this + 0x2c98) = iVar3;
    *(undefined1 *)((int)this + 0x32d0) = 1;
    *(undefined2 *)((int)this + 0x2c60) = 0x101;
  }
  if ((*(uint *)((int)this + 0x2bcc) & 1) != 0) {
    if (param_1 == 0) {
      iVar3 = *(int *)((int)this + 0x2cfc);
      uVar4 = 0;
      if ((iVar3 != 0) && (*(int *)((int)this + 0x2b20) != 0)) {
        *(int *)((int)this + 0x2bd0) = iVar3;
        *puVar1 = *(undefined4 *)((int)this + 0x2b2c);
        uVar4 = 1;
        *(undefined4 *)((int)this + 0x2bd8) = *(undefined4 *)((int)this + 0x2b38);
        *(undefined4 *)((int)this + 0x2bdc) = *(undefined4 *)((int)this + 0x2b24);
        *(undefined4 *)((int)this + 0x2be0) = *(undefined4 *)((int)this + 0x2b30);
        *(undefined4 *)((int)this + 0x2be4) = *(undefined4 *)((int)this + 0x2b34);
        *(undefined4 *)((int)this + 0x2be8) = *(undefined4 *)((int)this + 0x2c8c);
        *(undefined4 *)((int)this + 0x2bec) = *puVar2;
        iVar3 = *(int *)((int)this + 0x2c98);
        *(undefined4 *)((int)this + 0x2cfc) = 0;
        *(undefined4 *)((int)this + 0x2b2c) = 1;
        *(undefined4 *)((int)this + 0x2b38) = 1;
        *(undefined4 *)((int)this + 0x2b24) = 1;
        *(undefined4 *)((int)this + 0x2b28) = 3;
        *(undefined4 *)((int)this + 0x2b30) = 1;
        *(undefined4 *)((int)this + 0x2b34) = 2;
        *(undefined4 *)((int)this + 0x2c8c) = 0xff0004;
        *puVar2 = 0;
        *(int *)((int)this + 0x2bf0) = iVar3;
        *(undefined4 *)((int)this + 0x2c98) = 0;
      }
    }
    else {
      if (param_1 != 1) goto LAB_1000e063;
      *(undefined4 *)((int)this + 0x2cfc) = *(undefined4 *)((int)this + 0x2bd0);
      *(undefined4 *)((int)this + 0x2b2c) = *puVar1;
      *(undefined4 *)((int)this + 0x2b38) = *(undefined4 *)((int)this + 0x2bd8);
      *(undefined4 *)((int)this + 0x2b24) = *(undefined4 *)((int)this + 0x2bdc);
      *(undefined4 *)((int)this + 0x2b30) = *(undefined4 *)((int)this + 0x2be0);
      *(undefined4 *)((int)this + 0x2b34) = *(undefined4 *)((int)this + 0x2be4);
      *puVar2 = *(undefined4 *)((int)this + 0x2bec);
      *(undefined4 *)((int)this + 0x2c98) = *(undefined4 *)((int)this + 0x2bf0);
      iVar3 = *(int *)((int)this + 0x2be8);
      *(undefined4 *)((int)this + 0x2b28) = 2;
      *(int *)((int)this + 0x2c8c) = iVar3;
    }
    *(undefined2 *)((int)this + 0x2c60) = 0x101;
    *(undefined1 *)((int)this + 0x32d0) = 1;
  }
LAB_1000e063:
  return CONCAT31((int3)((uint)iVar3 >> 8),uVar4);
}


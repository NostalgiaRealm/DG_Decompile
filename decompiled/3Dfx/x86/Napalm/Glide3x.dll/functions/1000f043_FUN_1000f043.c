/*
 * FUN_1000f043 at 1000f043
 * undefined4 __thiscall FUN_1000f043(void * this, int param_1)
 * Address ranges: 1000f043-1000f325
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000f043(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  puVar1 = (undefined4 *)((int)this + 0x2d14);
  puVar2 = (undefined4 *)((int)this + 0x2c24);
  iVar3 = 0;
  if ((*(uint *)((int)this + 0x2d0c) & 2) != 0) {
    *(undefined4 *)((int)this + 0x2c2c) = 1;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x2c3c) = 3;
      *(undefined4 *)((int)this + 0x2c4c) = 3;
      *(undefined4 *)((int)this + 0x2c54) = 1;
      *(undefined4 *)((int)this + 0x2c28) =
           *(undefined4 *)(&DAT_10057a58 + *(int *)((int)this + 0x2d3c) * 4);
      *(undefined4 *)((int)this + 0x2d10) = *(undefined4 *)((int)this + 0x2ddc);
      *(undefined4 *)((int)this + 0x2d18) = *(undefined4 *)((int)this + 0x2de8);
      *puVar1 = *puVar2;
      *(undefined2 *)((int)this + 0x2c30) = 0xffff;
      *(uint *)((int)this + 0x2d1c) = (uint)*(byte *)((int)this + 0x2c7c);
      *puVar2 = 0;
      *(undefined4 *)((int)this + 0x2de8) = 0;
      *(undefined1 *)((int)this + 0x2c7c) = 0;
      *(undefined4 *)((int)this + 0x2e54) = 1;
      *(undefined4 *)((int)this + 0x2c40) = 8;
      *(undefined4 *)((int)this + 0x2c38) = 2;
      *(undefined4 *)((int)this + 0x2c50) = 8;
      *(undefined4 *)((int)this + 0x2c48) = 2;
      *(undefined4 *)((int)this + 0x2ddc) = 0xff0004;
      *(undefined1 *)((int)this + 0x3650) = 1;
      *(undefined2 *)((int)this + 0x2da8) = 0x101;
      return 1;
    }
    *(undefined4 *)((int)this + 0x2c40) = 3;
    *(undefined4 *)((int)this + 0x2c50) = 3;
    *(undefined4 *)((int)this + 0x2e54) = 0;
    *(undefined4 *)((int)this + 0x2c48) = 1;
    param_1 = param_1 + -1;
    *(undefined4 *)((int)this + 0x2c4c) = 1;
    *puVar2 = *puVar1;
    *(undefined1 *)((int)this + 0x2c7c) = *(undefined1 *)((int)this + 0x2d1c);
    *(undefined4 *)((int)this + 0x2ddc) = *(undefined4 *)((int)this + 0x2d10);
    iVar3 = *(int *)((int)this + 0x2d18);
    *(undefined4 *)((int)this + 0x2c38) = 1;
    *(undefined4 *)((int)this + 0x2c3c) = 1;
    *(undefined4 *)((int)this + 0x2c28) = 8;
    *(int *)((int)this + 0x2de8) = iVar3;
    *(undefined1 *)((int)this + 0x3650) = 1;
    *(undefined2 *)((int)this + 0x2da8) = 0x101;
  }
  if ((*(uint *)((int)this + 0x2d0c) & 1) != 0) {
    if (param_1 == 0) {
      iVar3 = *(int *)((int)this + 0x2e4c);
      uVar4 = 0;
      if ((iVar3 != 0) && (*(int *)((int)this + 0x2c60) != 0)) {
        *(int *)((int)this + 0x2d10) = iVar3;
        *puVar1 = *(undefined4 *)((int)this + 0x2c6c);
        uVar4 = 1;
        *(undefined4 *)((int)this + 0x2d18) = *(undefined4 *)((int)this + 0x2c78);
        *(undefined4 *)((int)this + 0x2d1c) = *(undefined4 *)((int)this + 0x2c64);
        *(undefined4 *)((int)this + 0x2d20) = *(undefined4 *)((int)this + 0x2c70);
        *(undefined4 *)((int)this + 0x2d24) = *(undefined4 *)((int)this + 0x2c74);
        *(undefined4 *)((int)this + 0x2d28) = *(undefined4 *)((int)this + 0x2ddc);
        *(undefined4 *)((int)this + 0x2d2c) = *puVar2;
        iVar3 = *(int *)((int)this + 0x2de8);
        *(undefined4 *)((int)this + 0x2e4c) = 0;
        *(undefined4 *)((int)this + 0x2c6c) = 1;
        *(undefined4 *)((int)this + 0x2c78) = 1;
        *(undefined4 *)((int)this + 0x2c64) = 1;
        *(undefined4 *)((int)this + 0x2c68) = 3;
        *(undefined4 *)((int)this + 0x2c70) = 1;
        *(undefined4 *)((int)this + 0x2c74) = 2;
        *(undefined4 *)((int)this + 0x2ddc) = 0xff0004;
        *puVar2 = 0;
        *(int *)((int)this + 0x2d30) = iVar3;
        *(undefined4 *)((int)this + 0x2de8) = 0;
      }
    }
    else {
      if (param_1 != 1) goto LAB_1000f31d;
      *(undefined4 *)((int)this + 0x2e4c) = *(undefined4 *)((int)this + 0x2d10);
      *(undefined4 *)((int)this + 0x2c6c) = *puVar1;
      *(undefined4 *)((int)this + 0x2c78) = *(undefined4 *)((int)this + 0x2d18);
      *(undefined4 *)((int)this + 0x2c64) = *(undefined4 *)((int)this + 0x2d1c);
      *(undefined4 *)((int)this + 0x2c70) = *(undefined4 *)((int)this + 0x2d20);
      *(undefined4 *)((int)this + 0x2c74) = *(undefined4 *)((int)this + 0x2d24);
      *puVar2 = *(undefined4 *)((int)this + 0x2d2c);
      *(undefined4 *)((int)this + 0x2de8) = *(undefined4 *)((int)this + 0x2d30);
      iVar3 = *(int *)((int)this + 0x2d28);
      *(undefined4 *)((int)this + 0x2c68) = 2;
      *(int *)((int)this + 0x2ddc) = iVar3;
    }
    *(undefined2 *)((int)this + 0x2da8) = 0x101;
    *(undefined1 *)((int)this + 0x3650) = 1;
  }
LAB_1000f31d:
  return CONCAT31((int3)((uint)iVar3 >> 8),uVar4);
}


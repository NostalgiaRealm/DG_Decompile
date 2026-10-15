/*
 * FUN_1001a4d8 at 1001a4d8
 * undefined __thiscall FUN_1001a4d8(void * this, undefined4 * param_1, int param_2, byte param_3)
 * Address ranges: 1001a4d8-1001a584
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a4d8(void *this,undefined4 *param_1,int param_2,byte param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    uVar1 = (uint)param_3;
    do {
      **(undefined4 **)((int)this + 0x24) = *param_1;
      *(undefined4 *)(*(int *)((int)this + 0x24) + 4) = param_1[1];
      *(undefined4 *)(*(int *)((int)this + 0x24) + 8) = param_1[6];
      *(undefined4 *)(*(int *)((int)this + 0x24) + 0xc) = param_1[8];
      *(undefined4 *)(*(int *)((int)this + 0x24) + 0x10) = param_1[3];
      *(undefined4 *)(*(int *)((int)this + 0x24) + 0x14) = param_1[4];
      *(undefined4 *)(*(int *)((int)this + 0x24) + 0x18) = param_1[5];
      *(undefined4 *)(*(int *)((int)this + 0x24) + 0x1c) = param_1[7];
      *(uint *)(*(int *)((int)this + 0x24) + 0x20) = uVar1;
      _param_3 = 0;
      do {
        puVar2 = param_1 + _param_3 * 3 + 9;
        puVar3 = (undefined4 *)(*(int *)((int)this + 0x24) + 0x24 + _param_3 * 0xc);
        _param_3 = _param_3 + 1;
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
      } while (_param_3 < 2);
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 0x3c;
      param_1 = param_1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


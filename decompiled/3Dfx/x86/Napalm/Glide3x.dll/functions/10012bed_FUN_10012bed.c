/*
 * FUN_10012bed at 10012bed
 * undefined __thiscall FUN_10012bed(void * this, uint3 param_1)
 * Address ranges: 10012bed-10012c91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10012bed(void *this,uint3 param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint extraout_ECX;
  float10 fVar5;
  
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  bVar2 = 0;
  uVar3 = FUN_100118f8(*(void **)((int)this + 0x365c),*(int *)((int)this + 0x2b1c));
  if (uVar3 != 0xffffffff) {
    iVar4 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(uVar3);
    bVar2 = FUN_100165de(iVar4);
    bVar2 = bVar2 ^ 1;
  }
  if ((*(int *)((int)this + 0x2b38) == 2) || (*(int *)((int)this + 0x2b38) == 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1 || bVar2 != 0) {
    param_1 = param_1 << 8 | 0xff;
  }
  *(int *)((int)this + 0x2e50) = (int)((uint)param_1 << 8) >> 8;
  fVar5 = FUN_100093d7(param_1);
  *(float *)((int)this + 0x2e58) = (float)fVar5;
  fVar5 = FUN_10009408(extraout_ECX);
  *(float *)((int)this + 0x2e5c) = (float)fVar5;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}


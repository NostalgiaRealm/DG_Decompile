/*
 * FUN_1000b5ea at 1000b5ea
 * undefined8 __thiscall FUN_1000b5ea(void * this, ushort param_1)
 * Address ranges: 1000b5ea-1000b610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __thiscall FUN_1000b5ea(void *this,ushort param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (*(uint *)((int)this + uVar1 * 4 + 0x18) == (uint)param_1) goto LAB_1000b60e;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  uVar1 = *(uint *)this | 0x80000000;
  iVar2 = (uint)param_1 << 4;
LAB_1000b60e:
  return CONCAT44(iVar2,uVar1);
}


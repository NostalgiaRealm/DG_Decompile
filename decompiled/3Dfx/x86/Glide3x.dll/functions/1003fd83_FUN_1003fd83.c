/*
 * FUN_1003fd83 at 1003fd83
 * undefined __thiscall FUN_1003fd83(void * this, uint param_1, uint param_2)
 * Address ranges: 1003fd83-1003fdc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003fd83(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1004e2b6(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) goto LAB_1003fdbc;
    do {
      do {
        uVar3 = FUN_1004e2b6(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
        uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar1 = (uint)uVar3;
      } while (uVar2 < param_2);
      if (param_2 < uVar2) {
        return;
      }
LAB_1003fdbc:
    } while (uVar1 < param_1);
  }
  return;
}


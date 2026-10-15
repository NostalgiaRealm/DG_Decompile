/*
 * FUN_1003d29e at 1003d29e
 * undefined __thiscall FUN_1003d29e(void * this, uint param_1, uint param_2)
 * Address ranges: 1003d29e-1003d2e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d29e(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1004b7ce(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) goto LAB_1003d2d7;
    do {
      do {
        uVar3 = FUN_1004b7ce(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
        uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar1 = (uint)uVar3;
      } while (uVar2 < param_2);
      if (param_2 < uVar2) {
        return;
      }
LAB_1003d2d7:
    } while (uVar1 < param_1);
  }
  return;
}


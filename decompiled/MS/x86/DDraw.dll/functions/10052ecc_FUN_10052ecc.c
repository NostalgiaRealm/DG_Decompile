/*
 * FUN_10052ecc at 10052ecc
 * undefined __thiscall FUN_10052ecc(void * this, uint param_1, uint param_2)
 * Address ranges: 10052ecc-10052f0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10052ecc(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1005bcfb(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) goto LAB_10052f05;
    do {
      do {
        uVar3 = FUN_1005bcfb(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
        uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar1 = (uint)uVar3;
      } while (uVar2 < param_2);
      if (param_2 < uVar2) {
        return;
      }
LAB_10052f05:
    } while (uVar1 < param_1);
  }
  return;
}


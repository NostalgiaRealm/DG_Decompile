/*
 * FUN_10098caa at 10098caa
 * undefined __thiscall FUN_10098caa(void * this, uint param_1, uint param_2)
 * Address ranges: 10098caa-10098ced
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10098caa(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100a6dac(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) goto LAB_10098ce3;
    do {
      do {
        uVar3 = FUN_100a6dac(*(void **)((int)this + 0x900),*(int *)((int)this + 0x910));
        uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar1 = (uint)uVar3;
      } while (uVar2 < param_2);
      if (param_2 < uVar2) {
        return;
      }
LAB_10098ce3:
    } while (uVar1 < param_1);
  }
  return;
}


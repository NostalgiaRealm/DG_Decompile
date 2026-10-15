/*
 * FUN_1001448a at 1001448a
 * undefined __thiscall FUN_1001448a(void * this, uint param_1)
 * Address ranges: 1001448a-1001451d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001448a(void *this,uint param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  
  FUN_100ad48c(*(LPVOID *)(*(int *)(*(int *)((int)this + 0x210) + param_1 * 4) + 4));
  pvVar1 = *(LPVOID *)(*(int *)((int)this + 0x210) + param_1 * 4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_10007c30((undefined4 *)((int)pvVar1 + 0x499c));
    FUN_100ad48c(pvVar1);
  }
  if (param_1 == *(int *)((int)this + 0x214) - 1U) {
    uVar2 = *(uint *)((int)this + 0x214);
    if (param_1 < uVar2) {
      while (param_1 = param_1 + 1, param_1 < uVar2) {
        *(undefined4 *)(*(int *)((int)this + 0x210) + -4 + param_1 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x210) + param_1 * 4);
        uVar2 = *(uint *)((int)this + 0x214);
      }
      *(uint *)((int)this + 0x214) = uVar2 - 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x210) + param_1 * 4) = 0;
  }
  return;
}


/*
 * FUN_10018607 at 10018607
 * undefined __thiscall FUN_10018607(void * this, uint param_1)
 * Address ranges: 10018607-1001869a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018607(void *this,uint param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  
  FUN_100cfd6c(*(LPVOID *)(*(int *)(*(int *)((int)this + 0x3b4) + param_1 * 4) + 4));
  pvVar1 = *(LPVOID *)(*(int *)((int)this + 0x3b4) + param_1 * 4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_10008783((undefined4 *)((int)pvVar1 + 0x4aac));
    FUN_100cfd6c(pvVar1);
  }
  if (param_1 == *(int *)((int)this + 0x3b8) - 1U) {
    uVar2 = *(uint *)((int)this + 0x3b8);
    if (param_1 < uVar2) {
      while (param_1 = param_1 + 1, param_1 < uVar2) {
        *(undefined4 *)(*(int *)((int)this + 0x3b4) + -4 + param_1 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x3b4) + param_1 * 4);
        uVar2 = *(uint *)((int)this + 0x3b8);
      }
      *(uint *)((int)this + 0x3b8) = uVar2 - 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x3b4) + param_1 * 4) = 0;
  }
  return;
}


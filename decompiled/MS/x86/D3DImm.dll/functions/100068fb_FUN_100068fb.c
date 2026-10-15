/*
 * FUN_100068fb at 100068fb
 * undefined __thiscall FUN_100068fb(void * this, uint param_1)
 * Address ranges: 100068fb-1000698e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100068fb(void *this,uint param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  
  FUN_1005c76c(*(LPVOID *)(*(int *)(*(int *)((int)this + 0x214) + param_1 * 4) + 4));
  pvVar1 = *(LPVOID *)(*(int *)((int)this + 0x214) + param_1 * 4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_10008257((undefined4 *)((int)pvVar1 + 0x9cc));
    FUN_1005c76c(pvVar1);
  }
  if (param_1 == *(int *)((int)this + 0x218) - 1U) {
    uVar2 = *(uint *)((int)this + 0x218);
    if (param_1 < uVar2) {
      while (param_1 = param_1 + 1, param_1 < uVar2) {
        *(undefined4 *)(*(int *)((int)this + 0x214) + -4 + param_1 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x214) + param_1 * 4);
        uVar2 = *(uint *)((int)this + 0x218);
      }
      *(uint *)((int)this + 0x218) = uVar2 - 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x214) + param_1 * 4) = 0;
  }
  return;
}


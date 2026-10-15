/*
 * FUN_10021037 at 10021037
 * undefined __thiscall FUN_10021037(void * this, int param_1, int param_2)
 * Address ranges: 10021037-10021073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021037(void *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_1c [3];
  
  puVar1 = FUN_10049b2f(*(void **)((int)this + 0x10),local_1c,param_2,*(int *)((int)this + 0x14),
                        param_1);
  puVar3 = (undefined4 *)((int)this + param_1 * 0xc18 + 0xca8);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)puVar1;
    puVar1 = (undefined8 *)((int)puVar1 + 4);
    puVar3 = puVar3 + 1;
  }
  return;
}


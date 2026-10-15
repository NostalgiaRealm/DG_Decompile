/*
 * FUN_10010953 at 10010953
 * undefined4 __thiscall FUN_10010953(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10010953-10010986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10010953(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0x8876086c;
  if ((param_1 < *(ushort *)((int)this + 0x30)) && (param_2 != (undefined4 *)0x0)) {
    uVar2 = 0;
    puVar3 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x38) + param_1 * 4) + 0x28);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
  return uVar2;
}


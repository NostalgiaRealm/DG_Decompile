/*
 * FUN_1007cd81 at 1007cd81
 * undefined __thiscall FUN_1007cd81(void * this, int param_1, undefined4 * param_2, int param_3)
 * Address ranges: 1007cd81-1007cde0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007cd81(void *this,int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = MXCSR;
  MXCSR = 0x3fc0;
  puVar3 = param_2;
  puVar4 = (undefined4 *)((param_1 + 0x533) * 0x10 + (int)this);
  for (iVar2 = param_3 << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x98))(param_1,param_3 + param_1,param_2);
  MXCSR = uVar1;
  return;
}


/*
 * FUN_1009d29a at 1009d29a
 * undefined4 __stdcall FUN_1009d29a(int param_1, int param_2, uint * param_3)
 * Address ranges: 1009d29a-1009d2cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009d29a(int param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = FUN_10090a86(*(int *)(param_1 + 0x24) + 0x66b4,param_2,param_3);
    }
    else {
      uVar2 = (**(code **)*puVar1)(puVar1);
    }
  }
  return uVar2;
}


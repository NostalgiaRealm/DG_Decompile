/*
 * FUN_1800ac794 at 1800ac794
 * undefined8 * __fastcall FUN_1800ac794(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800ac794-1800ac7bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800ac794(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28 [5];
  
  puVar3 = FUN_1800ac1a8(local_28,*(uint *)(param_1 + 0x2c));
  uVar2 = puVar3[1];
  uVar1 = *(undefined4 *)(puVar3 + 2);
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar1;
  return param_2;
}


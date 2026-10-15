/*
 * FUN_18008831c at 18008831c
 * undefined __fastcall FUN_18008831c(undefined8 param_1, longlong param_2, undefined8 * param_3)
 * Address ranges: 18008831c-180088375
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008831c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(param_2 + 0x34) | *(uint *)(param_2 + 0x30);
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    *(uint *)(param_2 + 0x38) = -(uint)(uVar3 != 0) & iVar1 + 1U;
    uVar3 = *(uint *)(param_2 + 0x44) | *(uint *)(param_2 + 0x40) | *(uint *)(param_2 + 0x3c);
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    *(uint *)(param_2 + 0x48) = -(uint)(uVar3 != 0) & iVar1 + 1U;
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    *param_3 = *(undefined8 *)(param_2 + 0x28);
    param_3[1] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    param_3[2] = *(undefined8 *)(param_2 + 0x38);
    param_3[3] = uVar2;
    param_3[4] = *(undefined8 *)(param_2 + 0x48);
  }
  return;
}


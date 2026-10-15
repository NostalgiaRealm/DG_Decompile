/*
 * FUN_180065f34 at 180065f34
 * undefined __fastcall FUN_180065f34(undefined8 param_1, longlong param_2, undefined8 * param_3)
 * Address ranges: 180065f34-180065f9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180065f34(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_3 != (undefined8 *)0x0) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | (uint)*(ushort *)(param_2 + 0x12);
    *(undefined2 *)(param_2 + 0x12) = 0;
    uVar3 = *(uint *)(param_2 + 0x14) | *(uint *)(param_2 + 0x10);
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    *(uint *)(param_2 + 0x18) = -(uint)(uVar3 != 0) & iVar1 + 1U;
    uVar3 = *(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20) | *(uint *)(param_2 + 0x1c);
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    *(uint *)(param_2 + 0x28) = -(uint)(uVar3 != 0) & iVar1 + 1U;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *param_3 = *(undefined8 *)(param_2 + 8);
    param_3[1] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    param_3[2] = *(undefined8 *)(param_2 + 0x18);
    param_3[3] = uVar2;
    param_3[4] = *(undefined8 *)(param_2 + 0x28);
  }
  return;
}


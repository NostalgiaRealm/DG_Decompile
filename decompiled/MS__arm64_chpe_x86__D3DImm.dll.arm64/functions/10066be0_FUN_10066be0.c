/*
 * FUN_10066be0 at 10066be0
 * undefined FUN_10066be0(void)
 * Address ranges: 10066be0-10066c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10066be0(int param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  puVar1 = (ushort *)(param_1 + 4);
  uVar2 = *puVar1;
  if (uVar2 < 3) {
    uVar3 = *param_2;
    param_1 = param_1 + ((uint)uVar2 * 8 - (uint)uVar2) * 4;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(int *)(param_1 + 0x18) = param_1 + 0x1c;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *puVar1 = *puVar1 + 1;
  }
  return uVar2 < 3;
}


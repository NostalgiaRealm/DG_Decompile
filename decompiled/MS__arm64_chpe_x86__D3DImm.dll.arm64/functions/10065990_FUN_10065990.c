/*
 * FUN_10065990 at 10065990
 * undefined FUN_10065990(void)
 * Address ranges: 10065990-100659f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10065990(int param_1,undefined8 *param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (ushort *)(param_1 + 4);
  uVar2 = *puVar1;
  uVar3 = 0;
  if (uVar2 < 2) {
    uVar4 = *param_2;
    param_1 = param_1 + ((uint)uVar2 * 8 - (uint)uVar2) * 4;
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 8) = uVar4;
    if (param_3 == 0) {
      param_3 = param_1 + 0x1c;
    }
    *(int *)(param_1 + 0x18) = param_3;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *puVar1 = *puVar1 + 1;
  }
  return uVar3;
}


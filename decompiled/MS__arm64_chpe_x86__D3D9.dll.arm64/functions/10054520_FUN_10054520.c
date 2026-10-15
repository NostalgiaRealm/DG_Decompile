/*
 * FUN_10054520 at 10054520
 * undefined FUN_10054520(void)
 * Address ranges: 10054520-100546e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10054520(undefined4 *param_1,ulonglong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_1015ebb0;
  param_1[0x3dac] = &PTR_FUN_1015ebac;
  FUN_10055b60(param_1);
  FUN_101322d0(param_1[0x3e3c]);
  *(undefined8 *)(param_1 + 0x3e3c) = 0;
  *(undefined8 *)(param_1 + 0x3e3e) = 0;
  param_1[0x3dda] = &PTR_FUN_1015ed0c;
  FUN_101322d0(param_1[0x3dee]);
  *(undefined8 *)(param_1 + 0x3dee) = 0;
  *(undefined8 *)(param_1 + 0x3df0) = 0;
  FUN_101322d0(param_1[0x3de4]);
  FUN_101322d0(param_1[0x3ddf]);
  *(undefined8 *)(param_1 + 0x3ddf) = 0;
  *(undefined8 *)(param_1 + 0x3de1) = 0;
  FUN_101322d0(param_1[0x3dd1]);
  puVar1 = param_1 + 0x3dcf;
  if (*puVar1 != 0) {
    uVar3 = 0;
    if (*puVar1 == 0) {
      puVar2 = (undefined4 *)&DAT_00000004;
      goto LAB_1005461c;
    }
    do {
      puVar2 = (undefined4 *)(param_1[0x3dce] + uVar3 * 0x10 + 0xc);
LAB_1005461c:
      FUN_10132260(*puVar2,0x254);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
  FUN_101322d0(param_1[0x3dcd]);
  *(undefined8 *)(param_1 + 0x3dcd) = 0;
  param_1[0x3dd0] = 0;
  *puVar1 = 0;
  FUN_10072da0(param_1 + 0x3dc6);
  FUN_101322d0(param_1[0x3dc9]);
  *(undefined8 *)(param_1 + 0x3dc9) = 0;
  *(undefined8 *)(param_1 + 0x3dcb) = 0;
  FUN_101322d0(param_1[0x3dc2]);
  FUN_1006ff18(param_1 + 0x3dbb);
  FUN_101322d0(param_1[0x3dbe]);
  *(undefined8 *)(param_1 + 0x3dbe) = 0;
  *(undefined8 *)(param_1 + 0x3dc0) = 0;
  *param_1 = &PTR_FUN_1015e9c8;
  if ((param_2 & 1) != 0) {
    FUN_10132260(param_1,0xfdb0);
  }
  return param_1;
}


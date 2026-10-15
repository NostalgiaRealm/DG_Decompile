/*
 * FUN_10071c40 at 10071c40
 * undefined FUN_10071c40(void)
 * Address ranges: 10071c40-10071d5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071c40(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  FUN_10130fb8(*(int *)(param_1 + 2) + *(int *)((int)param_1 + 0x14) * 0x16c0 + 0x1880);
  puVar1 = (uint *)(param_1 + 1);
  if (*puVar1 != 0) {
    uVar4 = 0;
    if (*puVar1 == 0) {
      puVar3 = (undefined4 *)&DAT_00000004;
      goto LAB_10071ccc;
    }
    do {
      puVar3 = (undefined4 *)(*(int *)((int)param_1 + 4) + uVar4 * 0x298 + 0xc);
LAB_10071ccc:
      FUN_10072918(*puVar3,*(int *)(param_1 + 2),*(int *)((int)param_1 + 0x14));
      puVar2 = (undefined8 *)*puVar3;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_101322d0(*(undefined4 *)puVar2);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_10132260(puVar2,0x264);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  (*(code *)PTR_FUN_1016c06c)(param_1 + 3);
  FUN_101322d0(*(undefined4 *)param_1);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}


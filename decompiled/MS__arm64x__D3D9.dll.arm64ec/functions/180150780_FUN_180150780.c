/*
 * FUN_180150780 at 180150780
 * undefined FUN_180150780(void)
 * Address ranges: 180150780-180150827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180150780(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_18022b9b0;
  param_1[0x1eda] = &PTR_FUN_18022b9a8;
  FUN_180146740();
  FUN_1802229d8(param_1[8000]);
  param_1[0x1f42] = 0;
  param_1[8000] = 0;
  param_1[0x1f41] = 0;
  param_1[0x1f01] = &PTR_FUN_18022bc68;
  FUN_1802229d8(param_1[0x1f0e]);
  param_1[0x1f10] = 0;
  param_1[0x1f0e] = 0;
  param_1[0x1f0f] = 0;
  FUN_1802229d8(param_1[0x1f09]);
  FUN_1802229d8(param_1[0x1f06]);
  param_1[0x1f08] = 0;
  param_1[0x1f06] = 0;
  param_1[0x1f07] = 0;
  FUN_1802229d8(param_1[0x1efa]);
  if (*(int *)(param_1 + 0x1ef9) != 0) {
    uVar3 = 0;
    iVar2 = 0;
    if (*(int *)(param_1 + 0x1ef9) == 0) {
      puVar1 = (undefined8 *)&DAT_00000008;
      goto LAB_180150858;
    }
    do {
      iVar2 = (int)uVar3;
      puVar1 = (undefined8 *)(param_1[0x1ef8] + uVar3 * 0x18 + 0x10);
LAB_180150858:
      FUN_1802229d8(*puVar1,0x254);
      uVar3 = (ulonglong)(iVar2 + 1U);
    } while (iVar2 + 1U < *(uint *)(param_1 + 0x1ef9));
  }
  FUN_1802229d8(param_1[0x1ef7]);
  param_1[0x1ef7] = 0;
  param_1[0x1ef8] = 0;
  *(undefined4 *)(param_1 + 0x1ef9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf7cc) = 0;
  FUN_1801630c0(param_1 + 0x1ef2);
  FUN_1802229d8(param_1[0x1eef]);
  FUN_18015f638(param_1 + 0x1ee9);
  *param_1 = &PTR_FUN_18022ac48;
  FUN_180222b28(param_1[-1]);
  return;
}


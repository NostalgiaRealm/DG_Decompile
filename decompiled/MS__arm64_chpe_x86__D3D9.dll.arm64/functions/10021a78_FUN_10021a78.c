/*
 * FUN_10021a78 at 10021a78
 * undefined FUN_10021a78(void)
 * Address ranges: 10021a78-10021c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10021a78(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  
  puVar1 = (uint *)&DAT_00000dd0;
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + -0x58e4);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar3 == 0) {
      FUN_100071d0(0);
    }
  }
  local_60 = 0;
  local_58 = *(undefined4 *)(param_1 + 0x4c);
  uStack_54 = *(undefined4 *)(param_1 + 0x50);
  puVar4 = &local_60;
  if (param_4 != (undefined8 *)0x0) {
    uVar6 = 0x8876086c;
    iVar3 = (*(code *)PTR_FUN_1016c208)(auStack_50,param_4,&local_60);
    if ((iVar3 == 0) ||
       (iVar3 = (*(code *)PTR_FUN_1016c1a4)(param_4,auStack_50), puVar4 = param_4, iVar3 == 0))
    goto LAB_10021c50;
  }
  param_3 = param_2 * 0x10 + param_3;
  (*(code *)PTR_FUN_1016c298)(param_3,param_3,puVar4);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x60) == 1) {
    if (1 < *(ushort *)(param_1 + 0x30)) {
      uVar5 = 1;
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + (param_2 * 0x10 + uVar5) * 4) + 4);
        if (*(int *)(iVar3 + 0x20) != 0) {
          puVar1 = (uint *)(iVar3 + 0x34);
          *puVar1 = *puVar1 | 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 0x30));
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x38) + param_2 * 0x40);
    if (*(int *)(*(int *)(iVar3 + 4) + 0x20) != 0) {
      puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x34);
      *puVar1 = *puVar1 | 1;
      FUN_1000d740(*(undefined4 *)(iVar3 + 0x18),iVar3);
    }
  }
LAB_10021c50:
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar6;
}


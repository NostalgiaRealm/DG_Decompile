/*
 * FUN_10054cc6 at 10054cc6
 * undefined4 __fastcall FUN_10054cc6(int param_1)
 * Address ranges: 10054cc6-10054d72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10054cc6(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int **ppiVar6;
  int *local_3c [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  local_10 = 0;
  local_1c = *(undefined4 *)(param_1 + 0x1c);
  local_18 = *(undefined4 *)(param_1 + 0x24);
  local_14 = *(undefined4 *)(param_1 + 0x20);
  ppiVar6 = local_3c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppiVar6 = (int *)0x0;
    ppiVar6 = ppiVar6 + 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 8) * 0x18 + *(int *)(param_1 + 4));
  uVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,&local_1c,&DAT_1005fc0c,local_3c + 3);
  if (-1 < (int)uVar2) {
    puVar3 = (undefined4 *)(**(code **)(*local_3c[3] + 0x28))(local_3c[3],local_c);
    local_3c[0] = (int *)*puVar3;
    local_3c[1] = (int *)puVar3[1];
    puVar3 = (undefined4 *)(**(code **)(*local_3c[3] + 0x24))(local_3c[3],local_8);
    local_3c[2] = (int *)*puVar3;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar4 = FUN_10054f45((void *)(param_1 + 0xc),local_3c);
    }
    else {
      uVar4 = FUN_10054fb9((void *)(param_1 + 0xc),*(int *)(param_1 + 0x18) + 1,local_3c);
    }
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    uVar2 = (**(code **)(*local_3c[3] + 8))(local_3c[3]);
  }
  return uVar2 & 0xffffff00;
}


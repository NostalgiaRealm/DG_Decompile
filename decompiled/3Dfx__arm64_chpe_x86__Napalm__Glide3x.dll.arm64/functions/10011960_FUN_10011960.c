/*
 * FUN_10011960 at 10011960
 * undefined FUN_10011960(void)
 * Address ranges: 10011960-10011d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011960(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_50;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  local_50 = (int *)0x0;
  local_4c = 0;
  FUN_1001ce08(param_1,&local_50,&local_4c);
  iVar1 = param_1 + (int)(local_50 + 0xd) * 0x120;
  if (local_50 == (int *)0xffffffff) {
    iVar1 = 0;
  }
  iVar11 = param_1 + (local_4c + 0x34) * 0x120;
  if (local_4c == -1) {
    iVar11 = 0;
  }
  if (((iVar1 != 0) && (iVar11 != 0)) &&
     (((*(char *)(iVar11 + 0x48) != '\0' && (*(uint *)(iVar11 + 0x28) < *(uint *)(iVar1 + 0x28))) ||
      (*(uint *)(iVar11 + 0x2c) < *(uint *)(iVar1 + 0x2c))))) {
    if (*(int *)(iVar1 + 0xcc) == 0) {
      FUN_100325e0(iVar1,*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c),
                   *(undefined4 *)(iVar1 + 0x30),*(undefined1 *)(*(int *)(param_1 + 4) + 0x54),
                   (int *)(iVar1 + 0xcc),iVar1 + 0xd0,iVar1 + 0xd4);
    }
    iVar11 = 0;
  }
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar1;
    if (*(char *)(iVar1 + 0x48) != '\0') {
      iVar10 = 0;
    }
  }
  if (iVar11 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar11;
    if (*(char *)(iVar11 + 0x48) == '\0') {
      iVar9 = 0;
    }
  }
  iVar3 = iVar9;
  if (iVar9 == 0) {
    iVar3 = iVar1;
  }
  iVar5 = *(int *)(param_1 + 0x36b8);
  if (iVar10 != 0) {
    iVar5 = *(int *)(iVar10 + 0xc4);
  }
  if (iVar9 == 0) {
    iVar7 = *(int *)(param_1 + 0x36b8) + 1;
  }
  else {
    iVar7 = *(int *)(iVar9 + 0xc4);
  }
  piVar2 = (int *)(param_1 + 0x3688);
  FUN_10068230(*(undefined4 *)(*piVar2 + 0x15dc),auStack_48,iVar5,0);
  FUN_10068230(*(undefined4 *)(*piVar2 + 0x15dc),auStack_44,iVar7,0);
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x48) == '\0')) {
    FUN_1006a9d0(*(undefined4 *)(*piVar2 + 0x1304),2,auStack_48,0,0);
    *(undefined4 *)(param_1 + 0x3718) = 0;
  }
  else {
    FUN_10068230(*(undefined4 *)(*piVar2 + 0x15e0),&local_4c,*(undefined4 *)(iVar3 + 0xd4),0);
    FUN_1006a9d0(*(undefined4 *)(*piVar2 + 0x1304),2,auStack_48,0,&local_4c);
    local_50 = (int *)(iVar3 + 0xd8);
    *(int *)(param_1 + 0x3718) = *local_50;
    piVar4 = *(int **)(param_1 + 0x36e4);
    if (((*piVar4 == 0) || (piVar4[1] == 0)) && (piVar4[3] == 0)) {
      uVar8 = 0x20;
    }
    else {
      uVar8 = 0x10;
    }
    FUN_100694c8(*(undefined4 *)(*piVar2 + 0x1304),*(undefined4 *)(iVar3 + 0xcc),0,0,uVar8);
    if (*local_50 == 0x2d) {
      FUN_100694c8(*(undefined4 *)(*piVar2 + 0x1304),*(undefined4 *)(iVar3 + 0xcc),1,0,uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x36f4) = 2;
  uVar6 = 1;
  if (iVar9 != 0) {
    FUN_100694c8(*(undefined4 *)(*piVar2 + 0x1304),*(undefined4 *)(iVar9 + 0xb8),0,0,4);
    *(undefined4 *)(param_1 + 0x36fc) = *(undefined4 *)(iVar9 + 200);
    uVar6 = *(undefined4 *)(iVar11 + 0x30);
  }
  if (iVar10 != 0) {
    FUN_100694c8(*(undefined4 *)(*piVar2 + 0x1304),*(undefined4 *)(iVar10 + 0xb8),0,0,4);
    *(undefined4 *)(param_1 + 0x36f8) = *(undefined4 *)(iVar10 + 200);
    uVar6 = *(undefined4 *)(iVar1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x371c) = uVar6;
  *(undefined4 *)(param_1 + 0x3720) = 0;
  *(undefined1 *)(param_1 + 0x3736) = 1;
  return;
}


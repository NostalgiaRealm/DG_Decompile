/*
 * FUN_1006767e at 1006767e
 * undefined4 __stdcall FUN_1006767e(void * param_1, int param_2)
 * Address ranges: 1006767e-100677d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006767e(void *param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  LPVOID local_34 [4];
  undefined4 *local_24;
  int local_20;
  int local_14;
  int *local_c;
  int *local_8;
  
  FUN_10036e19(&local_24,0x200);
  local_14 = FUN_100c3e60((int *)&local_24,*(uint *)(param_2 + 0x18));
  FUN_100c422d(*(uint *)(param_2 + 0x18),(int *)&local_24);
  local_8 = (int *)(param_2 + 0x518);
  piVar1 = (int *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x52e) != '\0') {
    *(undefined1 *)(param_2 + 0x52c) = *(undefined1 *)(*local_8 + 0x10 + *piVar1);
    pbVar2 = (byte *)(*local_8 + 0x10 + *piVar1);
    *pbVar2 = *pbVar2 | 7;
  }
  local_c = piVar1;
  FUN_100728e8((int *)&local_24,param_2);
  piVar3 = local_c;
  if (*(char *)(param_2 + 0x52e) != '\0') {
    *(undefined1 *)(*local_8 + 0x10 + *piVar1) = *(undefined1 *)(param_2 + 0x52c);
  }
  uVar5 = 0;
  do {
    if ((*(char *)(uVar5 + 0x10 + *piVar3) != '\0') && (*(char *)(uVar5 + *piVar3) != -1)) {
      FUN_100c440d((int *)&local_24);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  if (*(char *)(param_2 + 0x52e) != '\0') {
    FUN_100c440d((int *)&local_24);
  }
  FUN_10036e19(local_34,0x80);
  FUN_100677d8((int *)local_34,param_2);
  FUN_100c3be1((int *)(param_2 + 0x18),(int *)local_34,0x3e);
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100c3d50((int *)&local_24,2);
  }
  FUN_100c3eb1((int *)&local_24,(int *)local_34,local_14);
  FUN_100c3d16(param_1,local_24,local_20 - (int)local_24);
  thunk_FUN_100cfd6c(local_34[0]);
  uVar4 = thunk_FUN_100cfd6c(local_24);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


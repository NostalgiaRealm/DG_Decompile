/*
 * FUN_10054b43 at 10054b43
 * undefined4 __stdcall FUN_10054b43(void * param_1, int param_2)
 * Address ranges: 10054b43-10054c96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054b43(void *param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  LPVOID local_30 [4];
  undefined4 *local_20;
  int local_1c;
  int local_10;
  int *local_c;
  int *local_8;
  
  FUN_1002d6f1(&local_20,0x200);
  local_10 = FUN_100a160b((int *)&local_20,*(uint *)(param_2 + 0x18));
  FUN_100a19d8(*(uint *)(param_2 + 0x18),(int *)&local_20);
  local_8 = (int *)(param_2 + 0x488);
  piVar1 = (int *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x49e) != '\0') {
    *(undefined1 *)(param_2 + 0x49c) = *(undefined1 *)(*local_8 + 0x10 + *piVar1);
    pbVar2 = (byte *)(*local_8 + 0x10 + *piVar1);
    *pbVar2 = *pbVar2 | 7;
  }
  local_c = piVar1;
  FUN_1005ccda((int *)&local_20,param_2);
  piVar3 = local_c;
  if (*(char *)(param_2 + 0x49e) != '\0') {
    *(undefined1 *)(*local_8 + 0x10 + *piVar1) = *(undefined1 *)(param_2 + 0x49c);
  }
  uVar5 = 0;
  do {
    if ((*(char *)(uVar5 + 0x10 + *piVar3) != '\0') && (*(char *)(uVar5 + *piVar3) != -1)) {
      FUN_100a1bb8((int *)&local_20);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  if (*(char *)(param_2 + 0x49e) != '\0') {
    FUN_100a1bb8((int *)&local_20);
  }
  FUN_1002d6f1(local_30,0x80);
  FUN_10054c97((int *)local_30,param_2);
  FUN_100a138c((int *)(param_2 + 0x18),(int *)local_30,0x3e);
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100a14fb((int *)&local_20,2);
  }
  FUN_100a165c((int *)&local_20,(int *)local_30,local_10);
  FUN_100a14c1(param_1,local_20,local_1c - (int)local_20);
  thunk_FUN_100ad48c(local_30[0]);
  uVar4 = thunk_FUN_100ad48c(local_20);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


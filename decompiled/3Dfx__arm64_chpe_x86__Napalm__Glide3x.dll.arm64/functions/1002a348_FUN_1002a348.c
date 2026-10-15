/*
 * FUN_1002a348 at 1002a348
 * undefined FUN_1002a348(void)
 * Address ranges: 1002a348-1002a3e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a348(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = ZEXT48(param_1);
  uVar4 = 0;
  if (*(int *)*param_1 != 0) {
    do {
      iVar2 = FUN_10028f48(param_1[1] + 0x42e8,*(undefined4 *)param_1[2],param_2);
      uVar4 = uVar4 + 1;
      piVar1 = (int *)param_1[2];
      param_2 = param_2 + iVar2 * 4;
      *piVar1 = *(int *)param_1[3] + *piVar1;
    } while (uVar4 < *(uint *)*(undefined4 *)uVar3);
  }
  return;
}


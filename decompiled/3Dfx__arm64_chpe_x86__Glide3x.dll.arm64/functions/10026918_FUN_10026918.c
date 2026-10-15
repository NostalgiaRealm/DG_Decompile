/*
 * FUN_10026918 at 10026918
 * undefined FUN_10026918(void)
 * Address ranges: 10026918-100269b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026918(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = ZEXT48(param_1);
  uVar4 = 0;
  if (*(int *)*param_1 != 0) {
    do {
      iVar2 = FUN_10025518(param_1[1] + 0x3f50,*(undefined4 *)param_1[2],param_2);
      uVar4 = uVar4 + 1;
      piVar1 = (int *)param_1[2];
      param_2 = param_2 + iVar2 * 4;
      *piVar1 = *(int *)param_1[3] + *piVar1;
    } while (uVar4 < *(uint *)*(undefined4 *)uVar3);
  }
  return;
}


/*
 * FUN_10009138 at 10009138
 * undefined FUN_10009138(void)
 * Address ranges: 10009138-1000924f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009138(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0xae) == '\0') && (*(char *)(param_1 + 0xac) == '\0')) {
    iVar3 = *(int *)(param_1 + 0x9c);
    iVar2 = *(int *)(param_1 + 0xa4);
    uVar1 = *(uint *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0xa0)) {
      FUN_100917a0(iVar2,iVar3,(*(uint *)(param_1 + 0x80) >> 3) * *(int *)(param_1 + 100) * uVar1);
    }
    else {
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          FUN_100917a0(iVar2,iVar3,(uint)(*(int *)(param_1 + 100) * *(int *)(param_1 + 0x80)) >> 3);
          uVar4 = uVar4 + 1;
          iVar3 = *(int *)(param_1 + 0xa0) + iVar3;
          iVar2 = *(int *)(param_1 + 0xa8) + iVar2;
        } while (uVar4 < *(uint *)(param_1 + 0x68));
      }
    }
  }
  *(char *)(param_1 + 0xae) = '\x01';
  return;
}


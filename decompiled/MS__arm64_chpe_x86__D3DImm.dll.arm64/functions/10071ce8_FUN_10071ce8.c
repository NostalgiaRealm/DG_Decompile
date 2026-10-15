/*
 * FUN_10071ce8 at 10071ce8
 * undefined FUN_10071ce8(void)
 * Address ranges: 10071ce8-10071d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071ce8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x620);
  *(char *)(param_1 + 0x620) = '\0';
  iVar2 = 8;
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  iVar2 = iVar2 + *(int *)(param_1 + 0x624);
  *(int *)(param_1 + 0x624) = iVar2;
  if (((*(int *)(param_1 + 0x630) <= iVar2) && (*(int *)(param_1 + 0x8e0) != 0)) &&
     (*(int *)(param_1 + 0x634) == 0)) {
    FUN_10071e00(param_1 + 4,0);
    return;
  }
  return;
}


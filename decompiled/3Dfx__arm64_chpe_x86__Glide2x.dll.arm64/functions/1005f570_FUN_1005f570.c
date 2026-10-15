/*
 * FUN_1005f570 at 1005f570
 * undefined FUN_1005f570(void)
 * Address ranges: 1005f570-1005f5d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f570(int param_1)

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
    FUN_1005fc70(param_1 + 4,0);
    return;
  }
  return;
}


/*
 * FUN_100b4e90 at 100b4e90
 * undefined FUN_100b4e90(void)
 * Address ranges: 100b4e90-100b4ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b4e90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_10023850(param_1);
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + 0x94f);
  iVar2 = *(int *)(iVar2 + 0x737);
  if (*piVar1 != iVar2) {
    *piVar1 = iVar2;
    FUN_100b19c0(*(undefined4 *)(param_1 + 0x51c),param_1);
  }
  return;
}


/*
 * FUN_10067220 at 10067220
 * undefined FUN_10067220(void)
 * Address ranges: 10067220-1006725b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067220(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar1 = (uint *)(param_1 + 0x130);
    uVar2 = *puVar1 + *(int *)(param_1 + 0x88) * param_2;
    *puVar1 = uVar2;
    if (*(uint *)(param_1 + 0x10) < uVar2) {
      *puVar1 = *(uint *)(param_1 + 0x10);
    }
  }
  return;
}


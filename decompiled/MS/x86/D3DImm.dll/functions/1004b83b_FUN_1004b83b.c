/*
 * FUN_1004b83b at 1004b83b
 * undefined4 __fastcall FUN_1004b83b(int param_1)
 * Address ranges: 1004b83b-1004b87b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004b83b(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = FUN_1005c755(iVar1 + 0x44);
  piVar2 = (int *)(iVar1 + 0x23U & 0xffffffe0);
  piVar2[-1] = iVar1;
  *(int **)(param_1 + 4) = piVar2;
  piVar2 = FUN_1005c9cc(piVar2,0,*(uint *)(param_1 + 0x10));
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


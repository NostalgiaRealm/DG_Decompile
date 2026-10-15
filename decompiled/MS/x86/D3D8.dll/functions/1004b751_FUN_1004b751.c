/*
 * FUN_1004b751 at 1004b751
 * undefined __stdcall FUN_1004b751(uint * param_1, int param_2)
 * Address ranges: 1004b751-1004b7ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b751(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x200);
  if (uVar1 == 0) {
    uVar1 = FUN_100a05ed(param_2,4,'\x01');
    *(uint *)(param_2 + 0x200) = uVar1;
  }
  *(undefined1 *)(param_1 + 1) = 0xe4;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = uVar1;
  return;
}


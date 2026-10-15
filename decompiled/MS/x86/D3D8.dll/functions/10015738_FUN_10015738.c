/*
 * FUN_10015738 at 10015738
 * undefined __thiscall FUN_10015738(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10015738-100157ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015738(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 * 0x40 + *(int *)((int)this + 0xabc));
  *param_2 = *puVar1;
  param_2[4] = puVar1[1];
  param_2[8] = puVar1[2];
  param_2[0xc] = puVar1[3];
  param_2[1] = puVar1[4];
  param_2[5] = puVar1[5];
  param_2[9] = puVar1[6];
  param_2[0xd] = puVar1[7];
  param_2[2] = puVar1[8];
  param_2[6] = puVar1[9];
  param_2[10] = puVar1[10];
  param_2[0xe] = puVar1[0xb];
  param_2[3] = puVar1[0xc];
  param_2[7] = puVar1[0xd];
  param_2[0xb] = puVar1[0xe];
  param_2[0xf] = puVar1[0xf];
  return;
}


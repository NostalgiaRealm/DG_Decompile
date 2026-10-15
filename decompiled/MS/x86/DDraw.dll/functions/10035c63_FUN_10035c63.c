/*
 * FUN_10035c63 at 10035c63
 * undefined __stdcall FUN_10035c63(int param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 10035c63-10035c9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035c63(int param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint local_14 [4];
  
  if (param_2 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    local_14[0] = *param_2;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    puVar1 = local_14;
  }
  FUN_1002c0f5(*(void **)(param_1 + 4),&DAT_100623d0,puVar1,param_3);
  return;
}


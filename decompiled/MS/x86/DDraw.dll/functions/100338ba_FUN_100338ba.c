/*
 * FUN_100338ba at 100338ba
 * undefined __cdecl FUN_100338ba(float * param_1)
 * Address ranges: 100338ba-100338fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100338ba(float *param_1)

{
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  
  if (param_1 != (float *)0x0) {
    *param_1 = in_XMM0_Da - in_XMM1_Da;
    param_1[1] = in_XMM0_Db - in_XMM1_Db;
    param_1[2] = in_XMM0_Dc - in_XMM1_Dc;
    param_1[3] = in_XMM0_Dd - in_XMM1_Dd;
  }
  return;
}


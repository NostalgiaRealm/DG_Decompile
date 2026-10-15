/*
 * FUN_10032056 at 10032056
 * uint __fastcall FUN_10032056(uint * param_1, int param_2, int param_3)
 * Address ranges: 10032056-10032078
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10032056(uint *param_1,int param_2,int param_3)

{
  uint in_EAX;
  
  if (((((*param_1 & param_2 - 1U) == 0) && (in_EAX = param_3 - 1, (param_1[1] & in_EAX) == 0)) &&
      ((param_1[2] & param_2 - 1U) == 0)) && ((param_1[3] & in_EAX) == 0)) {
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


/*
 * FUN_100ac960 at 100ac960
 * undefined4 __fastcall FUN_100ac960(byte * param_1, uint * param_2)
 * Address ranges: 100ac960-100ac998
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100ac960(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  uVar1 = FUN_100ad2e0(param_1,&local_c);
  if (((char)uVar1 != '\0') && ((local_8 == 0 || (uVar1 = local_8, local_8 == 0xffffffff)))) {
    *param_2 = local_c;
    return CONCAT31((int3)(local_c >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


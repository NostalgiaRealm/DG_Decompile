/*
 * FUN_100611e8 at 100611e8
 * int __stdcall FUN_100611e8(int * param_1, int * param_2, int param_3)
 * Address ranges: 100611e8-1006125b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100611e8(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_1[param_3 + 0xa2] == 0) {
    uVar1 = FUN_100c2e34((int)param_1,4,'\x01');
    param_1[param_3 + 0xa2] = uVar1;
    FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                 CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_3 + param_1[0x3d])))
    ;
    FUN_100c3be1(param_1,param_2,0x2036);
  }
  return param_1[param_3 + 0xa2];
}


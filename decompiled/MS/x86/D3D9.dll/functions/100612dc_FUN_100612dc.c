/*
 * FUN_100612dc at 100612dc
 * int __stdcall FUN_100612dc(int * param_1, int * param_2)
 * Address ranges: 100612dc-100613b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100612dc(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  
  if (param_1[0xc0] == 0) {
    uVar1 = FUN_100c2e34((int)param_1,4,'\x01');
    param_1[0xc0] = uVar1;
    FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                 CONCAT31((int3)((uint)param_1[0x3d] >> 8),*(undefined1 *)(param_1[0x3d] + 0x144)));
    FUN_100c3be1(param_1,param_2,0);
    FUN_100c3be1(param_1,param_2,0x38);
  }
  return param_1[0xc0];
}


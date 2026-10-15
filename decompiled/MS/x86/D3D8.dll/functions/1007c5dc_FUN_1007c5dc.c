/*
 * FUN_1007c5dc at 1007c5dc
 * undefined4 __stdcall FUN_1007c5dc(int param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 1007c5dc-1007c6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c5dc(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  char local_bd;
  uint local_bc;
  undefined4 local_b8 [45];
  
  uVar2 = 0x8876086c;
  if ((param_5 != 0) && ((param_6 == 0 || (param_6 == 1)))) {
    FUN_10003838(&local_bd,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    local_bc = *(uint *)(param_5 + -0x30);
    if (local_bc == 0) {
      uVar2 = 0x8876086c;
      local_bc = 0;
    }
    else {
      FUN_1007ca2e((void *)(param_1 + -0x4eb0),local_b8,&local_bc);
      iVar1 = 0;
      if ((*(uint *)(param_1 + 0x60) & 1) != 0) {
        local_bc = *(uint *)(param_1 + 0x60);
        iVar1 = FUN_100809ad((void *)(param_1 + 0x2c),&local_bc);
      }
      bVar3 = *(int *)(*(int *)(param_1 + -0x4e14) + 0x20) == 0x78;
      local_bc = CONCAT31(local_bc._1_3_,bVar3);
      uVar2 = FUN_10004db5((void *)(param_1 + -0x58e0),param_2,param_3,param_4,
                           (void *)(param_5 + -0x68),param_1 + -0x4920,param_1 - 0x589c,
                           (int)local_b8,param_6,iVar1,iVar1,bVar3);
    }
    FUN_10003881(&local_bd);
  }
  return uVar2;
}


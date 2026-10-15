/*
 * FUN_1001a4a2 at 1001a4a2
 * undefined4 __fastcall FUN_1001a4a2(int param_1)
 * Address ranges: 1001a4a2-1001a522
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001a4a2(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  bVar1 = FUN_1003e1c1(DAT_1005b820,2,0x1005a248,param_1 + 0x1f8);
  puVar2 = (undefined4 *)CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    bVar1 = true;
    uVar3 = 0;
    do {
      if (1 < uVar3) break;
      puVar2 = FUN_1003a2b5((void *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3308) + 0x1630),
                            (&PTR_PTR_1005a24c)[uVar3 * 2],(undefined4 *)(&DAT_1005a250)[uVar3 * 2])
      ;
      bVar1 = puVar2 != (undefined4 *)0x0;
      *(undefined4 **)(param_1 + 0x200 + uVar3 * 4) = puVar2;
      uVar3 = uVar3 + 1;
    } while (puVar2 != (undefined4 *)0x0);
    if (bVar1) {
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
  uVar3 = FUN_1001a523(param_1);
  return uVar3 & 0xffffff00;
}


/*
 * FUN_1001c64b at 1001c64b
 * undefined4 __fastcall FUN_1001c64b(int param_1)
 * Address ranges: 1001c64b-1001c6cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001c64b(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  bVar1 = FUN_100415ca(DAT_1005fa00,2,0x1005e35c,param_1 + 0x1f8);
  puVar2 = (undefined4 *)CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    bVar1 = true;
    uVar3 = 0;
    do {
      if (1 < uVar3) break;
      puVar2 = FUN_1003d6c3((void *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3688) + 0x1630),
                            (&PTR_PTR_1005e360)[uVar3 * 2],(undefined4 *)(&DAT_1005e364)[uVar3 * 2])
      ;
      bVar1 = puVar2 != (undefined4 *)0x0;
      *(undefined4 **)(param_1 + 0x200 + uVar3 * 4) = puVar2;
      uVar3 = uVar3 + 1;
    } while (puVar2 != (undefined4 *)0x0);
    if (bVar1) {
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
  uVar3 = FUN_1001c6cc(param_1);
  return uVar3 & 0xffffff00;
}


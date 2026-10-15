/*
 * FUN_100271b0 at 100271b0
 * undefined4 __fastcall FUN_100271b0(int param_1)
 * Address ranges: 100271b0-10027224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100271b0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  bVar1 = FUN_1003ba6c(DAT_1005974c,1,0x100581dc,param_1 + 0x4c);
  puVar2 = (undefined4 *)CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    bVar4 = true;
    bVar1 = false;
    do {
      if (bVar1) break;
      puVar2 = FUN_10037b60((void *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x3188) + 0x1630),
                            PTR_PTR_10058418,DAT_1005841c);
      bVar4 = puVar2 != (undefined4 *)0x0;
      *(undefined4 **)(param_1 + 0x50) = puVar2;
      bVar1 = true;
    } while (puVar2 != (undefined4 *)0x0);
    if (bVar4) {
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
  uVar3 = FUN_10027225(param_1);
  return uVar3 & 0xffffff00;
}


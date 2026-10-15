/*
 * FUN_1001b0cf at 1001b0cf
 * undefined4 __fastcall FUN_1001b0cf(int param_1)
 * Address ranges: 1001b0cf-1001b170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001b0cf(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *local_10;
  undefined4 local_c;
  
  puVar2 = (undefined4 *)
           FUN_1005489f((void *)(*(int *)(param_1 + 0x10) * 0x16c0 + *(int *)(param_1 + 8) + 0x1be8)
                        ,*(uint *)(param_1 + 0x14),0);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 8);
    puVar2 = FUN_10054b06(-(uint)(iVar1 != 0) & iVar1 + 0x520U,*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14),1,0,*(undefined4 *)(iVar1 + 0x172c0));
    uVar4 = 0;
    if (puVar2 == (undefined4 *)0x0) goto LAB_1001b168;
  }
  local_c = *(undefined4 *)(param_1 + 0x30);
  local_10 = puVar2;
  uVar3 = FUN_1001b6b8((void *)(param_1 + 0x24),&local_10);
  if ((char)uVar3 != '\0') {
    *(int *)(*(int *)(param_1 + 0x24) + 4 + *(int *)(param_1 + 0x34) * 8) =
         *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x28) + -1;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar4 = (**(code **)*puVar2)(1);
LAB_1001b168:
  return uVar4 & 0xffffff00;
}


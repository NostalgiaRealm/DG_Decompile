/*
 * FUN_1001b769 at 1001b769
 * undefined4 __fastcall FUN_1001b769(int param_1)
 * Address ranges: 1001b769-1001b7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001b769(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_1c [3];
  
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = FUN_10044a0c(*(void **)(iVar2 + 0x295c),local_1c,*(int *)(param_1 + 8),
                        *(int *)(iVar2 + 0x2960),iVar2,*(uint *)(iVar2 + 0xb4),
                        *(uint *)(iVar2 + 0xb8));
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)puVar1;
    puVar1 = (undefined8 *)((int)puVar1 + 4);
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
  FUN_10050561((int *)(param_1 + 0x48),0,0x68);
  FUN_10050561((int *)(param_1 + 0xb0),0,0x70);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
  return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x18) >> 8),1);
}


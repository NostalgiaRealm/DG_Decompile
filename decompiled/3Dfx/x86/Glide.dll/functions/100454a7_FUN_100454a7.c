/*
 * FUN_100454a7 at 100454a7
 * undefined4 __stdcall FUN_100454a7(int param_1)
 * Address ranges: 100454a7-10045550
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100454a7(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint3 uVar7;
  undefined1 local_40 [8];
  uint uStack_38;
  uint uStack_30;
  
  *(uint *)(param_1 + 0x20) =
       (uint)(*(int *)(param_1 + 0x14) == *(int *)(*(int *)(param_1 + 0x10) + 0xd7c));
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10f8);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x11a0);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3c) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x11a8);
  iVar5 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x1304);
  iVar5 = FUN_100381ed((void *)(iVar5 + 0x1640),(uint *)(iVar5 + 0x10));
  FUN_1003d9c2(iVar1,iVar5);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(iVar5 + 0x10);
  uVar2 = *(uint *)(iVar5 + 0x18);
  iVar3 = *(int *)(iVar5 + 0x14);
  uVar4 = *(uint *)(iVar5 + 0x1c);
  uVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 0x28))(*(int **)(param_1 + 0x14),local_40);
  uVar7 = (uint3)((uint)uVar6 >> 8);
  if (((uint)(iVar1 * 2) / uVar2 < uStack_38) || ((uint)(iVar3 * 2) / uVar4 < uStack_30)) {
    iVar5 = (uint)uVar7 << 8;
  }
  else {
    iVar5 = CONCAT31(uVar7,1);
  }
  return iVar5;
}


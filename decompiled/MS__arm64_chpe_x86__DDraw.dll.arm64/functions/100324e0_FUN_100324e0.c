/*
 * FUN_100324e0 at 100324e0
 * undefined FUN_100324e0(void)
 * Address ranges: 100324e0-100327b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100324e0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = (int *)(param_1 + 4);
  *(undefined4 *)(*piVar1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(*piVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(*piVar1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(*piVar1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined4 *)(*piVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(*piVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(*piVar1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(*piVar1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(*piVar1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)(*piVar1 + 0x9e) = *(undefined4 *)(param_2 + 0x9e);
  *(undefined4 *)(*piVar1 + 0xae) = *(undefined4 *)(param_2 + 0xae);
  *(undefined4 *)(*piVar1 + 0xb2) = *(undefined4 *)(param_2 + 0xb2);
  *(undefined4 *)(*piVar1 + 0xb6) = *(undefined4 *)(param_2 + 0xb6);
  *(undefined4 *)(*piVar1 + 0xba) = *(undefined4 *)(param_2 + 0xba);
  *(undefined4 *)(*piVar1 + 0xca) = *(undefined4 *)(param_2 + 0xca);
  *(undefined4 *)(*piVar1 + 0xda) = *(undefined4 *)(param_2 + 0xda);
  *(undefined4 *)(*piVar1 + 0xde) = *(undefined4 *)(param_2 + 0xde);
  *(undefined1 *)(*piVar1 + 0xe6) = *(undefined1 *)(param_2 + 0xe6);
  iVar4 = *piVar1;
  iVar5 = *(int *)(param_2 + 8);
  if (((*(int *)(iVar4 + 8) != iVar5) || (*(int *)(iVar4 + 0xc2) != *(int *)(param_2 + 0xc2))) ||
     (*(int *)(iVar4 + 0xc6) != *(int *)(param_2 + 0xc6))) {
    *(int *)(iVar4 + 8) = iVar5;
    *(uint *)(*piVar1 + 0xc2) = *(uint *)(param_2 + 0xc2);
    *(uint *)(*piVar1 + 0xc6) = *(uint *)(param_2 + 0xc6);
    if (*(uint *)(param_1 + 0x9c) != 0) {
      piVar2 = (int *)(param_1 + 0x98);
      uVar6 = 0;
      do {
        uVar3 = uVar6 + 1;
        *(int *)(*piVar2 + uVar6 * 0x28 + 0x18) = *(int *)(param_2 + 8);
        *(uint *)(*piVar2 + uVar6 * 0x28 + 0x10) = *(uint *)(param_2 + 0xc6) & 1;
        *(uint *)(*piVar2 + uVar6 * 0x28 + 0xc) = *(uint *)(param_2 + 0xc2) >> 2 & 1;
        uVar6 = uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x9c));
    }
  }
  *(undefined1 *)(*piVar1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined1 *)(*piVar1 + 0x86) = *(undefined1 *)(param_2 + 0x86);
  *(undefined1 *)(*piVar1 + 0x83) = *(undefined1 *)(param_2 + 0x83);
  *(undefined4 *)(*piVar1 + 0x1cf) = *(undefined4 *)(param_2 + 0x1cf);
  *(undefined4 *)(*piVar1 + 0x1cb) = *(undefined4 *)(param_2 + 0x1cb);
  *(undefined4 *)(*piVar1 + 0x1d3) = *(undefined4 *)(param_2 + 0x1d3);
  return;
}


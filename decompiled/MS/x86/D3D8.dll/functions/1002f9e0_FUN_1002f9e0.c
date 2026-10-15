/*
 * FUN_1002f9e0 at 1002f9e0
 * undefined4 __fastcall FUN_1002f9e0(int param_1)
 * Address ranges: 1002f9e0-1002fad5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002f9e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *local_c;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 8);
  local_8 = *(int *)(param_1 + 0x10) * 0x16c0 + 0x6c0 + iVar5;
  if (*(int *)(param_1 + 0x18) == 1) {
    iVar1 = 0x1370;
    if (*(char *)(param_1 + 0x21) != '\0') {
      iVar1 = 0x13d0;
    }
    puVar2 = FUN_1009d06d(iVar5 + 0x520U & -(uint)(iVar5 != 0),*(int *)(param_1 + 0x10),
                          iVar1 + local_8,*(undefined4 *)(param_1 + 0x14),
                          -(uint)(iVar5 != 0) & iVar5 + 0x508U);
LAB_1002fa8f:
    uVar4 = 0;
    if (puVar2 == (undefined4 *)0x0) goto LAB_1002facf;
  }
  else {
    iVar5 = 2;
    if ((*(int *)(param_1 + 0x18) != 2) && (*(int *)(param_1 + 0x18) != 3)) {
      iVar5 = 1;
    }
    puVar2 = (undefined4 *)
             FUN_1009d6af((void *)(local_8 + 0x1528),*(uint *)(param_1 + 0x14),0,iVar5);
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      puVar2 = FUN_1009d912(-(uint)(iVar1 != 0) & iVar1 + 0x520U,*(undefined4 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x14),iVar5,0,*(undefined4 *)(iVar1 + 0x172c0)
                           );
      goto LAB_1002fa8f;
    }
  }
  local_8 = *(undefined4 *)(param_1 + 0x30);
  local_c = puVar2;
  uVar3 = FUN_10030607((void *)(param_1 + 0x24),&local_c);
  if ((char)uVar3 != '\0') {
    *(int *)(*(int *)(param_1 + 0x24) + 4 + *(int *)(param_1 + 0x34) * 8) =
         *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x28) + -1;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar4 = (**(code **)*puVar2)(1);
LAB_1002facf:
  return uVar4 & 0xffffff00;
}


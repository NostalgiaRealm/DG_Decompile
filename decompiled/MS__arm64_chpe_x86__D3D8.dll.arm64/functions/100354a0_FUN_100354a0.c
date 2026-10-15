/*
 * FUN_100354a0 at 100354a0
 * undefined FUN_100354a0(void)
 * Address ranges: 100354a0-10035593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100354a0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [20];
  uint local_44;
  
  piVar1 = (int *)(param_1 + 0x20);
  if (*piVar1 != 0) {
    puVar2 = (uint *)(param_1 + 0x34);
    if (((((*puVar2 >> 1 & 1) == 0) || (*(int *)(param_1 + 0x24) != 0)) && ((*puVar2 >> 3 & 1) == 0)
        ) && (iVar4 = (*(code *)PTR_FUN_10134134)(*piVar1,auStack_58,0x1c), iVar4 != 0)) {
      if ((param_2 == 0) && (param_3 == 0)) {
        iVar4 = *piVar1;
        iVar3 = (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14);
      }
      else {
        iVar3 = (param_3 - param_2) * 0x1000;
        iVar4 = *piVar1 + param_2 * 0x1000;
      }
      (*(code *)PTR_FUN_10134130)(iVar4,iVar3,local_44 | 0x100,auStack_60);
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar5 = *puVar2 | 2;
      }
      else {
        uVar5 = *puVar2 & 0xfffffffd;
      }
      *puVar2 = uVar5;
    }
  }
  return;
}


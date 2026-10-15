/*
 * FUN_100a713e at 100a713e
 * uint __thiscall FUN_100a713e(void * this, int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 100a713e-100a7202
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100a713e(void *this,int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar3 = param_2;
  uVar5 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  if ((param_2 < 2) &&
     (uVar5 = FUN_100965ee(*(void **)((int)this + 4),param_1,param_2 + 1), (char)uVar5 != '\0')) {
    iVar1 = *(int *)((int)this + 4);
    iVar8 = *(int *)(param_1 + 8) * 0x16c0;
    *param_3 = *(undefined4 *)(param_1 + 0xd7c + uVar3 * 4);
    piVar6 = FUN_10097b61(*(void **)(iVar8 + 0x1c98 + iVar1),(int *)&param_2,
                          *(uint *)(param_1 + 0xd84),uVar3);
    iVar2 = param_1;
    param_3[2] = *piVar6;
    piVar6 = FUN_10097b61(*(void **)(iVar8 + 0x1c9c + iVar1),&param_1,*(uint *)(param_1 + 0xd88),
                          uVar3);
    puVar4 = param_3;
    param_3[3] = *piVar6;
    uVar7 = FUN_1009f143(*(void **)(*(int *)((int)this + 4) + 0x172c0));
    puVar4[1] = uVar7;
    uVar7 = *(undefined4 *)(&DAT_100b0c64 + *(int *)(iVar2 + 0x2c) * 4);
    puVar4[4] = uVar7;
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  return uVar5 & 0xffffff00;
}


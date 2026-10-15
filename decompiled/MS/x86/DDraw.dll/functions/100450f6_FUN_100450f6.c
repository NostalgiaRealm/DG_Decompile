/*
 * FUN_100450f6 at 100450f6
 * undefined __thiscall FUN_100450f6(void * this, int param_1, uint param_2)
 * Address ranges: 100450f6-10045282
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100450f6(void *this,int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(param_1 + 0xd70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,&local_5c);
    if ((local_5c == *(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0x18)) &&
       (local_58 == *(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0x1c))) {
      bVar5 = *(uint *)(param_1 + 0x20) < param_2;
    }
    else {
      FUN_10045283(this,param_1);
      bVar5 = true;
    }
    if (!bVar5) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 8) * 0x1510;
  local_54 = 1;
  local_5c = *(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0x18);
  local_50 = 1;
  local_58 = *(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0x1c);
  local_48 = 1;
  local_4c = *(undefined4 *)(&DAT_10062f9c + *(int *)(param_1 + 0x2c) * 4);
  local_30 = *(undefined4 *)(&DAT_10062f54 + *(int *)(param_1 + 0x2c) * 4);
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_10 = 0;
  local_28 = 0;
  uVar4 = *(uint *)(param_1 + 0x20);
  local_3c = 0x28;
  local_14 = 4;
  local_c = 0;
  local_8 = 0;
  local_2c = 4;
  local_24 = 0xffffffff;
  local_20 = 0;
  local_1c = 0;
  local_18 = local_30;
  while( true ) {
    if (param_2 <= uVar4) {
      return;
    }
    piVar1 = *(int **)((int)this + iVar2 + 0x510);
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_5c,0,param_1 + 0xd70 + uVar4 * 4);
    if (iVar3 < 0) {
      return;
    }
    piVar1 = *(int **)((int)this + iVar2 + 0x510);
    iVar3 = (**(code **)(*piVar1 + 0x24))
                      (piVar1,*(undefined4 *)(param_1 + 0xd70 + uVar4 * 4),&local_18,
                       param_1 + 0xd78 + uVar4 * 4);
    if (iVar3 < 0) break;
    piVar1 = *(int **)((int)this + iVar2 + 0x510);
    iVar3 = (**(code **)(*piVar1 + 0x1c))
                      (piVar1,*(undefined4 *)(param_1 + 0xd70 + uVar4 * 4),&local_30,
                       param_1 + 0xd80 + uVar4 * 4);
    if (iVar3 < 0) {
      piVar1 = *(int **)(param_1 + 0xd78 + uVar4 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      break;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    uVar4 = uVar4 + 1;
  }
  piVar1 = *(int **)(param_1 + 0xd70 + uVar4 * 4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}


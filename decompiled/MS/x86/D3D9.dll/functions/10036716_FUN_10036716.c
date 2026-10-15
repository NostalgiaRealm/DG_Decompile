/*
 * FUN_10036716 at 10036716
 * int __thiscall FUN_10036716(void * this, int param_1, int param_2, uint * param_3, uint param_4, byte param_5)
 * Address ranges: 10036716-100368a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10036716(void *this,int param_1,int param_2,uint *param_3,uint param_4,byte param_5)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  byte bVar6;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined1 local_18 [20];
  
  bVar6 = param_5 & 1;
  if (bVar6 != 0) {
    FUN_10032e50(this,0,0,0);
  }
  iVar5 = -0x7fffbffb;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (param_2 == 9) {
    if ((param_4 == 0) || (3 < param_4)) {
      piVar2 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      uVar3 = (uint)(bVar6 ^ 1);
      iVar5 = (**(code **)(*piVar2 + 0x74))(piVar2,uVar1,local_18,-(param_4 != 0) & 8);
      if ((iVar5 == 0) && (param_3 != (uint *)0x0)) {
        *param_3 = uVar3;
        return 0;
      }
    }
  }
  else if (param_2 == 0xb) {
    if ((param_4 == 0) || (3 < param_4)) {
      piVar2 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      puVar4 = local_18;
      if (param_4 == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      iVar5 = (**(code **)(*piVar2 + 0x74))(piVar2,uVar1,puVar4,-(param_4 != 0) & 0x10,bVar6 ^ 1);
      if ((iVar5 == 0) && (param_3 != (uint *)0x0)) {
        *param_3 = unaff_ESI;
        return 0;
      }
    }
  }
  else if (param_2 == 0xc) {
    if ((param_4 == 0) || (7 < param_4)) {
      piVar2 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      uVar3 = (uint)(bVar6 ^ 1);
      puVar4 = local_18;
      if (param_4 == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      iVar5 = (**(code **)(*piVar2 + 0x74))(piVar2,uVar1,puVar4,-(param_4 != 0) & 0x10);
      if ((iVar5 == 0) && (param_3 != (uint *)0x0)) {
        *param_3 = uVar3;
        param_3[1] = unaff_EDI;
        return 0;
      }
    }
  }
  else {
    piVar2 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
    iVar5 = (**(code **)(*piVar2 + 0x74))(piVar2,uVar1,param_3,param_4,bVar6 ^ 1);
  }
  if ((iVar5 != 0) && (iVar5 != 1)) {
    iVar5 = -0x7fffbffb;
  }
  return iVar5;
}


/*
 * FUN_10046c15 at 10046c15
 * undefined __thiscall FUN_10046c15(void * this, int param_1, undefined4 param_2, undefined4 param_3, uint * param_4)
 * Address ranges: 10046c15-10046c71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10046c15(void *this,int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = param_1 * 0x1510;
  uVar2 = FUN_10057ce5((void *)(iVar3 + 0x8ac + (int)this),param_4);
  puVar4 = (uint *)(iVar3 + 0x594 + (int)this);
  if (*puVar4 != uVar2) {
    FUN_10057e1e((void *)(iVar3 + 0x8ac + (int)this),(int *)*puVar4);
    *puVar4 = uVar2;
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x28))(piVar1,0,1,puVar4);
  }
  return;
}


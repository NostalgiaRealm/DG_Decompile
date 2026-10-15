/*
 * FUN_100368aa at 100368aa
 * undefined4 __thiscall FUN_100368aa(void * this, int param_1, int param_2, byte param_3)
 * Address ranges: 100368aa-10036900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100368aa(void *this,int param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  FUN_10032e50(this,0,0,0);
  piVar2 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
  if (param_2 == 0xc) {
    (**(code **)(*piVar2 + 0x6c))(piVar2,uVar1);
    piVar2 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
    (**(code **)(*piVar2 + 0x70))(piVar2,uVar1);
  }
  else if ((param_3 & 2) == 0) {
    (**(code **)(*piVar2 + 0x70))();
  }
  else {
    (**(code **)(*piVar2 + 0x6c))();
  }
  return 0;
}


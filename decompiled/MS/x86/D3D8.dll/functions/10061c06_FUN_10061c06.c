/*
 * FUN_10061c06 at 10061c06
 * bool __thiscall FUN_10061c06(void * this, int * param_1, int param_2, undefined4 param_3, int param_4, char param_5)
 * Address ranges: 10061c06-10061cba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10061c06(void *this,int *param_1,int param_2,undefined4 param_3,int param_4,char param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined1 local_78 [8];
  uint local_70;
  uint local_6c;
  byte local_58;
  undefined4 local_4c [6];
  int local_34 [12];
  
  bVar1 = false;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x28))(param_1,local_78);
    FUN_10061ab2(local_4c,extraout_ECX,local_6c,param_2,local_58,param_5,0);
    local_34[9] = 0;
    local_34[10] = 0;
    local_34[4] = 0;
    local_34[5] = 0;
    piVar2 = local_34;
    if (param_4 == 0) {
      piVar2 = (int *)0x0;
    }
    local_34[0] = param_4;
    local_34[6] = 0;
    puVar3 = local_4c;
    local_34[7] = 5;
    if (param_2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    local_34[8] = 0;
    local_34[1] = 4;
    local_34[2] = 0;
    local_34[3] = 0;
    *(int **)((int)this + 0xc) = param_1;
    bVar1 = FUN_100617e8(this,(uint)puVar3,0,(int)piVar2,local_70,local_6c,'\0');
    if (bVar1) {
      (**(code **)(**(int **)((int)this + 0xc) + 4))(*(int **)((int)this + 0xc));
    }
    else {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return bVar1;
}


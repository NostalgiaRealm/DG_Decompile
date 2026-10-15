/*
 * FUN_100113ce at 100113ce
 * char __thiscall FUN_100113ce(void * this, uint param_1, int param_2, int param_3, int param_4, char param_5, int param_6, char param_7)
 * Address ranges: 100113ce-10011534
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_100113ce(void *this,uint param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
            char param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  char local_5;
  
  local_5 = '\0';
  if (((param_1 != 0) && (param_3 != 0xff)) &&
     (iVar2 = FUN_1000fe52(param_3,param_2 == 7 || param_2 == 2), iVar2 == 0)) {
    return '\0';
  }
  bVar1 = true;
  if (param_2 == 6) {
    piVar4 = *(int **)((int)this + 0x32dc);
    iVar2 = piVar4[0x4a];
    if (iVar2 == -1) goto LAB_1001148b;
    iVar2 = (**(code **)(*piVar4 + 0x2c))(iVar2);
    if (*(int *)(iVar2 + 0x18) == *(int *)((int)this + 0x2a20)) {
      bVar5 = *(int *)(iVar2 + 0x1c) == *(int *)((int)this + 0x2a24);
LAB_10011481:
      if (bVar5) goto LAB_1001148b;
    }
  }
  else {
    if (param_2 != 7) goto LAB_1001148b;
    piVar4 = *(int **)((int)this + 0x32dc);
    iVar2 = piVar4[0x4b];
    if (iVar2 == -1) goto LAB_1001148b;
    iVar2 = (**(code **)(*piVar4 + 0x2c))(iVar2);
    if (*(int *)(iVar2 + 0x18) == *(int *)((int)this + 0x2a34)) {
      bVar5 = *(int *)(iVar2 + 0x1c) == *(int *)((int)this + 0x2a38);
      goto LAB_10011481;
    }
  }
  bVar1 = false;
LAB_1001148b:
  piVar4 = (int *)((int)this + 0x32dc);
  (**(code **)(*(int *)this + 0x17c))();
  if (bVar1) {
    FUN_10010bce(this,param_2);
    uVar3 = FUN_1001059c((void *)*piVar4,param_2);
    if (uVar3 != 0xffffffff) {
      iVar2 = (**(code **)(*(int *)*piVar4 + 0x2c))(uVar3);
      if ((param_2 == *(int *)((int)this + 0x29e0)) || (*(char *)(iVar2 + 0x48) != '\0')) {
        (**(code **)(*(int *)this + 0x170))();
      }
      local_5 = FUN_10010a29(this,param_1,uVar3,param_3,param_4,param_5,param_6,param_7,0,0,0);
      if (local_5 != '\0') {
        if (param_2 == 6) {
          *(uint *)(*piVar4 + 0x128) = uVar3;
        }
        else if (param_2 == 7) {
          *(uint *)(*piVar4 + 300) = uVar3;
        }
      }
    }
  }
  (**(code **)(*(int *)this + 0x180))();
  return local_5;
}


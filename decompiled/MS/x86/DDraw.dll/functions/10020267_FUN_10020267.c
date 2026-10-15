/*
 * FUN_10020267 at 10020267
 * undefined __thiscall FUN_10020267(void * this, int * param_1)
 * Address ranges: 10020267-10020315
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020267(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar6 = param_1[3] - param_1[1];
  uVar5 = param_1[2] - *param_1;
  if ((uVar5 != *(uint *)((int)this + 0x90)) || (uVar6 != *(uint *)((int)this + 0x94))) {
    *(uint *)((int)this + 0x94) = uVar6;
    *(uint *)((int)this + 0x90) = uVar5;
    param_1 = (int *)0x0;
    local_8 = 0;
    uVar4 = FUN_100066e9(uVar5,uVar6,&local_10,&local_c,&param_1,&local_8);
    iVar2 = local_8;
    if ((char)uVar4 != '\0') {
      piVar1 = (int *)((int)this + 0x8c);
      if ((*(int **)((int)this + 0x88) != param_1) || (*piVar1 != local_8)) {
        cVar3 = (**(code **)(*(int *)this + 0x98))(param_1,local_8,local_10,local_c);
        if (cVar3 == '\0') {
          *piVar1 = 0;
          *(undefined4 *)((int)this + 0x88) = 0;
        }
        else {
          *(int **)((int)this + 0x88) = param_1;
          *piVar1 = iVar2;
        }
      }
    }
  }
  return;
}


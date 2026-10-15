/*
 * FUN_10027ea9 at 10027ea9
 * int * __thiscall FUN_10027ea9(void * this, int * param_1, uint param_2, uint param_3)
 * Address ranges: 10027ea9-10027f71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10027ea9(void *this,int *param_1,uint param_2,uint param_3)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_6c [10];
  undefined4 uStack_44;
  uint uStack_40;
  uint local_1c;
  uint local_18;
  undefined8 local_14;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = param_2 & *(uint *)((int)this + 8);
  uVar1 = param_3 & *(uint *)((int)this + 0xc);
  local_c = this;
  FUN_1005c9cc(param_1,0,0x2c);
  this_00 = (void *)((int)this + 0x10);
  local_1c = local_8;
  local_14 = 0;
  local_18 = uVar1;
  uVar2 = FUN_10028044(this_00,&local_1c);
  if (uVar2 != *(uint *)((int)this + 0x18)) {
    uStack_40 = 0x10027f1c;
    uVar2 = FUN_1001990a((void *)(uVar2 * 0x40 + *(int *)((int)this + 0x14)),local_1c,local_18,
                         (uint)local_14,local_14._4_4_);
    this = local_c;
    if (((char)uVar2 != '\0') && ((int *)(extraout_ECX + 0x10) != (int *)0x0)) {
      piVar4 = (int *)(extraout_ECX + 0x10);
      piVar5 = param_1;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      return param_1;
    }
  }
  uStack_40 = local_8;
  uStack_44 = 0x10027f47;
  iVar3 = (*(code *)**(undefined4 **)this)();
  *param_1 = iVar3;
  if (iVar3 != 0) {
    piVar4 = param_1;
    piVar5 = aiStack_6c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_10027de8(this_00,local_8,uVar1);
  }
  return param_1;
}


/*
 * FUN_1004c576 at 1004c576
 * int * __thiscall FUN_1004c576(void * this, int * param_1, uint param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 1004c576-1004c648
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1004c576(void *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = param_2 & *(uint *)((int)this + 8);
  uVar1 = param_3 & *(uint *)((int)this + 0xc);
  local_c = this;
  FUN_100cfed0(param_1,0,0x2c);
  this_00 = (void *)((int)this + 0x10);
  local_1c = local_8;
  local_14 = param_4;
  local_10 = param_5;
  local_18 = uVar1;
  uVar2 = FUN_1004c71b(this_00,&local_1c);
  if (uVar2 != *(uint *)((int)this + 0x18)) {
    uStack_40 = 0x1004c5ed;
    uVar2 = FUN_10037088((void *)(uVar2 * 0x40 + *(int *)((int)this + 0x14)),local_1c,local_18,
                         local_14,local_10);
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
  uStack_44 = 0x1004c61a;
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
    FUN_1004c459(this_00,local_8,uVar1,param_4,param_5);
  }
  return param_1;
}


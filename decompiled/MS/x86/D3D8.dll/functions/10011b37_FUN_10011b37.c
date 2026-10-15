/*
 * FUN_10011b37 at 10011b37
 * undefined1 __thiscall FUN_10011b37(void * this, int param_1, int * param_2)
 * Address ranges: 10011b37-10011c06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10011b37(void *this,int param_1,int *param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_ECX;
  int iVar5;
  int *piVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [7];
  
  uVar1 = 0;
  if (param_1 == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = *(undefined4 *)((int)this + 0x98);
    local_28 = *(undefined4 *)((int)this + 0x9c);
    local_24 = *(undefined4 *)((int)this + 0xa0);
    if (param_2 == (int *)0x0) {
      piVar4 = FUN_10011466((void *)((int)this + 0x78),local_20,local_38);
      uVar1 = 1;
    }
    else {
      local_50 = *param_2;
      local_4c = param_2[1];
      local_48 = param_2[4];
      local_44 = param_2[2];
      local_40 = param_2[3];
      local_3c = param_2[5];
      puVar2 = (uint *)FUN_1001100d(local_38,local_20,&local_50);
      uVar3 = FUN_10010fcf(&local_50,puVar2);
      uVar1 = (undefined1)uVar3;
      piVar4 = FUN_10011466((void *)((int)this + 0x78),local_20,extraout_ECX);
    }
    piVar6 = (int *)((int)this + 0x78);
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
  }
  return uVar1;
}


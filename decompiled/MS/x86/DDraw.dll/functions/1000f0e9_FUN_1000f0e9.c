/*
 * FUN_1000f0e9 at 1000f0e9
 * undefined4 * __thiscall FUN_1000f0e9(void * this, undefined4 * param_1, int param_2)
 * Address ranges: 1000f0e9-1000f1f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000f0e9(void *this,undefined4 *param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24 [7];
  void *local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)((int)this + 0xc);
  param_1[2] = 0;
  local_8 = this;
  piVar2 = (int *)FUN_1004b6b3((void *)(iVar5 + 0x520),*(int *)((int)this + 0x10),param_2);
  if (piVar2 != (int *)0x0) {
    if ((*(int *)(param_2 + 0x20) == 0x2d) || (*(int *)(param_2 + 0x20) == 0x2c)) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    uVar3 = FUN_1004bbbf(*(void **)((int)this + 0x14),uVar3);
    if (uVar3 == 0xffffffff) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    else {
      local_30 = 5;
      local_34 = *(undefined4 *)(param_2 + 0x20);
      local_2c = 0x1688;
      puVar6 = local_24;
      for (iVar5 = 6; pvVar1 = local_8, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_24[0] = 0;
      local_24[2] = 0;
      local_24[4] = 0;
      local_24[1] = 1;
      local_24[3] = 1;
      FUN_1004be7b(*(void **)((int)local_8 + 0x14),&param_2,uVar3,0);
      piVar4 = *(int **)(*(int *)((int)pvVar1 + 0x10) * 0x18 + 0x520 + *(int *)((int)pvVar1 + 0xc));
      (**(code **)(*piVar4 + 0x48))(piVar4,piVar2,&local_34,param_2);
      this_00 = (void *)FUN_10060bca(0x3c);
      if (this_00 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_1001488d(this_00,*(int *)((int)pvVar1 + 0xc),*(int *)((int)pvVar1 + 0x10));
      }
      param_1[2] = piVar4;
      FUN_10014f3c(piVar4,piVar2,uVar3,0xffffffff,0);
      *param_1 = piVar2;
      param_1[1] = uVar3;
    }
  }
  return param_1;
}


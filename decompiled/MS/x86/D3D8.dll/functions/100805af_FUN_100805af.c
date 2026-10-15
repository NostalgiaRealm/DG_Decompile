/*
 * FUN_100805af at 100805af
 * undefined __thiscall FUN_100805af(void * this, uint * param_1)
 * Address ranges: 100805af-10080682
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100805af(void *this,uint *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_c [2];
  
  puVar1 = (undefined4 *)FUN_1008075b(this,param_1 + 10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100ad475(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      local_c[0] = puVar1;
      FUN_10080798(this,param_1 + 10,local_c);
      puVar1 = local_c[0];
      goto LAB_10080600;
    }
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
LAB_10080600:
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_10080806(puVar1,param_1);
      (**(code **)(*(int *)param_1[1] + 4))(0);
      if ((char)uVar2 != '\0') goto LAB_10080620;
    }
  }
  FUN_1008033e((int)param_1);
LAB_10080620:
  local_c[0] = (undefined4 *)*param_1;
  uVar3 = FUN_10080c3c((void *)((int)this + 0x14),(uint)local_c[0],0);
  uVar4 = *(uint *)((int)this + 0x1c);
  if (uVar3 != uVar4) {
    if ((*(undefined4 **)(uVar3 * 0x40 + *(int *)((int)this + 0x18)) == local_c[0]) &&
       (*(int *)(uVar3 * 0x40 + 4 + *(int *)((int)this + 0x18)) == 0)) {
      while (uVar3 = uVar3 + 1, uVar3 < uVar4) {
        puVar1 = (undefined4 *)(uVar3 * 0x40 + *(int *)((int)this + 0x18));
        puVar6 = puVar1 + -0x10;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = *(uint *)((int)this + 0x1c);
      }
      *(uint *)((int)this + 0x1c) = uVar4 - 1;
    }
  }
  return;
}


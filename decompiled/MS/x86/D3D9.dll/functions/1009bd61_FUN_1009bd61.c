/*
 * FUN_1009bd61 at 1009bd61
 * undefined __thiscall FUN_1009bd61(void * this, uint * param_1)
 * Address ranges: 1009bd61-1009be49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009bd61(void *this,uint *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_10;
  uint uStack_c;
  
  puVar1 = (undefined4 *)FUN_1009bf28(this,param_1 + 0x88);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100cfd55(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      local_10 = puVar1;
      FUN_1009bf65(this,param_1 + 0x88,&local_10);
      puVar1 = local_10;
      goto LAB_1009bdb5;
    }
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
LAB_1009bdb5:
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_1009bfd3(puVar1,param_1);
      (**(code **)(*(int *)param_1[1] + 4))(0);
      if ((char)uVar2 != '\0') goto LAB_1009bdd5;
    }
  }
  FUN_1009bb0a((int)param_1);
LAB_1009bdd5:
  local_10 = (undefined4 *)*param_1;
  uStack_c = (int)local_10 >> 0x1f;
  uVar3 = FUN_1009c4ff((void *)((int)this + 0x14),(uint)local_10,uStack_c);
  uVar4 = *(uint *)((int)this + 0x1c);
  if (uVar3 != uVar4) {
    if ((*(undefined4 **)(uVar3 * 0x238 + *(int *)((int)this + 0x18)) == local_10) &&
       (*(uint *)(uVar3 * 0x238 + 4 + *(int *)((int)this + 0x18)) == uStack_c)) {
      while (uVar3 = uVar3 + 1, uVar3 < uVar4) {
        puVar1 = (undefined4 *)(uVar3 * 0x238 + *(int *)((int)this + 0x18));
        puVar6 = puVar1 + -0x8e;
        for (iVar5 = 0x8e; iVar5 != 0; iVar5 = iVar5 + -1) {
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


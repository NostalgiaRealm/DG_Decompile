/*
 * FUN_1009b8fa at 1009b8fa
 * undefined __thiscall FUN_1009b8fa(void * this, uint * param_1)
 * Address ranges: 1009b8fa-1009b9d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009b8fa(void *this,uint *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *local_14;
  uint local_10;
  void *local_c;
  
  puVar1 = (undefined4 *)FUN_1009bf28(this,param_1 + 0x21a);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100cfd55(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      local_14 = puVar1;
      FUN_1009bf65(this,param_1 + 0x21a,&local_14);
      puVar1 = local_14;
      goto LAB_1009b94a;
    }
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
LAB_1009b94a:
    if ((puVar1 != (undefined4 *)0x0) && (uVar2 = FUN_1009c12f(puVar1,param_1), (char)uVar2 != '\0')
       ) goto LAB_1009b95e;
  }
  FUN_1009b4ff((int)param_1);
LAB_1009b95e:
  local_14 = (undefined4 *)*param_1;
  local_c = (void *)((int)this + 0x14);
  local_10 = (int)local_14 >> 0x1f;
  uVar3 = FUN_1009c67c(local_c,(uint)local_14,local_10);
  uVar4 = *(uint *)((int)this + 0x1c);
  if (uVar3 != uVar4) {
    if ((*(undefined4 **)(uVar3 * 0x880 + *(int *)((int)this + 0x18)) == local_14) &&
       (*(uint *)(uVar3 * 0x880 + 4 + *(int *)((int)this + 0x18)) == local_10)) {
      uVar3 = uVar3 + 1;
      pvVar7 = (void *)((int)this + 0x14);
      if (uVar3 < uVar4) {
        do {
          puVar1 = (undefined4 *)(uVar3 * 0x880 + *(int *)((int)this + 0x18));
          uVar3 = uVar3 + 1;
          puVar6 = puVar1 + -0x220;
          for (iVar5 = 0x220; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar6 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar6 = puVar6 + 1;
          }
          uVar4 = *(uint *)((int)this + 0x1c);
          pvVar7 = local_c;
        } while (uVar3 < uVar4);
      }
      *(uint *)((int)pvVar7 + 8) = uVar4 - 1;
    }
  }
  return;
}


/*
 * FUN_10080163 at 10080163
 * undefined __thiscall FUN_10080163(void * this, undefined4 * param_1)
 * Address ranges: 10080163-1008025e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10080163(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *local_10;
  void *local_c;
  
  if (param_1[0x25d] != 0) {
    puVar2 = (undefined4 *)FUN_1008075b(this,param_1 + 0x262);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_100ad475(0xc);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        local_10 = puVar2;
        FUN_10080798(this,param_1 + 0x262,&local_10);
        puVar2 = local_10;
      }
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    bVar1 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = FUN_1008090a(puVar2,param_1);
      bVar1 = (byte)uVar3 ^ 1;
    }
    if (bVar1 == 0) {
      FUN_1007fcb1(this,(int)param_1);
      goto LAB_100801ee;
    }
  }
  FUN_1007fce8(this,(int)param_1);
LAB_100801ee:
  local_10 = (undefined4 *)param_1[1];
  local_c = (void *)((int)this + 0x14);
  uVar4 = FUN_10080db8(local_c,(uint)local_10,0);
  uVar5 = *(uint *)((int)this + 0x1c);
  if (uVar4 != uVar5) {
    if ((*(undefined4 **)(uVar4 * 0x9a0 + *(int *)((int)this + 0x18)) == local_10) &&
       (*(int *)(uVar4 * 0x9a0 + 4 + *(int *)((int)this + 0x18)) == 0)) {
      uVar4 = uVar4 + 1;
      pvVar8 = (void *)((int)this + 0x14);
      if (uVar4 < uVar5) {
        do {
          puVar2 = (undefined4 *)(uVar4 * 0x9a0 + *(int *)((int)this + 0x18));
          uVar4 = uVar4 + 1;
          puVar7 = puVar2 + -0x268;
          for (iVar6 = 0x268; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar5 = *(uint *)((int)this + 0x1c);
          pvVar8 = local_c;
        } while (uVar4 < uVar5);
      }
      *(uint *)((int)pvVar8 + 8) = uVar5 - 1;
    }
  }
  return;
}


/*
 * FUN_10030c59 at 10030c59
 * undefined4 __thiscall FUN_10030c59(void * this, int param_1)
 * Address ranges: 10030c59-10030dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10030c59(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  uint local_14;
  undefined4 *puVar7;
  
  uVar11 = FUN_1002b7cf(param_1);
  puVar5 = (undefined4 *)uVar11;
  uVar6 = *(uint *)((int)((ulonglong)uVar11 >> 0x20) + 0x1b8) >> 0xc;
  (**(code **)*puVar5)();
  bVar3 = FUN_10030a50(this,(int)puVar5);
  puVar7 = (undefined4 *)CONCAT31(extraout_var,bVar3);
  puVar2 = puVar5;
  do {
    if (bVar3 == 0) {
LAB_10030dbf:
      return CONCAT31((int3)((uint)puVar7 >> 8),bVar3);
    }
    if (puVar2 == (undefined4 *)0x0) {
      if ((uVar6 & 1) != 0) {
        piVar9 = DAT_1006c238;
        for (iVar1 = puVar5[0x44]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x110)) {
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50) = *(undefined4 *)(puVar5[1] + 0x50);
          piVar10 = (int *)0x0;
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 0x24))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),iVar1);
            piVar10 = DAT_1006c238;
          }
          piVar9 = piVar10;
        }
        local_14 = 0;
        do {
          for (iVar1 = puVar5[local_14 + 0x48]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x110)) {
            *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50) = *(undefined4 *)(puVar5[1] + 0x50);
            piVar10 = (int *)0x0;
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 0x24))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),iVar1)
              ;
              piVar10 = DAT_1006c238;
            }
            piVar9 = piVar10;
          }
          local_14 = local_14 + 1;
          puVar7 = puVar5;
        } while (local_14 < 5);
      }
      goto LAB_10030dbf;
    }
    if ((uVar6 & 1) == 0) {
      bVar3 = FUN_10030a50(this,(int)puVar2);
    }
    puVar7 = (undefined4 *)0x0;
    if (puVar2[0x46] != 0) {
      bVar4 = FUN_10030a50(this,puVar2[0x46]);
      puVar7 = (undefined4 *)CONCAT31(extraout_var_00,bVar4);
      bVar3 = bVar3 & bVar4;
    }
    uVar8 = 0;
    do {
      puVar7 = (undefined4 *)CONCAT31((int3)((uint)puVar7 >> 8),bVar3);
      if ((puVar2[uVar8 + 0x48] != 0) &&
         (iVar1 = *(int *)(puVar2[uVar8 + 0x48] + 0x118), iVar1 != 0)) {
        bVar4 = FUN_10030a50(this,iVar1);
        puVar7 = (undefined4 *)CONCAT31(extraout_var_01,bVar4 & bVar3);
      }
      uVar8 = uVar8 + 1;
      bVar3 = (byte)puVar7;
    } while (uVar8 < 5);
    puVar2 = (undefined4 *)puVar2[0x44];
  } while( true );
}


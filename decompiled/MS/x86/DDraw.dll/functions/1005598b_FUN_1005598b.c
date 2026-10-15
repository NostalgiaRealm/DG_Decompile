/*
 * FUN_1005598b at 1005598b
 * undefined4 __thiscall FUN_1005598b(void * this, int param_1, uint param_2)
 * Address ranges: 1005598b-10055ae0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1005598b(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  void *pvVar7;
  int *piVar8;
  void *pvStack_34;
  void *local_30;
  void *local_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  uVar6 = 1;
  local_28 = *(int *)(param_1 + 8) * 0x18;
  pvVar7 = (void *)(*(int *)(param_1 + 8) * 0x16c0 + (int)this);
  puVar1 = *(undefined4 **)(param_1 + 4);
  local_30 = this;
  local_2c = pvVar7;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_10066c08,param_1 + 0xd6c);
  }
  piVar8 = *(int **)(param_1 + 0xd6c);
  uVar3 = (**(code **)(*piVar8 + 0x90))();
  *(undefined4 *)(param_1 + 0xd68) = uVar3;
  uVar4 = FUN_1004bbbf(*(void **)((int)pvVar7 + 0x1c9c),2);
  *(uint *)(param_1 + 0xd78) = uVar4;
  if (uVar4 != 0xffffffff) {
    uStack_20 = 4;
    uVar4 = 0;
    uStack_1c = 0;
    uStack_14 = 0;
    uStack_24 = *(undefined4 *)(&DAT_10062fac + *(int *)(param_1 + 0x2c) * 4);
    do {
      iVar5 = (**(code **)(**(int **)(param_1 + 4) + 0x24))
                        (*(int **)(param_1 + 4),uVar4,&DAT_10063c78,param_1 + 0xd70 + uVar4 * 4);
      if (iVar5 < 0) {
        if (uVar4 != 0) {
          do {
            piVar8 = *(int **)(param_1 + 0xd6c + uVar4 * 4);
            (**(code **)(*piVar8 + 8))(piVar8);
          } while( true );
        }
        uVar6 = 0;
        uVar4 = FUN_1004bcb3(*(void **)(unaff_EDI + 0x1c9c),*(int **)(param_1 + 0xd78),2,(int *)0x0,
                             0,0);
        *(undefined4 *)(param_1 + 0xd78) = 0xffffffff;
        goto LAB_10055ad6;
      }
      FUN_1004be7b(*(void **)(unaff_EDI + 0x1c9c),(int *)&stack0xffffffc8,*(uint *)(param_1 + 0xd78)
                   ,uVar4);
      piVar2 = *(int **)((int)piVar8 + unaff_ESI + 0x520);
      (**(code **)(*piVar2 + 0x50))
                (piVar2,*(undefined4 *)(param_1 + 0xd70 + uVar4 * 4),&pvStack_34,unaff_EBX);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
    uVar4 = FUN_10055477(pvStack_34,param_1,param_2);
  }
LAB_10055ad6:
  return CONCAT31((int3)(uVar4 >> 8),uVar6);
}


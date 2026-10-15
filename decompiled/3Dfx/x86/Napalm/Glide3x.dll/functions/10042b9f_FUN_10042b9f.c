/*
 * FUN_10042b9f at 10042b9f
 * undefined4 __fastcall FUN_10042b9f(void * param_1)
 * Address ranges: 10042b9f-10042ddd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10042b9f(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  byte *pbVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar8 = 0;
  bVar9 = *(int *)((int)param_1 + 0x924) == 0;
  if (*(int *)((int)param_1 + 0x924) != 0) {
    do {
      piVar2 = *(int **)(*(int *)((int)param_1 + 0xc) * 0x18 + *(int *)((int)param_1 + 8));
      in_EAX = (**(code **)(*piVar2 + 0x24))
                         (piVar2,*(undefined4 *)((int)param_1 + 0x91c),&DAT_1005ab2c,
                          (int)param_1 + uVar8 * 4 + 0x63c);
      if ((int)in_EAX < 0) break;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((int)param_1 + 0x924));
    bVar9 = uVar8 == *(uint *)((int)param_1 + 0x924);
  }
  if (!bVar9) {
LAB_10042db3:
    for (iVar4 = uVar8 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = *(int **)((int)param_1 + iVar4 * 4 + 0x638);
      in_EAX = (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)((int)param_1 + iVar4 * 4 + 0x638) = 0;
    }
    return in_EAX & 0xffffff00;
  }
  puVar1 = (undefined4 *)((int)param_1 + 0x638);
  piVar2 = *(int **)(*(int *)((int)param_1 + 0xc) * 0x18 + *(int *)((int)param_1 + 8));
  in_EAX = (**(code **)(*piVar2 + 0x30))
                     (piVar2,0,*(undefined4 *)((int)param_1 + 0x91c),
                      *(undefined4 *)((int)param_1 + 0x63c),0,&DAT_1005ab1c,puVar1);
  if ((int)in_EAX < 0) goto LAB_10042db3;
  *(undefined4 *)((int)param_1 + 0x920) = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  iVar4 = (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_100572f0,&local_8);
  piVar2 = (int *)*puVar1;
  if (iVar4 < 0) {
    iVar4 = (**(code **)*piVar2)(piVar2,&DAT_100572e0,&local_c);
    piVar2 = (int *)*puVar1;
    if (iVar4 < 0) {
      iVar4 = (**(code **)*piVar2)(piVar2,&DAT_100572d0,&local_10);
      piVar2 = (int *)*puVar1;
      if (iVar4 < 0) {
        iVar4 = (**(code **)*piVar2)(piVar2,&DAT_10057280,&local_14);
        piVar2 = (int *)*puVar1;
        if (iVar4 < 0) {
          iVar4 = (**(code **)*piVar2)(piVar2,&DAT_10057270,&local_18);
          piVar2 = (int *)*puVar1;
          if (iVar4 < 0) {
            iVar4 = (**(code **)*piVar2)(piVar2,&DAT_10057340,&local_1c);
            piVar2 = (int *)*puVar1;
            if (iVar4 < 0) {
              iVar4 = (**(code **)*piVar2)(piVar2,&DAT_10057330,&local_20);
              if (iVar4 < 0) goto LAB_10042d60;
              (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
              *(undefined4 *)((int)param_1 + 0x920) = 1;
              uVar6 = local_20;
            }
            else {
              (*(code *)((undefined4 *)*piVar2)[2])(piVar2);
              *(undefined4 *)((int)param_1 + 0x920) = 2;
              uVar6 = local_1c;
            }
          }
          else {
            (*(code *)((undefined4 *)*piVar2)[2])(piVar2);
            *(undefined4 *)((int)param_1 + 0x920) = 3;
            uVar6 = local_18;
          }
        }
        else {
          (*(code *)((undefined4 *)*piVar2)[2])(piVar2);
          *(undefined4 *)((int)param_1 + 0x920) = 4;
          uVar6 = local_14;
        }
      }
      else {
        (*(code *)((undefined4 *)*piVar2)[2])(piVar2);
        *(undefined4 *)((int)param_1 + 0x920) = 5;
        uVar6 = local_10;
      }
    }
    else {
      (*(code *)((undefined4 *)*piVar2)[2])(piVar2);
      *(undefined4 *)((int)param_1 + 0x920) = 6;
      uVar6 = local_c;
    }
  }
  else {
    (*(code *)((undefined4 *)*piVar2)[2])(piVar2);
    *(undefined4 *)((int)param_1 + 0x920) = 7;
    uVar6 = local_8;
  }
  *puVar1 = uVar6;
LAB_10042d60:
  if (*(int *)((int)param_1 + 0x8e0) != 0) {
    uVar10 = FUN_1003d0bf(*(int *)((int)param_1 + 0x8e0));
    *(undefined8 *)((int)param_1 + 0x938) = uVar10;
  }
  iVar4 = *(int *)((int)param_1 + 0x900);
  if ((iVar4 != 0) && (1 < *(uint *)((int)param_1 + 0x920))) {
    uVar5 = ~*(uint *)(iVar4 + 0xc);
    uVar8 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    uVar7 = 0xffffffff;
    if (uVar5 != 0) {
      pbVar3 = (byte *)(iVar4 + 0xc + ((int)uVar8 >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (uVar8 & 7);
      uVar7 = uVar8;
    }
    *(uint *)((int)param_1 + 0x910) = uVar7;
  }
  uVar6 = FUN_1004280b(param_1,0);
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


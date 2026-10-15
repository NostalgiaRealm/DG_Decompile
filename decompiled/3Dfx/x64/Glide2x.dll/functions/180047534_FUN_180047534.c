/*
 * FUN_180047534 at 180047534
 * undefined8 __fastcall FUN_180047534(longlong param_1)
 * Address ranges: 180047534-18004782b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180047534(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  ulonglong in_RAX;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  uVar11 = 0;
  if (*(int *)(param_1 + 0xb64) != 0) {
    do {
      plVar3 = *(longlong **)
                ((ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + *(longlong *)(param_1 + 0x10));
      iVar6 = (**(code **)(*plVar3 + 0x48))
                        (plVar3,*(undefined4 *)(param_1 + 0xb5c),&DAT_1800642c0,
                         param_1 + ((ulonglong)uVar11 + 0xd2) * 8);
      in_RAX = 0;
      if (iVar6 < 0) break;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0xb64));
  }
  if (uVar11 != *(uint *)(param_1 + 0xb64)) {
LAB_1800477fc:
    uVar11 = uVar11 + 1;
    uVar12 = (ulonglong)uVar11;
    while (uVar11 != 0) {
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
      in_RAX = (**(code **)(**(longlong **)(param_1 + 0x690 + uVar12 * 8) + 0x10))();
      *(undefined8 *)(param_1 + 0x690 + uVar12 * 8) = 0;
    }
    return in_RAX & 0xffffffffffffff00;
  }
  puVar1 = (undefined8 *)(param_1 + 0x688);
  plVar3 = *(longlong **)
            ((ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + *(longlong *)(param_1 + 0x10));
  iVar6 = (**(code **)(*plVar3 + 0x60))
                    (plVar3,0,*(undefined4 *)(param_1 + 0xb5c),*(undefined8 *)(param_1 + 0x690),0,
                     &DAT_1800642b0,puVar1);
  in_RAX = 0;
  if (iVar6 < 0) goto LAB_1800477fc;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  local_res8[0] = 0;
  local_res18 = 0;
  local_res20 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  iVar6 = (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&DAT_1800605d0,local_res8);
  puVar4 = *(undefined8 **)*puVar1;
  if (iVar6 < 0) {
    iVar6 = (*(code *)*puVar4)((longlong *)*puVar1,&DAT_1800605c0,&local_res18);
    puVar4 = *(undefined8 **)*puVar1;
    if (iVar6 < 0) {
      iVar6 = (*(code *)*puVar4)((longlong *)*puVar1,&DAT_1800605b0,&local_res20);
      puVar4 = *(undefined8 **)*puVar1;
      if (iVar6 < 0) {
        iVar6 = (*(code *)*puVar4)((longlong *)*puVar1,&DAT_180060560,&local_48);
        puVar4 = *(undefined8 **)*puVar1;
        if (iVar6 < 0) {
          iVar6 = (*(code *)*puVar4)((longlong *)*puVar1,&DAT_180060550,&local_40);
          puVar4 = *(undefined8 **)*puVar1;
          if (iVar6 < 0) {
            iVar6 = (*(code *)*puVar4)((longlong *)*puVar1,&DAT_180060620,&local_38);
            puVar4 = *(undefined8 **)*puVar1;
            if (iVar6 < 0) {
              iVar6 = (*(code *)*puVar4)((longlong *)*puVar1,&DAT_180060610,local_30);
              if (iVar6 < 0) goto LAB_180047770;
              (**(code **)(*(longlong *)*puVar1 + 0x10))();
              *(undefined4 *)(param_1 + 0xb60) = 1;
              uVar8 = local_30[0];
            }
            else {
              (*(code *)puVar4[2])();
              *(undefined4 *)(param_1 + 0xb60) = 2;
              uVar8 = local_38;
            }
          }
          else {
            (*(code *)puVar4[2])();
            *(undefined4 *)(param_1 + 0xb60) = 3;
            uVar8 = local_40;
          }
        }
        else {
          (*(code *)puVar4[2])();
          *(undefined4 *)(param_1 + 0xb60) = 4;
          uVar8 = local_48;
        }
      }
      else {
        (*(code *)puVar4[2])();
        *(undefined4 *)(param_1 + 0xb60) = 5;
        uVar8 = local_res20;
      }
    }
    else {
      (*(code *)puVar4[2])();
      *(undefined4 *)(param_1 + 0xb60) = 6;
      uVar8 = local_res18;
    }
  }
  else {
    (*(code *)puVar4[2])();
    *(undefined4 *)(param_1 + 0xb60) = 7;
    uVar8 = local_res8[0];
  }
  *puVar1 = uVar8;
LAB_180047770:
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    LOCK();
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0xb10) + 0x28);
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0xb78) = lVar2 + 1;
  }
  lVar2 = *(longlong *)(param_1 + 0xb40);
  if ((lVar2 != 0) && (1 < *(uint *)(param_1 + 0xb60))) {
    uVar7 = ~*(uint *)(lVar2 + 0x18);
    uVar11 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    uVar10 = 0xffffffff;
    if (uVar7 != 0) {
      pbVar5 = (byte *)(lVar2 + 0x18 + ((longlong)(int)uVar11 >> 3));
      *pbVar5 = *pbVar5 | '\x01' << (uVar11 & 7);
      uVar10 = uVar11;
    }
    *(uint *)(param_1 + 0xb50) = uVar10;
  }
  puVar9 = FUN_18005f374((undefined1 *)(param_1 + 0x20),0,0x660);
  *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x66c) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x668) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
  return CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
}


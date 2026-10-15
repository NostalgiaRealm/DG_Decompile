/*
 * FUN_18004a940 at 18004a940
 * undefined8 __cdecl FUN_18004a940(longlong param_1)
 * Address ranges: 18004a940-18004ac97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004a940(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  ulonglong uVar9;
  
  uVar9 = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0xb64) != 0) {
    do {
      uVar8 = (uint)uVar9;
      plVar3 = *(longlong **)
                (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x20);
      iVar2 = (**(code **)(*plVar3 + 0x48))
                        (plVar3,*(undefined4 *)(param_1 + 0xb5c),&DAT_1800652d0,
                         param_1 + uVar9 * 8 + 0x690);
      if (iVar2 < 0) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(param_1 + 0xb64));
  }
  if ((uVar8 != *(uint *)(param_1 + 0xb64)) ||
     (plVar3 = *(longlong **)
                (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x20),
     iVar2 = (**(code **)(*plVar3 + 0x60))
                       (plVar3,0,*(undefined4 *)(param_1 + 0xb5c),*(undefined8 *)(param_1 + 0x690),0
                        ,&DAT_1800652c0,param_1 + 0x688), iVar2 < 0)) {
    uVar8 = uVar8 + 1;
    while (uVar8 != 0) {
      uVar8 = uVar8 - 1;
      (**(code **)(**(longlong **)(param_1 + 0x690 + (ulonglong)uVar8 * 8) + 0x10))();
      *(undefined8 *)(param_1 + 0x690 + (ulonglong)uVar8 * 8) = 0;
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb60) = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x688))
                    (*(undefined8 **)(param_1 + 0x688),&DAT_1800614e0,&local_60);
  puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x688);
  if (iVar2 < 0) {
    iVar2 = (*(code *)*puVar6)(*(undefined8 **)(param_1 + 0x688),&DAT_1800614d0,&local_58);
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x688);
    if (iVar2 < 0) {
      iVar2 = (*(code *)*puVar6)(*(undefined8 **)(param_1 + 0x688),&DAT_1800614c0,&local_50);
      puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x688);
      if (iVar2 < 0) {
        iVar2 = (*(code *)*puVar6)(*(undefined8 **)(param_1 + 0x688),&DAT_180061580,&local_48);
        puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x688);
        if (iVar2 < 0) {
          iVar2 = (*(code *)*puVar6)(*(undefined8 **)(param_1 + 0x688),&DAT_180061570,&local_40);
          puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x688);
          if (iVar2 < 0) {
            iVar2 = (*(code *)*puVar6)(*(undefined8 **)(param_1 + 0x688),&DAT_180061530,&local_38);
            puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x688);
            if (iVar2 < 0) {
              iVar2 = (*(code *)*puVar6)(*(undefined8 **)(param_1 + 0x688),&DAT_180061520,local_30);
              if (-1 < iVar2) {
                (**(code **)(**(longlong **)(param_1 + 0x688) + 0x10))();
                *(undefined4 *)(param_1 + 0xb60) = 1;
                *(undefined8 *)(param_1 + 0x688) = local_30[0];
              }
              goto LAB_18004abbc;
            }
            (*(code *)puVar6[2])();
            *(undefined8 *)(param_1 + 0x688) = local_38;
            uVar5 = 2;
          }
          else {
            (*(code *)puVar6[2])();
            *(undefined8 *)(param_1 + 0x688) = local_40;
            uVar5 = 3;
          }
        }
        else {
          (*(code *)puVar6[2])();
          *(undefined8 *)(param_1 + 0x688) = local_48;
          uVar5 = 4;
        }
      }
      else {
        (*(code *)puVar6[2])();
        *(undefined8 *)(param_1 + 0x688) = local_50;
        uVar5 = 5;
      }
    }
    else {
      (*(code *)puVar6[2])();
      *(undefined8 *)(param_1 + 0x688) = local_58;
      uVar5 = 6;
    }
  }
  else {
    (*(code *)puVar6[2])();
    *(undefined8 *)(param_1 + 0x688) = local_60;
    uVar5 = 7;
  }
  *(undefined4 *)(param_1 + 0xb60) = uVar5;
LAB_18004abbc:
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    uVar4 = FUN_1800608c0((longlong *)(*(longlong *)(param_1 + 0xb10) + 0x28));
    *(undefined8 *)(param_1 + 0xb78) = uVar4;
  }
  if ((*(longlong *)(param_1 + 0xb40) != 0) && (1 < *(uint *)(param_1 + 0xb60))) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xb40) + 0x18);
    uVar8 = (~*puVar1 & 0xaaaaaaaa) >> 1 | (~*puVar1 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar7 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
    uVar8 = 0xffffffff;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)puVar1 + (longlong)((int)uVar7 >> 3)) =
           *(byte *)((longlong)puVar1 + (longlong)((int)uVar7 >> 3)) |
           (byte)(1 << (ulonglong)(uVar7 & 7));
      uVar8 = uVar7;
    }
    *(uint *)(param_1 + 0xb50) = uVar8;
  }
  FUN_180060360((undefined1 *)(param_1 + 0x20),0,0x660);
  *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x668) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x66c) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
  return 1;
}


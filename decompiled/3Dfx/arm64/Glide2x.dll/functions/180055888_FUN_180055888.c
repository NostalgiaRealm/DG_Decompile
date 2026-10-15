/*
 * FUN_180055888 at 180055888
 * undefined8 __cdecl FUN_180055888(longlong * param_1, ulonglong * param_2)
 * Address ranges: 180055888-180055a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180055888(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 local_70 [2];
  ulonglong local_60;
  ulonglong uStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  ulonglong uStack_38;
  undefined4 local_30;
  
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_30 = (undefined4)param_2[6];
  uVar9 = 0;
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  local_4c = (undefined4)(param_2[2] >> 0x20);
  uStack_48 = (undefined4)param_2[3];
  uVar4 = 0;
  if (((int)local_60 - 0x55U & 0xffffff7f) == 0) {
    uVar4 = local_4c;
  }
  if ((int)local_60 < 0x80) {
    uStack_48 = 1;
  }
  _uStack_50 = CONCAT44(uVar4,(int)param_2[2]);
  uStack_44 = (undefined4)(param_2[3] >> 0x20);
  lVar5 = FUN_180055ae8(param_1,&local_60);
  if (lVar5 != 0) {
    uVar8 = 0xffffffff;
    uVar7 = 0;
    do {
      piVar2 = (int *)(lVar5 + uVar7 * 0x30);
      if (*(longlong *)(piVar2 + 8) == 0) {
        uVar1 = (uint)uVar8;
        if ((uint)uVar8 == 0xffffffff) {
          uVar1 = (uint)uVar7;
        }
        uVar8 = (ulonglong)uVar1;
      }
      else if (((((int)param_2[2] == *piVar2) && (*(int *)((longlong)param_2 + 0x1c) == piVar2[1]))
               && (*(int *)((longlong)param_2 + 0x24) == piVar2[3])) &&
              ((int)param_2[6] == piVar2[5])) break;
      uVar1 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
    } while (uVar1 < 0x14);
    if ((int)uVar7 == 0x14) {
      if ((int)uVar8 == -1) {
        uVar8 = 0;
        do {
          if (*(char *)(lVar5 + 0x28 + uVar8 * 0x30) == '\0') goto LAB_1800559bc;
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < 0x14);
      }
      else {
LAB_1800559bc:
        puVar3 = (undefined4 *)(lVar5 + (longlong)(int)uVar8 * 0x30);
        *puVar3 = (int)param_2[2];
        puVar3[1] = *(undefined4 *)((longlong)param_2 + 0x1c);
        puVar3[2] = (int)param_2[4];
        puVar3[3] = *(undefined4 *)((longlong)param_2 + 0x24);
        puVar3[4] = (int)param_2[5];
        puVar3[5] = (int)param_2[6];
        puVar3[6] = *(undefined4 *)((longlong)param_2 + 0x2c);
        if (*(longlong **)(puVar3 + 8) != (longlong *)0x0) {
          FUN_18004f908(param_1[2],*(uint *)(param_1 + 3),*(longlong **)(puVar3 + 8));
        }
        local_70[0] = 0;
        plVar6 = *(longlong **)(param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0);
        (**(code **)(*plVar6 + 0xb8))(plVar6,param_2,local_70);
        *(undefined1 *)(puVar3 + 10) = 1;
        *(undefined8 *)(puVar3 + 8) = local_70[0];
        uVar9 = local_70[0];
      }
    }
    else {
      lVar5 = lVar5 + uVar7 * 0x30;
      *(undefined1 *)(lVar5 + 0x28) = 1;
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
    }
  }
  return uVar9;
}


/*
 * FUN_180053b90 at 180053b90
 * undefined8 __fastcall FUN_180053b90(longlong * param_1, uint * param_2)
 * Address ranges: 180053b90-180053d42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180053b90(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 local_res8;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  
  local_48 = param_2[4];
  uStack_3c = param_2[7];
  uVar6 = 0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 8);
  uStack_30 = *(undefined8 *)(param_2 + 10);
  local_28 = param_2[0xc];
  uStack_44 = param_2[5];
  if ((local_58 - 0x55 & 0xffffff7f) != 0) {
    uStack_44 = 0;
  }
  uStack_40 = param_2[6];
  if ((int)local_58 < 0x80) {
    uStack_40 = 1;
  }
  lVar2 = FUN_180053da4(param_1,&local_58);
  if (lVar2 != 0) {
    uVar5 = 0xffffffff;
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x20 + uVar4 * 0x30) == 0) {
        uVar3 = (uint)uVar4;
        if ((uint)uVar5 != 0xffffffff) {
          uVar3 = (uint)uVar5;
        }
        uVar5 = (ulonglong)uVar3;
      }
      else if ((((param_2[4] == *(uint *)(lVar2 + uVar4 * 0x30)) &&
                (param_2[7] == *(uint *)(lVar2 + 4 + uVar4 * 0x30))) &&
               (param_2[9] == *(uint *)(lVar2 + 0xc + uVar4 * 0x30))) &&
              (param_2[0xc] == *(uint *)(lVar2 + 0x14 + uVar4 * 0x30))) goto LAB_180053c6a;
      uVar3 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < 0x14);
    if (uVar3 == 0x14) {
      if ((int)uVar5 == -1) {
        uVar5 = 0;
        do {
          if (*(char *)(lVar2 + 0x28 + uVar5 * 0x30) == '\0') goto LAB_180053ca2;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < 0x14);
      }
      else {
LAB_180053ca2:
        puVar7 = (uint *)((longlong)(int)uVar5 * 0x30 + lVar2);
        lVar2 = 0;
        *puVar7 = param_2[4];
        do {
          puVar7[lVar2 + 1] = param_2[lVar2 + 7];
          lVar2 = lVar2 + 1;
        } while (lVar2 != 4);
        puVar7[5] = param_2[0xc];
        puVar7[6] = param_2[0xb];
        if (*(longlong **)(puVar7 + 8) != (longlong *)0x0) {
          FUN_18004ca44(param_1[2],*(uint *)(param_1 + 3),*(longlong **)(puVar7 + 8));
        }
        local_res8 = 0;
        plVar1 = *(longlong **)((ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0 + param_1[2]);
        (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,&local_res8);
        *(undefined8 *)(puVar7 + 8) = local_res8;
        *(undefined1 *)(puVar7 + 10) = 1;
        uVar6 = local_res8;
      }
    }
    else {
LAB_180053c6a:
      *(undefined1 *)(lVar2 + 0x28 + uVar4 * 0x30) = 1;
      uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 0x30);
    }
  }
  return uVar6;
}


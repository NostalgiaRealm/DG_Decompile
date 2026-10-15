/*
 * FUN_1800327f8 at 1800327f8
 * undefined __fastcall FUN_1800327f8(longlong param_1, longlong param_2, uint param_3, uint param_4, longlong param_5, int param_6, byte param_7)
 * Address ranges: 1800327f8-180032a9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800327f8(longlong param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  int param_6,byte param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 in_stack_ffffffffffffff40;
  longlong *plVar15;
  longlong local_88;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  
  uVar9 = *(uint *)(param_2 + 0x24);
  uVar2 = *(uint *)(param_2 + 0x20);
  plVar15 = (longlong *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff40 >> 0x20),param_6);
  puVar8 = FUN_180027778(local_78,param_3,param_4,uVar2,uVar9,param_6,param_7);
  cVar1 = *(char *)(param_2 + 0x49);
  uVar3 = *puVar8;
  uVar14 = puVar8[1];
  uVar4 = puVar8[3];
  uVar5 = puVar8[2];
  *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar4 - uVar14 >> 4);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_54 = 1;
  local_5c = uVar2;
  local_58 = uVar9;
  if (param_3 < param_4) {
    local_58 = (uVar5 != 0) + uVar4;
    local_64 = uVar14;
    if (param_5 != 0) {
      plVar15 = &local_88;
      uVar13 = *(undefined8 *)(param_2 + 0x170 + (ulonglong)param_7 * 8);
      plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
      iVar7 = (**(code **)(*plVar6 + 0x70))(plVar6,uVar13,0,3,0,plVar15);
      if (-1 < iVar7) {
        iVar7 = (uint)param_7 * 2 + 2;
        puVar11 = (undefined8 *)((ulonglong)(local_80 * uVar14) + local_88);
        if (uVar3 != 0) {
          FUN_18005ed10((undefined8 *)((ulonglong)(uVar3 * iVar7) + (longlong)puVar11),
                        (undefined8 *)((ulonglong)param_3 + param_5),
                        (ulonglong)((*(int *)(param_2 + 0x20) - uVar3) * iVar7));
          puVar11 = (undefined8 *)((ulonglong)local_80 + (longlong)puVar11);
          uVar14 = uVar14 + 1;
        }
        puVar12 = (undefined8 *)((ulonglong)(uVar14 * iVar7 * param_6) + param_5);
        for (; uVar14 <= uVar4; uVar14 = uVar14 + 1) {
          uVar9 = uVar5;
          if (uVar14 != uVar4) {
            uVar9 = *(uint *)(param_2 + 0x20);
          }
          FUN_18005ed10(puVar11,puVar12,(ulonglong)(iVar7 * uVar9));
          puVar12 = (undefined8 *)((longlong)puVar12 + (ulonglong)(uint)(iVar7 * param_6));
          puVar11 = (undefined8 *)((longlong)puVar11 + (ulonglong)local_80);
        }
        plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
        (**(code **)(*plVar6 + 0x78))(plVar6,uVar13,0);
      }
    }
    if (local_64 != 0) goto LAB_180032a19;
  }
  if ((local_58 == *(uint *)(*(longlong *)(param_1 + 0x140) + 0xac)) && (cVar1 == '\0')) {
    plVar15 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
    if (param_7 == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x170);
      uVar10 = *(undefined8 *)(param_2 + 0x100);
    }
    else {
      uVar13 = *(undefined8 *)(param_2 + 0x178);
      uVar10 = *(undefined8 *)(param_2 + 0x130);
    }
    (**(code **)(*plVar15 + 0x178))(plVar15,uVar10,uVar13);
    return;
  }
LAB_180032a19:
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
  if (param_7 == 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x170);
    uVar10 = *(undefined8 *)(param_2 + 0x100);
  }
  else {
    uVar13 = *(undefined8 *)(param_2 + 0x178);
    uVar10 = *(undefined8 *)(param_2 + 0x130);
  }
  (**(code **)(*plVar6 + 0x170))
            (plVar6,uVar10,0,0,local_64,(ulonglong)plVar15 & 0xffffffff00000000,uVar13,0,&local_68);
  return;
}


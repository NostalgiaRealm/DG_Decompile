/*
 * FUN_18008f918 at 18008f918
 * undefined8 __fastcall FUN_18008f918(longlong * param_1, longlong param_2, longlong param_3, uint param_4, int param_5)
 * Address ranges: 18008f918-18008fcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18008f918(longlong *param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined7 extraout_var;
  undefined1 *puVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  uint local_118;
  undefined4 local_114;
  longlong local_108;
  uint local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8 [6];
  int local_b0 [6];
  undefined1 local_98 [16];
  undefined4 local_88;
  
  uVar14 = 1;
  puVar10 = (undefined1 *)register0x00000020;
  if ((1 < *(uint *)(param_1 + 7)) && (param_4 != 0)) {
    local_100 = *(uint *)(param_1 + 4);
    local_108 = param_1[10];
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_f0 = 0;
    local_f8 = local_108 + 0x6b0 + (ulonglong)local_100 * 0x18c0;
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x50))(*(longlong **)(param_2 + 0x18),local_98);
    if (param_3 == 0) {
      plVar12 = *(longlong **)(param_2 + 0x28);
    }
    else {
      plVar12 = *(longlong **)(param_3 + 0x28);
    }
    (**(code **)(*plVar12 + 0x40))(plVar12,local_c8);
    (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0x30) + 0x40))
              ((longlong *)**(undefined8 **)(param_2 + 0x30),local_b0);
    uVar8 = (**(code **)(*param_1 + 0x40))(param_1,0);
    uVar9 = (**(code **)(*param_1 + 0x48))(param_1,0);
    cVar7 = FUN_18008dfa8(&local_108,uVar8,uVar9,1,1,1,local_88,local_c8[0],local_b0[0],0,0,0x28,0,0
                          ,0,'\0','\0');
    puVar10 = (undefined1 *)CONCAT71(extraout_var,cVar7);
    if (cVar7 == '\0') {
      uVar14 = 0;
    }
    else {
      uVar16 = 0;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        do {
          if (((param_4 >> (uVar16 & 0x1f) & 1) != 0) && (uVar15 = 1, 1 < *(uint *)(param_1 + 7))) {
            uVar17 = uVar15;
            do {
              bVar6 = (byte)uVar17;
              local_128 = 0;
              local_120 = 0;
              local_114 = 1;
              bVar2 = bVar6 - 1 & 0x1f;
              uVar3 = uVar15;
              if (uVar8 >> bVar2 != 0) {
                uVar3 = uVar8 >> bVar2;
              }
              bVar2 = bVar6 - 1 & 0x1f;
              lVar13 = param_1[0x26];
              uVar11 = 1;
              if (uVar9 >> bVar2 != 0) {
                uVar11 = uVar9 >> bVar2;
              }
              if (lVar13 == 0) {
                lVar13 = param_1[0xf];
              }
              uVar1 = uVar16 * param_5 + uVar17;
              local_11c = uVar3;
              local_118 = uVar11;
              (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x170))
                        (*(longlong **)(param_1[0xb] + 8),local_f0,0,0,0,0,lVar13,uVar1 - 1,
                         &local_128);
              uVar4 = uVar15;
              if (uVar8 >> (bVar6 & 0x1f) != 0) {
                uVar4 = uVar8 >> (bVar6 & 0x1f);
              }
              uVar5 = uVar15;
              if (uVar9 >> (bVar6 & 0x1f) != 0) {
                uVar5 = uVar9 >> (bVar6 & 0x1f);
              }
              if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
                fVar18 = 0.5;
              }
              else {
                fVar18 = 1.0;
              }
              FUN_18008d560(param_1[0x22],(ulonglong)*(uint *)((longlong)param_1 + 0x2c),
                            *(uint *)((longlong)param_1 + 0x2c),uVar17,uVar16,0,0,0.495,0x3efd70a4,
                            (float)uVar4 + 0.495,(float)uVar5 + 0.495,fVar18 / (float)uVar8,
                            fVar18 / (float)uVar9,((float)uVar3 + fVar18) / (float)uVar8,
                            ((float)uVar11 + fVar18) / (float)uVar9,*(undefined8 *)(param_2 + 0x18),
                            *(undefined8 *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar1 * 0x28)
                            ,0,local_f0,uStack_e0,0,0,0,*(char *)((longlong)param_1 + 0x4c),
                            0x80000016,0);
              uVar17 = uVar17 + 1;
            } while (uVar17 < *(uint *)(param_1 + 7));
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)((longlong)param_1 + 0x34));
      }
      puVar10 = (undefined1 *)FUN_18008e2ec(&local_108,1,1);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar10 >> 8),uVar14);
}


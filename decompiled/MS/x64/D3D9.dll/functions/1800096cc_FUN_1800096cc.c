/*
 * FUN_1800096cc at 1800096cc
 * undefined4 __fastcall FUN_1800096cc(longlong param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 1800096cc-1800098a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800096cc(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res10 [4];
  int local_res20;
  longlong local_48 [2];
  
  local_res20 = param_4;
  local_res10[0] = param_2;
  uVar15 = 0;
  bVar17 = param_2 == 0;
  if (!bVar17) {
    for (; (param_2 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
    }
  }
  bVar7 = true;
  while (!bVar17) {
    uVar14 = (ulonglong)uVar15 & 0xff;
    pbVar6 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar15 >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar15 & 7));
    if (!bVar7) break;
    lVar4 = *(longlong *)(&DAT_000066c8 + uVar14 * 8 + param_1);
    if (lVar4 != 0) {
      iVar9 = param_4;
      if (*(longlong *)(lVar4 + 0x68) == 0) {
        lVar10 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x20))
                           (*(longlong **)(lVar4 + 0x78),*(int *)(lVar4 + 0x20) + 0x1000,1);
        *(longlong *)(lVar4 + 0x68) = lVar10;
        iVar9 = local_res20;
        if (lVar10 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                    (*(longlong **)(param_1 + 0x28),uVar14,
                     *(undefined8 *)(*(longlong *)(&DAT_000066c8 + uVar14 * 8 + param_1) + 0x68),
                     *(undefined4 *)(param_1 + 0x6788 + uVar14 * 4),
                     *(undefined4 *)(param_1 + 0x6748 + uVar14 * 4));
          iVar9 = local_res20;
        }
      }
      lVar4 = *(longlong *)(&DAT_000066c8 + uVar14 * 8 + param_1);
      bVar7 = false;
      plVar5 = *(longlong **)(lVar4 + 0x68);
      param_4 = local_res20;
      if (plVar5 != (longlong *)0x0) {
        iVar1 = *(int *)(param_1 + 0x6748 + uVar14 * 4);
        iVar2 = *(int *)(param_1 + 0x6788 + uVar14 * 4);
        uVar15 = iVar1 * param_3 + iVar2;
        if ((uVar15 < *(uint *)(lVar4 + 0x20)) &&
           (uVar13 = iVar1 * (iVar9 + param_3) + iVar2, uVar13 <= *(uint *)(lVar4 + 0x20))) {
          uVar3 = *(uint *)(lVar4 + 0x70);
          if ((uVar15 < uVar3) && (uVar13 <= uVar3)) {
            uVar11 = *(uint *)(lVar4 + 0x74);
LAB_1800097ef:
            bVar17 = true;
            uVar16 = 0;
          }
          else {
            uVar11 = *(uint *)(lVar4 + 0x74);
            if ((uVar11 <= uVar15) && (uVar11 < uVar13)) goto LAB_1800097ef;
            bVar17 = false;
            uVar16 = 1;
          }
          local_48[0] = 0;
          bVar8 = false;
          if (uVar3 != uVar11) {
            bVar8 = bVar17;
          }
          uVar12 = 1;
          if (uVar3 != uVar11) {
            uVar12 = uVar16;
          }
          iVar9 = (**(code **)(*plVar5 + 0x18))
                            (plVar5,uVar12,CONCAT71((uint7)(uint3)(uVar3 >> 8),1),local_48);
          bVar7 = false;
          param_4 = local_res20;
          if (iVar9 == 0) {
            FUN_1800fbec0((undefined8 *)((ulonglong)uVar15 + local_48[0]),
                          (undefined8 *)(*(longlong *)(lVar4 + 8) + (ulonglong)uVar15),
                          (ulonglong)(uint)(iVar1 * local_res20));
            (**(code **)(**(longlong **)(lVar4 + 0x68) + 0x20))();
            bVar7 = true;
            param_4 = local_res20;
            if (bVar8) {
              if (*(uint *)(lVar4 + 0x70) <= uVar15) {
                *(uint *)(lVar4 + 0x74) = uVar13;
                goto LAB_18000987b;
              }
            }
            else {
              *(uint *)(lVar4 + 0x74) = uVar13;
            }
            *(uint *)(lVar4 + 0x70) = uVar15;
          }
        }
      }
    }
LAB_18000987b:
    uVar15 = 0;
    bVar17 = local_res10[0] == 0;
    if (!bVar17) {
      for (; (local_res10[0] >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
      }
    }
  }
  return CONCAT31((int3)(uVar15 >> 8),bVar7);
}


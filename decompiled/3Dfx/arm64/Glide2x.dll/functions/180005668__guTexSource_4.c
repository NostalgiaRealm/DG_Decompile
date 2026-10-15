/*
 * _guTexSource@4 at 180005668
 * undefined __cdecl _guTexSource@4(uint param_1)
 * Address ranges: 180005668-1800059ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexSource_4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
                    /* 0x5668  137  _guTexSource@4
                       0x5668  294  guTexSource */
  lVar6 = FUN_180016878();
  if (*(char *)(lVar6 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar6 + 0x60));
    if ((*(longlong *)(lVar6 + 0xa0) != 0 && param_1 != 0xffffffff) &&
       (param_1 < *(uint *)(lVar6 + 0xa8))) {
      lVar10 = *(longlong *)(lVar6 + 0xa0) + (ulonglong)param_1 * 0xd0;
      iVar4 = *(int *)(lVar10 + 0x4c);
      lVar9 = (longlong)iVar4;
      if (iVar4 < *(int *)(*(longlong *)(lVar6 + 0x30) + 0x833)) {
        if (*(char *)(lVar6 + 100) != '\0') {
          FUN_1800608b0((uint *)(lVar6 + 0x60));
          (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x30))();
          FUN_1800608a0((uint *)(lVar6 + 0x60));
        }
        local_60 = *(uint *)(lVar10 + 0x44);
        uStack_5c = *(undefined4 *)(lVar10 + 0x48);
        local_58 = *(undefined4 *)(lVar10 + 0x10);
        uStack_54 = *(undefined4 *)(lVar10 + 0x20);
        local_50 = *(undefined8 *)(lVar10 + 0x18);
        FUN_180018d78(lVar6,iVar4,0,*(uint *)(lVar10 + 0x54),(char)*(undefined4 *)(lVar10 + 0x50),
                      &local_60);
        if (((*(int *)(lVar10 + 0x20) - 1U & 0xfffffff7) == 0) && (*(char *)(lVar6 + 100) != '\0'))
        {
          bVar3 = *(byte *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar4 + 0x147);
          FUN_1800608b0((uint *)(lVar6 + 0x60));
          FUN_180018640(lVar6,iVar4,(uint)bVar3,(undefined8 *)(lVar10 + 0x5c),0,0xff);
          FUN_1800608a0((uint *)(lVar6 + 0x60));
        }
        if (*(char *)(lVar6 + 100) != '\0') {
          uVar1 = *(uint *)(lVar10 + 0x30);
          uVar2 = *(uint *)(lVar10 + 0x34);
          FUN_1800608b0((uint *)(lVar6 + 0x60));
          if (iVar4 < *(int *)(*(longlong *)(lVar6 + 0x30) + 0x833)) {
            plVar7 = *(longlong **)(lVar6 + 0x18);
            lVar5 = lVar9 * 0x41;
            if ((uVar1 != *(byte *)((longlong)plVar7 + lVar5 + 0x161)) ||
               (uVar2 != *(byte *)((longlong)plVar7 + lVar5 + 0x162))) {
              (**(code **)(*plVar7 + 0x260))(plVar7,iVar4,uVar1,uVar2);
              *(char *)(lVar5 + *(longlong *)(lVar6 + 0x18) + 0x161) = (char)uVar1;
              *(char *)(lVar5 + *(longlong *)(lVar6 + 0x18) + 0x162) = (char)uVar2;
            }
          }
          FUN_1800608a0((uint *)(lVar6 + 0x60));
        }
        if (*(char *)(lVar6 + 100) != '\0') {
          uVar1 = *(uint *)(lVar10 + 0x28);
          uVar2 = *(uint *)(lVar10 + 0x2c);
          FUN_1800608b0((uint *)(lVar6 + 0x60));
          if (iVar4 < *(int *)(*(longlong *)(lVar6 + 0x30) + 0x833)) {
            plVar7 = *(longlong **)(lVar6 + 0x18);
            lVar5 = lVar9 * 0x41;
            if ((uVar2 != *(byte *)((longlong)plVar7 + lVar5 + 0x163)) ||
               (uVar1 != *(byte *)((longlong)plVar7 + lVar5 + 0x164))) {
              (**(code **)(*plVar7 + 0x270))(plVar7,iVar4,uVar2,uVar1);
              *(char *)(lVar5 + *(longlong *)(lVar6 + 0x18) + 0x163) = (char)uVar2;
              *(char *)(lVar5 + *(longlong *)(lVar6 + 0x18) + 0x164) = (char)uVar1;
            }
          }
          FUN_1800608a0((uint *)(lVar6 + 0x60));
        }
        if (*(char *)(lVar6 + 100) != '\0') {
          iVar8 = *(int *)(lVar10 + 0x58);
          uVar1 = *(uint *)(lVar10 + 0x24);
          FUN_1800608b0((uint *)(lVar6 + 0x60));
          if (iVar4 < *(int *)(*(longlong *)(lVar6 + 0x30) + 0x833)) {
            plVar7 = *(longlong **)(lVar6 + 0x18);
            lVar5 = lVar9 * 0x41;
            if ((*(byte *)((longlong)plVar7 + lVar5 + 0x171) != uVar1) ||
               (*(int *)((longlong)plVar7 + lVar5 + 0x172) != iVar8)) {
              (**(code **)(*plVar7 + 0x298))(plVar7,iVar4,uVar1,iVar8);
              *(char *)(lVar5 + *(longlong *)(lVar6 + 0x18) + 0x171) = (char)uVar1;
              *(int *)(lVar5 + *(longlong *)(lVar6 + 0x18) + 0x172) = iVar8;
            }
          }
          FUN_1800608a0((uint *)(lVar6 + 0x60));
        }
        if (*(char *)(lVar6 + 100) != '\0') {
          fVar11 = *(float *)(lVar10 + 0x40);
          FUN_1800608b0((uint *)(lVar6 + 0x60));
          if (iVar4 < *(int *)(*(longlong *)(lVar6 + 0x30) + 0x833)) {
            plVar7 = *(longlong **)(lVar6 + 0x18);
            iVar8 = (int)(fVar11 * 4.0);
            if (iVar8 < -0x20) {
              iVar8 = 0x20;
            }
            if (0x1f < iVar8) {
              iVar8 = 0x1f;
            }
            fVar11 = (float)iVar8 * 0.25;
            if (fVar11 != *(float *)((longlong)plVar7 + lVar9 * 0x41 + 0x176)) {
              (**(code **)(*plVar7 + 0x268))(fVar11,plVar7,iVar4);
              *(float *)(lVar9 * 0x41 + *(longlong *)(lVar6 + 0x18) + 0x176) = fVar11;
            }
          }
          FUN_1800608a0((uint *)(lVar6 + 0x60));
        }
        *(uint *)(lVar6 + (longlong)iVar4 * 4 + 0xb8) = param_1;
      }
    }
    FUN_1800608a0((uint *)(lVar6 + 0x60));
  }
  return;
}


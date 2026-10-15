/*
 * FUN_100844c9 at 100844c9
 * undefined FUN_100844c9(void)
 * Address ranges: 100844c9-10084818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100844c9(int *param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *this;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *this_00;
  char cVar10;
  uint uVar11;
  BOOL BVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  uint local_5c;
  uint local_58;
  uint local_54;
  int iStack_10;
  int aiStack_c [2];
  
  local_54 = 0;
  uVar2 = param_1[9];
  puVar1 = (uint *)(param_1 + 8);
  local_58 = CONCAT31(local_58._1_3_,uVar2 != 1);
  if (param_1[0x3f] == 0) {
    iVar17 = 0x1c;
    if ((&DAT_100d2914)[param_1[7]] != '\0') {
      iVar17 = 0x1f;
    }
    if (((uVar2 == 1) || (param_1[10] == 0)) || (iVar15 = iVar17, (uint)param_1[10] <= *puVar1)) {
      iVar15 = 0;
    }
    uVar18 = param_1[10];
    if (uVar18 == 0) {
      uVar18 = *puVar1;
    }
    FUN_10081718(param_1 + 0x3c,param_1[5],param_1[6],uVar18,uVar2,1,0x1b,iVar17,iVar15,
                 *(undefined4 *)(&DAT_100d2550 + param_1[7] * 4),
                 *(undefined4 *)(&DAT_100d2550 + param_1[7] * 4),0x1c,0,'\x01','\x01',uVar2 != 1,0);
    FUN_100827eb(param_1);
  }
  if ((param_2 != '\0') || (*(char *)((int)param_1 + 0x3d) == '\x01')) {
    FUN_10081cd7(param_1 + 0x3c,local_58,0);
  }
  iVar17 = 0x114;
  if (param_2 == '\0') {
    iVar17 = 0x108;
  }
  uVar3 = *(undefined4 *)((int)param_1 + iVar17);
  if (param_1[0x3f] != 0) {
    local_58 = 0;
    uVar18 = 0;
    if (param_1[9] != 0) {
      do {
        local_5c = 0;
        if (*puVar1 != 0) {
          do {
            cVar10 = (**(code **)(*param_1 + 4))(local_5c,local_58,1);
            if (cVar10 != '\0') {
              local_54 = local_54 | 1 << (local_58 & 0x1f);
            }
            uVar18 = param_1[10];
            if (uVar18 == 0) {
              uVar18 = *puVar1;
            }
            iVar17 = uVar18 * local_58 + local_5c;
            uVar18 = iVar17 * 0x20;
            if (*(char *)((int)param_1 + 0x12d) != '\0') {
              uVar11 = (uint)param_1[6] >> ((byte)local_5c & 0x1f);
              uVar16 = (uint)param_1[5] >> ((byte)local_5c & 0x1f);
              if (uVar11 == 0) {
                uVar11 = 1;
              }
              if (uVar16 == 0) {
                uVar16 = 1;
              }
              SetRect((LPRECT)(param_1[0x41] + 0x10 + uVar18),0,0,uVar16,uVar11);
            }
            BVar12 = IsRectEmpty((RECT *)((uVar18 | 0x10) + param_1[0x41]));
            if (BVar12 == 0) {
              iVar15 = param_1[0xb];
              piVar20 = (int *)param_1[0x15];
              iVar19 = param_1[0x49];
              uVar11 = param_1[0x43];
              this = *(void **)(param_1[0x11] + 0x15dc);
              iVar4 = param_1[0x3f];
              iVar5 = param_1[0x41];
              iVar6 = *(int *)(uVar18 + 0x1c + iVar5);
              iVar7 = *(int *)(uVar18 + 0x18 + iVar5);
              iVar8 = *(int *)(uVar18 + 0x14 + iVar5);
              iVar5 = *(int *)(uVar18 + 0x10 + iVar5);
              iVar9 = param_1[2];
              uVar16 = param_1[7];
              this_00 = (void *)param_1[0x38];
              piVar13 = FUN_100ba192(*(void **)(param_1[0x11] + 0x15d8),&iStack_10,param_1[0x18],0);
              piVar14 = FUN_100ba192(this,aiStack_c,uVar11,iVar17);
              FUN_1007ef76(this_00,uVar16,local_5c,local_58,iVar15 * local_58 + local_5c,iVar17,
                           iVar9,iVar5,iVar8,iVar7,iVar6,iVar4,piVar14,iVar19,piVar20,piVar13);
              SetRectEmpty((LPRECT)((uVar18 | 0x10) + param_1[0x41]));
              local_54 = local_54 | 1 << (local_58 & 0x1f);
            }
            local_5c = local_5c + 1;
          } while (local_5c < *puVar1);
        }
        uVar18 = param_1[9];
        local_58 = local_58 + 1;
      } while (local_58 < uVar18);
    }
    *(undefined1 *)((int)param_1 + 0x12d) = 0;
    if (*(char *)((int)param_1 + 0x3d) == '\x01') {
      FUN_10081bba(param_1 + 0x12,*puVar1,uVar18);
      *(undefined1 *)((int)param_1 + 0x3d) = 2;
    }
    if (local_54 != 0) {
      uVar18 = param_1[10];
      if (uVar18 == 0) {
        uVar18 = *puVar1;
      }
      FUN_10082e1b(param_1,(int)(param_1 + 0x3c),local_54,param_1[0x42],(uint)(uVar2 != 1),uVar18);
    }
  }
  return uVar3;
}


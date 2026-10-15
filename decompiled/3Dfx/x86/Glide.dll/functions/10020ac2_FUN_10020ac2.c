/*
 * FUN_10020ac2 at 10020ac2
 * undefined4 __fastcall FUN_10020ac2(int param_1)
 * Address ranges: 10020ac2-10020d84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10020ac2(int param_1)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar8;
  uint unaff_EBX;
  uint local_4c;
  uint local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_38 [4];
  int local_28;
  int local_24;
  int *local_20 [2];
  uint local_18;
  int *local_14 [2];
  uint local_c [2];
  
  iVar2 = *(int *)(param_1 + 0x138);
  iVar8 = *(int *)(*(int *)(iVar2 + 4) + 0x3f);
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  *(int *)(param_1 + 0x28) = iVar8;
  iVar3 = *(int *)(iVar2 + 0xa4);
  piVar4 = *(int **)(iVar2 + 0xa0);
  local_44 = (int *)0x0;
  local_48 = 0xffffffff;
  local_4c = 0xffffffff;
  local_40 = piVar4;
  local_3c = iVar3;
  uVar6 = FUN_10027d82((void *)(param_1 + 0x380),piVar4,iVar3,iVar8,
                       (uint)*(byte *)(*(int *)(iVar2 + 4) + 0x54),(int *)&local_44,&local_4c,
                       &local_48);
  if ((char)uVar6 != '\0') {
    uVar7 = FUN_10027a36((void *)(param_1 + 0x140),piVar4,iVar3,*(int *)(param_1 + 0x28),local_38,
                         (int *)(local_38 + 3),(uint *)local_20,(uint *)local_14);
    if ((char)uVar7 != '\0') {
      uVar7 = FUN_10027a36((void *)(param_1 + 0x260),piVar4,iVar3,*(int *)(param_1 + 0x28),
                           local_38 + 1,&local_28,(uint *)(local_20 + 1),(uint *)(local_14 + 1));
      if ((char)uVar7 != '\0') {
        uVar7 = FUN_10027a36((void *)(param_1 + 0x380),piVar4,iVar3,*(int *)(param_1 + 0x28),
                             local_38 + 2,&local_24,&local_18,local_c);
        if ((char)uVar7 != '\0') {
          FUN_10027f97(param_1 + 0x380);
          uVar6 = 0;
          *(int **)(param_1 + 0x44c) = local_44;
          *(uint *)(param_1 + 0x454) = local_48;
          *(uint *)(param_1 + 0x450) = local_4c;
          do {
            iVar8 = uVar6 * 0x120;
            FUN_10027cdd(param_1 + 0x140 + iVar8);
            *(int **)(param_1 + 0x1f8 + iVar8) = local_38[uVar6];
            *(int **)(param_1 + 0x200 + iVar8) = local_20[uVar6];
            *(int **)(param_1 + 0x204 + iVar8) = local_14[uVar6];
            iVar2 = uVar6 + 3;
            uVar6 = uVar6 + 1;
            *(int **)(param_1 + 0x1fc + iVar8) = local_38[iVar2];
            *(int **)(param_1 + 0x168 + iVar8) = local_40;
            *(int *)(param_1 + 0x16c + iVar8) = local_3c;
            *(undefined4 *)(param_1 + 0x170 + iVar8) = *(undefined4 *)(param_1 + 0x28);
          } while (uVar6 < 3);
          return CONCAT31((int3)((uint)local_3c >> 8),1);
        }
        (**(code **)(*local_38[1] + 8))(local_38[1]);
        (**(code **)(*local_38[3] + 8))(local_38[3]);
        FUN_1003c73a(*(void **)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x15d8),local_20[1],2
                     ,(int *)0x0,0,0);
        FUN_1003c73a(*(void **)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x15dc),local_14[1],2
                     ,(int *)0x0,0,0);
      }
      (**(code **)(*local_38[0] + 8))(local_38[0]);
      (**(code **)(*local_38[2] + 8))(local_38[2]);
      FUN_1003c73a(*(void **)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x15d8),local_20[0],2,
                   (int *)0x0,0,0);
      FUN_1003c73a(*(void **)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x15dc),local_14[0],2,
                   (int *)0x0,0,0);
    }
    (**(code **)(*local_44 + 8))(local_44);
    uVar6 = *(uint *)(*(int *)(param_1 + 0x138) + 0x3188);
    pvVar5 = *(void **)(uVar6 + 0x15e0);
    if (local_4c != 0xffffffff) {
      p_Var1 = (LPCRITICAL_SECTION)((int)pvVar5 + 0x1c);
      EnterCriticalSection(p_Var1);
      FUN_1003c380(pvVar5,local_4c,1);
      LeaveCriticalSection(p_Var1);
      uVar6 = extraout_EAX;
    }
    if (unaff_EBX != 0xffffffff) {
      pvVar5 = *(void **)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x15d8);
      p_Var1 = (LPCRITICAL_SECTION)((int)pvVar5 + 0x1c);
      EnterCriticalSection(p_Var1);
      FUN_1003c380(pvVar5,unaff_EBX,1);
      LeaveCriticalSection(p_Var1);
      uVar6 = extraout_EAX_00;
    }
  }
  return uVar6 & 0xffffff00;
}


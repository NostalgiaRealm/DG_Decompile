/*
 * FUN_1004a525 at 1004a525
 * undefined4 __thiscall FUN_1004a525(void * this, int param_1, byte * param_2, undefined * param_3, undefined4 param_4)
 * Address ranges: 1004a525-1004a764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1004a525(void *this,int param_1,byte *param_2,undefined *param_3,undefined4 param_4)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined1 local_30 [32];
  uint local_10;
  undefined *local_c;
  void *local_8;
  
  local_8 = this;
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar6 = 0x80070057;
  if (param_3 == (undefined *)0x0) {
LAB_1004a751:
    LeaveCriticalSection(DAT_1006bbd0);
    return uVar6;
  }
  local_10 = 0;
LAB_1004a55c:
  puVar7 = (&PTR_DAT_1005dcec)[*(int *)((int)this + 0x98)] + local_10 * 0x298;
  iVar4 = 0;
  do {
    local_c = puVar7;
    if (*(int *)(param_1 + iVar4 * 4) != (&DAT_1005d120)[iVar4]) {
      iVar4 = 0;
      goto LAB_1004a71a;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
LAB_1004a590:
  iVar4 = FUN_1005c99d(param_2,puVar7 + 0x10,0x10);
  puVar5 = (undefined *)0x0;
  if (iVar4 == 0) {
    puVar5 = puVar7;
  }
  goto LAB_1004a5a8;
  while (iVar4 = iVar4 + 1, puVar5 = puVar7, iVar4 != 4) {
LAB_1004a71a:
    if (*(int *)(param_2 + iVar4 * 4) != *(int *)(puVar7 + iVar4 * 4)) goto LAB_1004a590;
  }
LAB_1004a5a8:
  if (puVar5 != (undefined *)0x0) {
    uVar6 = 0x88760154;
    iVar4 = (**(code **)(**(int **)((int)this + 0x90) + 0x48))();
    this = local_8;
    if (((*(uint *)(iVar4 + 0x158) & 0x20000) != 0) && ((*(uint *)(iVar4 + 0x34) & 0x700) != 0)) {
      iVar2 = 1;
      if ((*(uint *)(iVar4 + 0x34) & 0x400) != 0) {
        puVar3 = (undefined4 *)(**(code **)(**(int **)((int)local_8 + 0x90) + 0x4c))(local_30,0x17);
        puVar8 = (undefined4 *)(puVar7 + 0x1f8);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar2 = (*(code *)param_3)(puVar7 + 0x1f8,param_4);
        puVar7 = local_c;
      }
      this = local_8;
      if (iVar2 != 0) {
        if ((*(uint *)(iVar4 + 0x34) & 0x200) != 0) {
          puVar3 = (undefined4 *)
                   (**(code **)(**(int **)((int)local_8 + 0x90) + 0x4c))(local_30,0x18);
          puVar8 = (undefined4 *)(puVar7 + 0x218);
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar8 = puVar8 + 1;
          }
          iVar2 = (*(code *)param_3)(puVar7 + 0x218,param_4);
        }
        this = local_8;
        if (iVar2 != 0) {
          if ((*(uint *)(iVar4 + 0x34) & 0x200) != 0) {
            puVar3 = (undefined4 *)
                     (**(code **)(**(int **)((int)local_8 + 0x90) + 0x4c))(local_30,0x19);
            puVar8 = (undefined4 *)(local_c + 0x238);
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar8 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar2 = (*(code *)param_3)(local_c + 0x238,param_4);
          }
          this = local_8;
          if (iVar2 != 0) {
            if ((*(uint *)(iVar4 + 0x34) & 0x100) != 0) {
              puVar3 = (undefined4 *)
                       (**(code **)(**(int **)((int)local_8 + 0x90) + 0x4c))(local_30,0x18);
              puVar8 = (undefined4 *)(local_c + 600);
              for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar8 = puVar8 + 1;
              }
              *(undefined4 *)(local_c + 0x264) = 0x20;
              iVar2 = (*(code *)param_3)(local_c + 600,param_4);
            }
            this = local_8;
            if ((iVar2 != 0) && ((*(uint *)(iVar4 + 0x34) & 0x100) != 0)) {
              puVar3 = (undefined4 *)
                       (**(code **)(**(int **)((int)local_8 + 0x90) + 0x4c))(local_30,0x1b);
              puVar8 = (undefined4 *)(local_c + 0x278);
              for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar8 = puVar8 + 1;
              }
              (*(code *)param_3)(local_c + 0x278,param_4);
            }
          }
        }
      }
      uVar6 = 0;
    }
  }
  local_10 = local_10 + 1;
  if (6 < local_10) goto LAB_1004a751;
  goto LAB_1004a55c;
}


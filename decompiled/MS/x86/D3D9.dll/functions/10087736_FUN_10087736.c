/*
 * FUN_10087736 at 10087736
 * int __thiscall FUN_10087736(void * this, undefined4 param_1)
 * Address ranges: 10087736-100878b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10087736(void *this,undefined4 param_1)

{
  char cVar1;
  BOOL BVar2;
  void *this_00;
  int *piVar3;
  int iVar4;
  void *this_01;
  int iVar5;
  int extraout_EDX;
  undefined4 *puVar6;
  int *piVar7;
  uint local_3c;
  uint local_38;
  int local_34 [4];
  int local_24;
  undefined4 local_20 [7];
  
  cVar1 = FUN_10085350((int)this);
  if (cVar1 == '\0') {
    iVar4 = FUN_1008231f(this_01,param_1);
  }
  else {
    puVar6 = (undefined4 *)0x0;
    local_3c = 0;
    if (*(int *)((int)this + 0x24) != 0) {
      do {
        local_38 = 0;
        if (*(int *)((int)this + 0x20) != 0) {
          do {
            if ((*(int *)((int)this + 0x5c) != 0) &&
               (BVar2 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x5c) + 0x10 +
                                            *(int *)((int)this + 0x2c) * (int)puVar6 * 0x20)),
               BVar2 == 0)) {
              local_3c = local_3c | 1 << ((uint)puVar6 & 0x1f);
            }
            cVar1 = FUN_10086b12(this,local_38,puVar6,1);
            if (cVar1 != '\0') {
              local_3c = local_3c | 1 << ((uint)puVar6 & 0x1f);
            }
            local_38 = local_38 + 1;
          } while (local_38 < *(uint *)((int)this + 0x20));
        }
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      } while (puVar6 < *(undefined4 **)((int)this + 0x24));
    }
    cVar1 = FUN_1003a4d0(*(int *)((int)this + 0x34));
    if (cVar1 == '\0') {
      if (extraout_EDX == 0) {
        FUN_10085cfd(this);
      }
      iVar4 = *(int *)((int)this + 0x108);
      if (((char)param_1 != '\0') && (iVar4 != -1)) {
        FUN_10081cd7((void *)((int)this + 0xf0),(uint)(*(int *)((int)this + 0x24) != 1),
                     *(int *)((int)this + 0x54));
        iVar4 = *(int *)((int)this + 0x114);
      }
      if (local_3c != 0) {
        FUN_10082e1b(this,(int)this + 0x48,local_3c,*(uint *)((int)this + 0x108),
                     (uint)(*(int *)((int)this + 0x24) != 1),0);
      }
    }
    else {
      if (extraout_EDX == 0) {
        this_00 = (void *)FUN_10085368((int)this);
        piVar3 = FUN_1008f0a2(this_00,local_20);
        iVar4 = *(int *)((int)this + 0x24);
        piVar7 = local_34;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar7 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar7 = piVar7 + 1;
        }
        FUN_10081a42((void *)((int)this + 0xf0),*(int **)((int)this + 0x54),local_34[1],0,
                     *(undefined4 *)(&DAT_100d2550 + *(int *)((int)this + 0x1c) * 4),0,local_24,
                     iVar4 != 1);
      }
      iVar4 = *(int *)((int)this + 0x108);
    }
  }
  return iVar4;
}


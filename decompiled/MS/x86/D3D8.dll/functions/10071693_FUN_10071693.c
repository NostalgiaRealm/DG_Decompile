/*
 * FUN_10071693 at 10071693
 * uint __fastcall FUN_10071693(void * param_1)
 * Address ranges: 10071693-100717e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10071693(void *param_1)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  void *this;
  int *piVar4;
  uint uVar5;
  int *extraout_ECX;
  int iVar6;
  int extraout_EDX;
  undefined4 *puVar7;
  int *piVar8;
  uint local_3c;
  uint local_38;
  int local_34 [4];
  int local_24;
  undefined4 local_20 [7];
  
  cVar2 = FUN_1006f16a((int)param_1);
  if (cVar2 == '\0') {
    uVar5 = FUN_1006c1a0(extraout_ECX);
  }
  else {
    puVar7 = (undefined4 *)0x0;
    local_3c = 0;
    if (*(int *)((int)param_1 + 0x24) != 0) {
      do {
        local_38 = 0;
        if (*(int *)((int)param_1 + 0x20) != 0) {
          do {
            if ((*(int *)((int)param_1 + 0x5c) != 0) &&
               (BVar3 = IsRectEmpty((RECT *)(*(int *)((int)param_1 + 0x5c) + 0x10 +
                                            *(int *)((int)param_1 + 0x2c) * (int)puVar7 * 0x20)),
               BVar3 == 0)) {
              local_3c = local_3c | 1 << ((uint)puVar7 & 0x1f);
            }
            cVar2 = FUN_10070a6f(param_1,local_38,puVar7,1);
            if (cVar2 != '\0') {
              local_3c = local_3c | 1 << ((uint)puVar7 & 0x1f);
            }
            local_38 = local_38 + 1;
          } while (local_38 < *(uint *)((int)param_1 + 0x20));
        }
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while (puVar7 < *(undefined4 **)((int)param_1 + 0x24));
    }
    cVar2 = FUN_100306bf(*(int *)((int)param_1 + 0x34));
    if (cVar2 == '\0') {
      if (extraout_EDX == 0) {
        FUN_1006fb03(param_1);
      }
      uVar5 = *(uint *)((int)param_1 + 0x108);
      if (local_3c != 0) {
        FUN_1006cc6f(param_1,(int)param_1 + 0x48,local_3c,uVar5,
                     (uint)(*(int *)((int)param_1 + 0x24) != 1),0);
      }
    }
    else {
      if (extraout_EDX == 0) {
        this = (void *)FUN_1006f182((int)param_1);
        piVar4 = FUN_10078e00(this,local_20);
        iVar1 = *(int *)((int)param_1 + 0x24);
        piVar8 = local_34;
        for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar8 = piVar8 + 1;
        }
        FUN_1006bb4f((void *)((int)param_1 + 0xf0),*(int **)((int)param_1 + 0x54),local_34[1],0,
                     *(undefined4 *)(&DAT_100b0408 + *(int *)((int)param_1 + 0x1c) * 4),0,local_24,
                     iVar1 != 1);
      }
      uVar5 = *(uint *)((int)param_1 + 0x108);
    }
  }
  return uVar5;
}


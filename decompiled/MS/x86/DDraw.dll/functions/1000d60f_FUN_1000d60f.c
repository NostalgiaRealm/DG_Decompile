/*
 * FUN_1000d60f at 1000d60f
 * undefined4 __fastcall FUN_1000d60f(void * param_1)
 * Address ranges: 1000d60f-1000d78f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000d60f(void *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  BOOL BVar4;
  void *this;
  int *piVar5;
  undefined4 uVar6;
  int *extraout_ECX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint local_3c;
  uint local_38;
  int local_34 [4];
  int local_24;
  undefined4 local_20 [7];
  
  cVar2 = FUN_10006992(*(int *)((int)param_1 + 0x34));
  cVar3 = FUN_1000ce28((int)param_1);
  if (cVar3 == '\0') {
    uVar6 = FUN_1000b188(extraout_ECX);
  }
  else {
    uVar8 = 0;
    local_3c = 0;
    if (*(int *)((int)param_1 + 0x24) != 0) {
      do {
        local_38 = 0;
        if (*(int *)((int)param_1 + 0x20) != 0) {
          do {
            if ((*(int *)((int)param_1 + 0x60) != 0) &&
               (BVar4 = IsRectEmpty((RECT *)(*(int *)((int)param_1 + 0x2c) * uVar8 * 0x1c +
                                            *(int *)((int)param_1 + 0x60) + 0xc)), BVar4 == 0)) {
              local_3c = local_3c | 1 << (uVar8 & 0x1f);
            }
            cVar3 = FUN_1000dd43(param_1,local_38,uVar8,1);
            if (cVar3 != '\0') {
              local_3c = local_3c | 1 << (uVar8 & 0x1f);
            }
            local_38 = local_38 + 1;
          } while (local_38 < *(uint *)((int)param_1 + 0x20));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((int)param_1 + 0x24));
    }
    if (cVar2 == '\0') {
      if (*(int *)((int)param_1 + 0xc0) == 0) {
        FUN_1000d581(param_1);
      }
      uVar6 = *(undefined4 *)((int)param_1 + 0xc0);
      if (local_3c != 0) {
        FUN_1000be03(param_1,(int)param_1 + 0x48,(int)param_1 + 0xac,local_3c,
                     *(int *)((int)param_1 + 0x2c));
      }
    }
    else {
      if ((*(int *)((int)param_1 + 0xb8) == 0) &&
         ((*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + *(int *)((int)param_1 + 0x40))
           != 0xa000 || (*(int *)((int)param_1 + 0xe4) == 1)))) {
        this = (void *)FUN_1000ce40((int)param_1);
        piVar5 = FUN_10021db4(this,local_20);
        iVar1 = *(int *)((int)param_1 + 0x24);
        piVar9 = local_34;
        for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar9 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar9 = piVar9 + 1;
        }
        FUN_1000ad9a((void *)((int)param_1 + 0xac),*(int **)((int)param_1 + 0x54),local_34[1],0,
                     local_24,iVar1 != 1);
      }
      uVar6 = *(undefined4 *)((int)param_1 + 0xc0);
    }
  }
  if (*(char *)((int)param_1 + 0xda) != '\0') {
    uVar6 = FUN_1000e187(param_1);
  }
  return uVar6;
}


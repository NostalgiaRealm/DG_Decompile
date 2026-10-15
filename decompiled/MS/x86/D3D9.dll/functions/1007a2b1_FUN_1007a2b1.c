/*
 * FUN_1007a2b1 at 1007a2b1
 * int __thiscall FUN_1007a2b1(void * this, undefined4 param_1)
 * Address ranges: 1007a2b1-1007a451
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1007a2b1(void *this,undefined4 param_1)

{
  char cVar1;
  char cVar2;
  BOOL BVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  void *this_01;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint local_3c;
  uint local_38;
  int local_34 [4];
  int local_24;
  undefined4 local_20 [7];
  
  cVar1 = FUN_1003a4d0(*(int *)((int)this + 0x34));
  cVar2 = FUN_10079aa0((int)this);
  if (cVar2 == '\0') {
    iVar5 = FUN_10077e00(this_01,param_1);
  }
  else {
    uVar7 = 0;
    local_3c = 0;
    if (*(int *)((int)this + 0x24) != 0) {
      do {
        local_38 = 0;
        if (*(int *)((int)this + 0x20) != 0) {
          do {
            if ((*(int *)((int)this + 0x60) != 0) &&
               (BVar3 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x2c) * uVar7 * 0x1c +
                                            *(int *)((int)this + 0x60) + 0xc)), BVar3 == 0)) {
              local_3c = local_3c | 1 << (uVar7 & 0x1f);
            }
            cVar2 = FUN_1007aa05(this,local_38,uVar7,1);
            if (cVar2 != '\0') {
              local_3c = local_3c | 1 << (uVar7 & 0x1f);
            }
            local_38 = local_38 + 1;
          } while (local_38 < *(uint *)((int)this + 0x20));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)((int)this + 0x24));
    }
    if (cVar1 == '\0') {
      if (*(int *)((int)this + 0xc0) == 0) {
        FUN_1007a223(this);
      }
      iVar5 = *(int *)((int)this + 0xc0);
      if (((char)param_1 != '\0') && (iVar5 != 0)) {
        FUN_10077aad((void *)((int)this + 0xac),*(int *)((int)this + 0x54));
        iVar5 = *(int *)((int)this + 200);
      }
      if (local_3c != 0) {
        FUN_10078ac8(this,(int)this + 0x48,(int)this + 0xac,local_3c,*(int *)((int)this + 0x2c));
      }
    }
    else {
      if ((*(int *)((int)this + 0xb8) == 0) &&
         ((*(int *)(*(int *)((int)this + 0x10) * 0x1510 + 0x520 + *(int *)((int)this + 0x40)) !=
           0xa000 || (*(int *)((int)this + 0xe4) == 1)))) {
        this_00 = (void *)FUN_10079ab8((int)this);
        piVar4 = FUN_1008f0a2(this_00,local_20);
        iVar5 = *(int *)((int)this + 0x24);
        piVar8 = local_34;
        for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar8 = piVar8 + 1;
        }
        FUN_100778a3((void *)((int)this + 0xac),*(int **)((int)this + 0x54),local_34[1],0,local_24,
                     iVar5 != 1);
      }
      iVar5 = *(int *)((int)this + 0xc0);
    }
  }
  if (*(char *)((int)this + 0xda) != '\0') {
    iVar5 = FUN_1007ae49(this,(char)param_1);
  }
  return iVar5;
}


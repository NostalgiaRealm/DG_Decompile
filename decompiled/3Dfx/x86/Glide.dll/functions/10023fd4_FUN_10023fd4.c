/*
 * FUN_10023fd4 at 10023fd4
 * undefined __thiscall FUN_10023fd4(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10023fd4-1002426a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10024100) */

void __thiscall FUN_10023fd4(void *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *this_00;
  undefined4 *puVar9;
  undefined4 *local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_100210e5((int)this + 0x3440);
  iVar3 = *(int *)((int)this + 0x3188);
  FUN_100360e0((int *)(iVar3 + 0x11c0));
  uVar8 = param_1 * 0x3c;
  cVar2 = *(char *)(iVar3 + 0x12ec);
  uVar1 = uVar8 + 4;
  if ((cVar2 == '\0') || (0x3eff < uVar1)) {
    local_1c = param_2;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
    local_c = 0;
    if ((cVar2 != '\0') &&
       (bVar4 = FUN_10046e00((void *)(*(int *)((int)this + 0x3188) + 0x14f0),uVar8,(int *)&local_14)
       , puVar6 = local_14, local_1c = param_2, bVar4)) {
      FUN_100500b0(local_14,param_2,uVar8);
      local_1c = puVar6;
    }
    iVar3 = *(int *)((int)this + 0x3188);
    this_00 = (int *)(iVar3 + 0x11c0);
    if (*(char *)(iVar3 + 0x12ec) != '\0') {
      puVar6 = (undefined4 *)FUN_10036000(this_00,0x18);
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = 0x18;
        puVar6[2] = this;
        puVar6[3] = param_1;
        puVar6[4] = local_1c;
        puVar6[5] = local_14;
        puVar6[6] = local_10;
        puVar6[7] = local_c;
        puVar7 = (undefined4 *)((int)puVar6 + 0x23U & 0xfffffffc);
        *puVar7 = 0;
        *puVar6 = FUN_10024280;
        this_00[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar7;
        if (*(char *)(iVar3 + 0x12ed) != '\0') {
          *this_00 = 0;
          SetEvent(*(HANDLE *)(iVar3 + 0x1220));
          return;
        }
        goto LAB_10024260;
      }
      FUN_10021ec0(this_00);
    }
    puVar6 = *(undefined4 **)(iVar3 + 0x12d0);
    *puVar6 = this;
    puVar6[1] = param_1;
    puVar6[2] = local_1c;
    puVar6[3] = local_14;
    puVar6[4] = local_10;
    puVar6[5] = local_c;
    FUN_10024280(puVar6);
  }
  else {
    iVar3 = *(int *)((int)this + 0x3188);
    this_00 = (int *)(iVar3 + 0x11c0);
    if (*(char *)(iVar3 + 0x12ec) != '\0') {
      iVar5 = (uint)(uVar1 != 0) * 4 + 8;
      if (uVar1 != 0) {
        iVar5 = iVar5 + uVar1;
      }
      puVar6 = (undefined4 *)FUN_10036000(this_00,iVar5);
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = iVar5;
        puVar7 = puVar6 + (uVar1 != 0) + 2;
        *puVar7 = this;
        puVar9 = (undefined4 *)((int)puVar7 + 0xbU & 0xfffffffc);
        puVar7[1] = param_1;
        if (uVar8 != 0xfffffffc) {
          puVar6[2] = puVar9;
          FUN_100500b0(puVar9,param_2,uVar8);
          puVar9 = puVar9 + param_1 * 0xf + 1;
        }
        *puVar9 = 0;
        *puVar6 = FUN_1002426b;
        this_00[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
        if (*(char *)(iVar3 + 0x12ed) != '\0') {
          *this_00 = 0;
          SetEvent(*(HANDLE *)(iVar3 + 0x1220));
          return;
        }
        goto LAB_10024260;
      }
      FUN_10021ec0(this_00);
    }
    puVar7 = *(undefined4 **)(iVar3 + 0x12d0);
    puVar6 = puVar7 + (uVar1 != 0);
    *puVar6 = this;
    puVar6[1] = param_1;
    if (uVar1 != 0) {
      *puVar7 = puVar6 + 2;
      FUN_100500b0(puVar6 + 2,param_2,uVar8);
    }
    FUN_1002426b(puVar7);
  }
LAB_10024260:
  *this_00 = 0;
  return;
}


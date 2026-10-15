/*
 * FUN_100233cd at 100233cd
 * undefined __thiscall FUN_100233cd(void * this, int param_1, undefined4 * param_2, undefined1 param_3)
 * Address ranges: 100233cd-1002367f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10023502) */

void __thiscall FUN_100233cd(void *this,int param_1,undefined4 *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int *this_00;
  undefined4 *puVar9;
  undefined4 *local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_100210e5((int)this + 0x3440);
  iVar2 = *(int *)((int)this + 0x3188);
  FUN_100360e0((int *)(iVar2 + 0x11c0));
  uVar4 = param_1 * 0x3c;
  cVar1 = *(char *)(iVar2 + 0x12ec);
  uVar8 = uVar4 + 4;
  if ((cVar1 == '\0') || (0x3eff < uVar8)) {
    local_1c = param_2;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
    local_c = 0;
    if ((cVar1 != '\0') &&
       (bVar3 = FUN_10046e00((void *)(*(int *)((int)this + 0x3188) + 0x14f0),uVar4,(int *)&local_14)
       , puVar6 = local_14, local_1c = param_2, bVar3)) {
      FUN_100500b0(local_14,param_2,uVar4);
      local_1c = puVar6;
    }
    iVar2 = *(int *)((int)this + 0x3188);
    this_00 = (int *)(iVar2 + 0x11c0);
    if (*(char *)(iVar2 + 0x12ec) != '\0') {
      puVar6 = (undefined4 *)FUN_10036000(this_00,0x1c);
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = 0x1c;
        puVar9 = (undefined4 *)((int)puVar6 + 0x27U & 0xfffffffc);
        puVar6[2] = this;
        puVar6[3] = param_1;
        puVar6[4] = local_1c;
        *(undefined1 *)(puVar6 + 5) = param_3;
        puVar6[6] = local_14;
        puVar6[7] = local_c;
        puVar6[8] = local_10;
        *puVar9 = 0;
        *puVar6 = FUN_1002369f;
        this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
        if (*(char *)(iVar2 + 0x12ed) != '\0') {
          *this_00 = 0;
          SetEvent(*(HANDLE *)(iVar2 + 0x1220));
          return;
        }
        goto LAB_10023675;
      }
      FUN_10021ec0(this_00);
    }
    puVar6 = *(undefined4 **)(iVar2 + 0x12d0);
    *puVar6 = this;
    puVar6[1] = param_1;
    puVar6[2] = local_1c;
    *(undefined1 *)(puVar6 + 3) = param_3;
    puVar6[4] = local_14;
    puVar6[5] = local_c;
    puVar6[6] = local_10;
    FUN_1002369f(puVar6);
  }
  else {
    iVar2 = *(int *)((int)this + 0x3188);
    this_00 = (int *)(iVar2 + 0x11c0);
    if (*(char *)(iVar2 + 0x12ec) != '\0') {
      iVar5 = (uint)(uVar8 != 0) * 4 + 0xc;
      if (uVar8 != 0) {
        iVar5 = iVar5 + uVar8;
      }
      puVar6 = (undefined4 *)FUN_10036000(this_00,iVar5);
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = iVar5;
        uVar8 = (uint)(uVar8 != 0);
        puVar6[uVar8 + 2] = this;
        puVar6[uVar8 + 3] = param_1;
        puVar9 = (undefined4 *)((int)puVar6 + (uVar8 + 2) * 4 + 0xf & 0xfffffffc);
        *(undefined1 *)(puVar6 + uVar8 + 4) = param_3;
        if (uVar4 != 0xfffffffc) {
          puVar6[2] = puVar9;
          FUN_100500b0(puVar9,param_2,uVar4);
          puVar9 = puVar9 + param_1 * 0xf + 1;
        }
        *puVar9 = 0;
        *puVar6 = FUN_10023680;
        this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
        if (*(char *)(iVar2 + 0x12ed) != '\0') {
          *this_00 = 0;
          SetEvent(*(HANDLE *)(iVar2 + 0x1220));
          return;
        }
        goto LAB_10023675;
      }
      FUN_10021ec0(this_00);
    }
    puVar6 = *(undefined4 **)(iVar2 + 0x12d0);
    uVar7 = (uint)(uVar8 != 0);
    puVar6[uVar7] = this;
    puVar6[uVar7 + 1] = param_1;
    *(undefined1 *)(puVar6 + uVar7 + 2) = param_3;
    if (uVar8 != 0) {
      *puVar6 = puVar6 + uVar7 + 3;
      FUN_100500b0(puVar6 + uVar7 + 3,param_2,uVar4);
    }
    FUN_10023680(puVar6);
  }
LAB_10023675:
  *this_00 = 0;
  return;
}

